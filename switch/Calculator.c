//define header file
#include <stdio.h>
#include<math.h>

int main()
{
    //declare variable
    float a,b;
    int fun;
    
   //read the two numbers from user   
    printf("enter the two values\n");
    scanf("%f%f",&a,&b);

    //take the operation from user
    printf("\nEnter the operation: \n1 for Addition, \t2 for Subtraction,\t3 for Multiplication,\t4 for Square, \t5 for Division,\t 6 for Reminder\n, \t 7 for square root");
    scanf(" %d",&fun);

    //switch function
   switch (fun)
 {
    case 1:
        printf("\nSum=%f",a+b);
        break;
    case 2:
        printf("\nsub=%f",a-b);
        break;
    case  3:
        printf("\nMultiplication=%f",a*b);
        break;
    case 4:
        printf("\nSquare value of a=%f",a*a);
        printf("\nsquare value of b =%f",b*b);
        break;
    case 5:
        printf("\nDivision=%f",a/b);
        break;
    case  6:
         printf("\nReminder=%f",fmod(a,b));
         break;
    case 7:
         printf("\n Square root of a =%f", sqrt(a));
         printf("\n square root of b=%f", sqrt(b));
         break;
   }
        return 0;
}
