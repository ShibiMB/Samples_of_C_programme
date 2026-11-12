void myFunction(char name[], int age);
#include <stdio.h>
int main() 
{
int b;
char name[200];
printf("Enter your name\n");
scanf("%s", name);
printf("Enter your age\n");
scanf("%d",&b);
  myFunction(name, b);
    return 0;
}

void myFunction(char name[], int age) 
{
  printf("Hello %s. \n You are %d years old\n", name, age);
}