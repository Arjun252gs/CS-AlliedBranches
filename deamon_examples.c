/*
The program illustrates deamon with a fork call and detaches from terminal, runs in the background, logs the timestamps periodically to /tmp/daemon_log.txt (every 5 seconds).
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <fcntl.h>

void create_daemon() {
    pid_t pid = fork();

    if (pid < 0) exit(EXIT_FAILURE);   // fork failed
    if (pid > 0) exit(EXIT_SUCCESS);   // parent exits

    // child continues
    if (setsid() < 0) exit(EXIT_FAILURE); // new session

    // change working directory and set file permissions
    chdir("/");
    umask(0);

    // redirect standard file descriptors
    close(STDIN_FILENO);
    close(STDOUT_FILENO);
    close(STDERR_FILENO);

    // open syslog or your own log file
    int fd = open("/tmp/daemon_log.txt", O_CREAT | O_WRONLY | O_APPEND, 0644);
    if (fd < 0) exit(EXIT_FAILURE);

    // daemon loop
    while (1) {
        time_t now = time(NULL);
        char *time_str = ctime(&now);
        dprintf(fd, "Daemon active at: %s", time_str);
        fsync(fd);
        sleep(5);
    }

    close(fd);
}

int main() {
    create_daemon();
    return 0;
}
