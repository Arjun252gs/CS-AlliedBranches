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


//Program - 4 : Question - 
//Program - 5 : Question - 
//Program - 6 : Question - 
//Program - 7 : Question - 
//Program - 8 : Question - 
//Program - 9 : Question - 
//Program - 10 : Question - 
//Program - 11 : Question - 
//Program - 12 : Question - 
//Program - 13 : Question - 
//Program - 14 : Question - 

