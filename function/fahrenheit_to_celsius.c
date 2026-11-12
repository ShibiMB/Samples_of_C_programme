
#include <stdio.h>
float celsius(float fahrenheit)
{
    float x;
    return  x= 5.0/9.0*(fahrenheit-32);//return value to main
}


int main()
{
    float fahrenheit;
    printf("Enter the fahrenheit value \n");
    scanf("%f", &fahrenheit);
    celsius(fahrenheit); //call function
    printf("celsius value=%f",celsius(fahrenheit )); //accept retuen value
    return 0;
   }
