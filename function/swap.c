#include<stdio.h>
void fun(int num1, int num2);
int main()
{
    int num1, num2;
    printf("Enter the two numbers");
    scanf("%d %d",&num1,&num2);
    printf("Value before swap num1=%d,num2=%d\n", num1,num2);
    fun(num1,num2);
    return 0;
}
void fun(int num1, int num2)
{
    int temp=0;
    temp=num1;
    num1=num2;
    num2=temp;
    printf("Value After swapping num1=%d,num2=%d",num1,num2);
}