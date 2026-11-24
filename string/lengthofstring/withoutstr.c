#include<stdio.h>
int main()
{
    char name[10];
    int i=0;
    //int count=0;
    printf("Enter the name\n");
    scanf("%s",name);
    while(name[i]!='\0')
    {
        //count++;
        i++;
    }
    //printf("\nLength of name=%d", count);
      printf("\n Length of the name=%d", i);
}