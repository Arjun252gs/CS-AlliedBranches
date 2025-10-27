//Program - 1 : Question - Develop a program to calculate the temperature converter from degree Celsius to Fahrenheit.

#include <stdio.h>
int main()
{
    float cel,far;
    printf("Enter the celsius ");
    scanf("%f", &cel);
    far=cel*9/5+32;
    printf("Fahrenheit value is %f\n", far);
    // Code to modified question of converter from Fahrenheit to degree Celsius.
    cel=0;
    far=0;
    printf("Enter the Fahrenheit ");
    scanf("%f", &far);
    cel=(far-32)*5/9;
    printf("Celsius value is %f", cel);  
}
//Refer - https://onecompiler.com/c/43ze42uey

//Program - 2 : Question - Given age and gender of a person, develop a program to categorise senior citizen (male & female).

#include<stdio.h>
int main()
{	
    int age;
    char gender;
    printf("Enter the gender:");
    scanf("%c",&gender);

    printf("Enter the age:"); 
    scanf("%d",&age);
	
    if(age>=60)
    {
        if( (gender=='M') || (gender=='m') ) 
			      printf("Senior Male citizen");
		    else if( (gender=='F') || (gender=='f') ) 
			      printf("Senior FeMale citizen");
		    else
			      printf("Invalid Gender\n");		 
    }
    else if(age>0)
    {
		    if( (gender=='M') || (gender=='m') ) 
		        printf("Normal Male citizen");
		    else if( (gender=='F') || (gender=='f') ) 
		        printf("Normal FeMale citizen");
		    else
	          printf("Invalid Gender\n");		 
    }
    else 
	    printf("Invalid Age\n");
    return 0;
} //Refer - https://onecompiler.com/c/43zt2jcet

//Program - 3 : Question - Develop a program to find the sum of digits of a given number.

#include<stdio.h>
int main()
{	
    int num;
    int sum=0;
    int n;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num!=0)
    {
       n=num%10;
       num=num/10;
       sum += n;
    }
    printf("The sum of digits is %d",sum);
	return 0;
} //Refer - https://onecompiler.com/c/43zsz6mzg

//Program - 4 : Question - Generate Floyd’s triangle for given rows.

#include<stdio.h>
int main()
{	
  	int num;
  	int i,j,k=1;
  	
  	printf("Enter the number:\n");
  	scanf("%d",&num);
  
  	for(i=1; i<=num; i++)
  	{
    		for(j=1; j<=i; j++)
    		{
    			printf("%d\t",k++);
    		}
    		printf("\n");
  	}
  	return 0;
} // Refer - https://onecompiler.com/c/442uryfpw

//Program - 5 : Question - Develop a program to find key elements in an array using linear search.


//Program - 6 : Question - Develop a program to find the roots of quadratic equations.

//Program - 7 : Question - Develop a program to concatenate two strings, find length of a string and copy one string to other
using string operations.

//Program - 8 : Question - Develop a program to find whether a given number is prime or not.
//Program - 9 : Question - Develop a modular program to find GCD and LCM of given numbers
//Program - 10 : Question - Develop a program to add two numbers using the pointers to the variables.
//Program - 11 : Question - Develop a program to find the transpose of a matrix.
//Program - 12 : Question - Develop a program to perform Matrix Multiplication.
//Program - 13 : Question - Develop a program to declare the structure of employees and display the employee records with
higher salary among two employees.
//Program - 14 : Question - Develop a program to create an array of structures to store book details and check whether a specific
book, as requested by the user, is available or not.

