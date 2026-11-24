#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,i;
    ptr = calloc(5,sizeof(*ptr));
    printf("Enter the 5 numbers\n");
    for(i=0; i<5;i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("\nValues in allocated memmories");
    for(i=0; i<5; i++)
    {
        printf("\n %d : %d", &ptr[i], ptr[i]);
    } 
    return 0;
}