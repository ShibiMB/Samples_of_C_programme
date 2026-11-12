// Write and run C online using this editor.
void fun(int a);
#include <stdio.h>
int main() 
{
    int a;
    printf ("Enter a number\n");
    scanf("%d",&a);
    fun(a);
    return 0;
}
void fun(int a)
{
    if(a%2==0)
    {
        printf("Entered number is even");
    }
    else
    {
         printf("Entered number is odd");
    }
}