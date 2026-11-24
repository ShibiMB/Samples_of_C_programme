#include<stdio.h>
void swap(int*num1, int *num2);
int main()
{
    int num1, num2;
    printf("Enter the two values");
    scanf("%d %d", &num1, &num2);
    printf("\n number before swap %d, %d", num1, num2);
    swap(&num1, &num2);
    return 0;
}
void swap(int *num1, int *num2)
{
    int temp=*num1;
    *num1 = *num2;
    *num2 =temp;
    printf("\n number after swap %d, %d", *num1, *num2);
   
}