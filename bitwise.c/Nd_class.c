#include<stdio.h>
int main()
{
    int value=181;
    value= value|(1<<3);// set bit
    printf("value of Set=%d\n", value); 
    value = value & ~ (1<<3); // clear bit
    printf("the value clear = %d\n",value);
    int bit_position=6;  
    value=value^(1<<bit_position);
    printf("the value of toggle =%d\n", value);
    

    return 0;
}

