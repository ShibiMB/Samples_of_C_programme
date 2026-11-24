#include<stdio.h>
#include<stdlib.h>
int main()
{
    //allocate memory to store 1 integer using malloc
    int *ptr;
    ptr=malloc(sizeof (*ptr));
    printf("Address of allocated memory=%p", &ptr);
    if(ptr==NULL)
    {
        printf("memory allocation failed");
        return 1;
    }
    *ptr=100;
    printf("\nElement stored in the allocate memory=%d", *ptr);

   return 0;
}