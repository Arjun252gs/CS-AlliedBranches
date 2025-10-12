#include <stdio.h>
int main()
{
    float cel,far;
    printf("Enter the celsius ");
    scanf("%f", &cel);
    far=cel*9/5+32;
    printf("Fahrenheit value is %f\n", far);
    cel=0;
    far=0;
    printf("Enter the Fahrenheit ");
    scanf("%f", &far);
    cel=(far-32)*5/9;
    printf("Celsius value is %f", cel);  
}
//Refer - https://onecompiler.com/c/43ze42uey
