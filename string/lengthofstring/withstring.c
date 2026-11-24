#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    printf("Enter your name\n");
    gets(name);
    printf("My name is %s", name);
    printf("\n Length of my name=%d", strlen(name));
    return 0;
}