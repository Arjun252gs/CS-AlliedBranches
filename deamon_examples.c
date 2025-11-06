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
//-------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <fcntl.h>
   int main()
   {	
	while (1) {
        	time_t now = time(NULL);
		char *time_str = ctime(&now);
        	printf("Active at: %s", time_str);
        	sleep(5);
    	}

	return 0;
    }
//--------------------------------
int main()
   {	
	FILE *fp = fopen("/tmp/my_log.txt", "w");
	while (1) {
        	time_t now = time(NULL);
		char *time_str = ctime(&now);
        	fprintf(fp, "Active at: %s", time_str);
        	sleep(5);
    	}
	fclose(fp);
	return 0;
    }
//-------------------------------------------
int main()
   {	
	FILE *fp = fopen("/tmp/my_log.txt", "w");
	int i=1;
	while (i<100) {
        	time_t now = time(NULL);
		char *time_str = ctime(&now);
        	fprintf(fp, "Active at: %s", time_str);
        	sleep(5);
		i++;
    	}
	if(i==100)
		exit(0);
	return 0;
    }
//---------------------------------------------
int main()
   {	
	FILE *fp = fopen("/tmp/my_log.txt", "w");
	int i=1;
	while (i<100) {
        	time_t now = time(NULL);
		char *time_str = ctime(&now);
        	fprintf(fp, "Active at: %s", time_str);
        	sleep(5);
		i++;
    	}
	if(i==100){
		fclose(fp);
		_Exit(0);
	}
	return 0;
    }
//-------------------------------------------------
//- https://chatgpt.com/share/690c2184-6dc0-8012-b5cf-d9598a4ffd7a - description of each changes.
