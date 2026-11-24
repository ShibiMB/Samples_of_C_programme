#include<stdio.h>
#include<stdlib.h>
//allocate memory to store 5 integer values
int main()
{
    int *ptr, i;
    ptr=malloc(5*sizeof(*ptr));
    printf("Enter the 5 numbers\n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Values in allocated memories are");
    for(i=0; i<5; i++)
    {
        printf("\n %d - %d", &ptr[i],ptr[i]);
    }
    return 0;
}