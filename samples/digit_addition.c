#include<stdio.h>
void add_digit(int num);
int main()
{
    int num;
    printf("Enter the 3 digit number\n");
    scanf("%d", &num);
    add_digit(num);
    retun 0;
}
void add_digit(int num)
{
    int third_digit = num %10;
    int temp=num;
    int temp = num%100;
    int second_digit = temp %10;
    int first_digit = num/=100;
    int sum = third_digit + second_digit + first_digit;
    printf("The sum of the digit of the entered number = %d\n", sum);
}