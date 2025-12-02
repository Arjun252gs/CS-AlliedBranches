//Program - 1 : Question - Develop a program to calculate the temperature converter from degree Celsius to Fahrenheit.
#include <stdio.h>
int main() {
    float cel,far;
    printf("Enter the celsius ");
    scanf("%f", &cel);
    far=cel*9/5+32;
    printf("Fahrenheit value is %f\n", far);
	return 0;
} //https://onecompiler.com/c/445pmy48z
//Program - 2 : Question - Given age and gender of a person, develop a program to categorise senior citizen (male & female).
#include<stdio.h>
int main() {	
    int age;
    char gender;
    printf("Enter the gender and the age:");
    scanf("%c%d",&gender,&age);

    if(age>=60){
        printf("Senior ");	
		goto gendercheck;
    }
    else if(age>0){
		printf("Normal ");
		goto gendercheck;		
    }
    else 
	    printf("Invalid Age\n");
	return 0;
	gendercheck : switch(gender){
		case 'M': 
		case 'm': printf(" Male citizen"); break;
		case 'F': 
		case 'f': printf(" Female citizen"); break;
		default : printf("But invalid Gender\n");
	}
} //https://onecompiler.com/c/445pnksps
//Program - 3 : Question - Develop a program to find the sum of digits of a given number.
#include<stdio.h>
int main() {	
    int num, rem, sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num!=0) {
       rem=num%10;
       num=num/10;
       sum += rem;
    }
    printf("The sum of digits is %d",sum);
	  return 0;
} //https://onecompiler.com/c/445pnsqwu
//Program - 4 : Question - Generate Floyd’s triangle for given rows.
#include<stdio.h>
int main() {	
  	int num, i, j, k=1;
  	printf("Enter the number:\n");
  	scanf("%d",&num);
  	for(i=1; i<=num; i++)   {
    		for(j=1; j<=i; j++)  {
    			printf("%d\t",k++);
    		}
    		printf("\n");
  	}
  	return 0;
} //https://onecompiler.com/c/445pnvr9y
//Program - 5 : Question - Develop a program to find key elements in an array using linear search.
#include<stdio.h>
int main() {	
  	int arr[5];
  	int i, key, flag =0;
   	printf("Enter the array elements:\n"); 
  	for(i=0; i<5; i++)
  		scanf("%d",&arr[i]);

  	printf("Enter the key to be searched:\n"); 
  	scanf("%d",&key);

  	for(i=0; i<5; i++)	{
  		if(key==arr[i])	{
  			flag = 1;
  			printf("Key searched Sucessfully at position %d", i+1);
  			break;
  		} 
  	}
  	if(flag == 0)
  		printf("Key not found ");  		
  	return 0;
} //https://onecompiler.com/c/445pnxayr
//Program - 6 : Question - Develop a modular program to find GCD and LCM of given numbers
#include <stdio.h>
int find_gcd(int a, int b) {  
    int remainder;
    while (b != 0) {
        remainder = a % b;    
        a = b;  
        b = remainder;  
    }
    return a; 
}
int find_lcm(int a, int b) {
    int gcd = find_gcd(a, b);  
    return a * b / gcd;  
}
int main()
{
    int num1, num2, gcd_result, lcm_result;
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2); 
    
    gcd_result = find_gcd(num1, num2);
    lcm_result = find_lcm(num1, num2);
    
    printf("GCD of %d and %d = %d\n", num1, num2, gcd_result);
    printf("LCM of %d and %d = %d\n", num1, num2, lcm_result);
    return 0; 
} //https://onecompiler.com/c/445pnz7du
//Program - 7 : Question - Develop a program to add two numbers using the pointers to the variables.
#include <stdio.h>
int add(int *a, int *b) {
	return *a +*b;
}
int main() {
    int a, b, sum = 0; 
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);
    sum = add(&a,&b);
    printf("Sum: %d", sum);
    return 0;
} // https://onecompiler.com/c/445pp3bjw
//Program - 8 : Question - Develop a program to find the transpose of a matrix.
#include<stdio.h>
int main() {	
  	int rows, columns, i, j, k=1;
	int matrix[5][5], transpose[5][5];
  	printf("Enter the number:\n");
  	scanf("%d%d",&rows, &columns);
  	for(i=0; i<rows; i++)   // Reading a matrix
  	{
    		for(j=0; j<columns; j++)  
    			scanf("%d", &matrix[i][j]); 		 
  	} 
	for(i=0; i<rows; i++)    // transpose of the matrix
  	{
    		for(j=0; j<columns; j++)  
    		{
			transpose[j][i] = matrix[i][j];
		}
	}
	  printf("original matrix is:\n");
		for(i=0; i<rows; i++)// Printing the original matrix
  	{
    		for(j=0; j<columns; j++)
    			printf("%d\t", matrix[i][j]);
    		printf("\n");
  	}
  	  printf("transpose matrix is:\n");
	for(i=0; i<rows; i++)// Printing the transpose matrix
  	{
    		for(j=0; j<columns; j++)
    			printf("%d\t", transpose[i][j]);
    		printf("\n");
  	}
  	return 0;
} 
//Program - 9 : Question - Develop a program to concatenate two strings, find length of a string and copy one string to other using string operations.
#include <stdio.h>
#include <string.h> 
int main() {
	char fname[20], lname[20];
	char fullname[50];
	int len;
	printf("Enter your First name and Last name::\n");
	scanf("%s%s",fname,lname);

	strcpy(fullname, fname); 
	printf("Fname %s is copied to Fullname %s", fname, fullname);

	strcat(fullname, lname); 
	printf("Lname %s is concatinated to Fullname %s", lname, fullname);

	len = strlen(fullname);
	printf("Length of %s is %d", fullname,len); 
	return 0;
}
//Program - 10 : Question - Develop a program to find the roots of quadratic equations.
#include <stdio.h>
#include <math.h>
int main() {
	float a, b, c, root1, root2, disc, real, imag;
	printf("Enter coefficients of quadratic equation (a, b, c): \n");
	scanf("%f %f %f", &a, &b, &c);
	// Quadratic equation
	disc = b * b - 4 * a * c;
	printf("Discriminant = %.2f\n", disc);
	if (disc > 0)	{
		root1 = (-b + sqrt(disc)) / (2 * a);
		root2 = (-b - sqrt(disc)) / (2 * a);
		printf("Two distinct real roots: %.2f and %.2f\n", root1, root2);
	}
	else if (disc == 0)	{
		root1 = -b / (2 * a);
		printf("One real root: %.2f\n", root1);
	}
	else	{
		real = -b / (2 * a);
		imag = sqrt(-disc) / (2 * a);
		printf("Complex roots: %.2f + %.2fi and %.2f - %.2fi\n", real, imag, real, imag);
	}
	return 0;
}
//Program - 11 : Question - Develop a program to find whether a given number is prime or not.
#include <stdio.h>
#include <math.h>  
int isPrime(int number) {
    if (number <= 1) 
        return 0; 
    else if (number == 2)  
        return 1;  
    else if (number % 2 == 0) 
        return 0;  
    
    for (int i = 3; i <= sqrt(number); i += 2) {
        if (number % i == 0) 
            return 0;  
    }
    return 1;
}
int main() {
    int number, primeFlag; 

    printf("Enter a number: ");
    scanf("%d", &number);

    primeFlag = isPrime(number);

    if (primeFlag) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }
    return 0;
} //https://onecompiler.com/c/445y49x2v

//Program - 13 : Question - Develop a program to declare the structure of employees and display the employee records with higher salary among two employees.
#include<stdio.h>
struct employee{ 
		char name[20];
		int age, id, salary; 
		char dept_name[20];
   	};
int main()
{
    struct employee e1,e2;

    printf("Enter the details of employee 1:\n");
    scanf("%s%d%d%d%s", &e1.name, &e1.id, &e1.age, &e1.salary, &e1.dept_name); 
 
    printf("Enter the details of employee 2:\n");
    scanf("%s%d%d%d%s", &e2.name, &e2.id, &e2.age, &e2.salary, &e2.dept_name); 
   
    if(e1.salary > e2.salary)
		printf("\nSalary of %s is more. \nid = %d, age is%d,  salary =%d, dept =%s\n", e1.name, e1.id, e1.age, e1.salary, e1.dept_name);
    else
		printf("\nSalary of %s is more. \nid = %d, age is%d,  salary =%d, dept =%s\n", e2.name, e2.id, e2.age, e2.salary, e2.dept_name);
    return 0; 
} // https://onecompiler.com/c/446c7nd7q

//Program - 14 : Question - Develop a program to create an array of structures to store book details and check whether a specific book, as requested by the user, is available or not.

#include<stdio.h>
#include <string.h>
struct Book {
    char title[20];
    char author[20];
    int quantity;
};

int main()
	{
    struct Book library[5];
    const int num_books = 5;
    char searchTitle[20];
    int found = 0;

    printf("Enter details for 5 books:\n");   
    for (int i = 0; i < num_books; ++i) {
        printf("\nEnter Book %d Title, Author, Quantity", i + 1);
        scanf("%s%s%d", library[i].title, library[i].author, &library[i].quantity);
    }

    printf("\n--- Availability Check ---\n");
    printf("Enter the title you want to check (no spaces): ");
    scanf("%s", searchTitle);
    for (int i = 0; i < num_books; ++i) {
        if (strcmp(library[i].title, searchTitle) == 0) {
            if (library[i].quantity > 0) {
                printf("\nYes, '%s' is available in stock.\n", searchTitle);
                found = 1;
                break;  
            } else {
                printf("\nNo, '%s' is currently out of stock.\n", searchTitle);
                found = 1;
                break;  
            }
        }
    }
    if (!found) 
        printf("No, '%s' was not found in our catalog.\n", searchTitle);
    return 0;
} //https://onecompiler.com/c/446c7wnvx
