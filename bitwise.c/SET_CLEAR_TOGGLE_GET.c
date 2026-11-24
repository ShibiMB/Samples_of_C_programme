#include<stdio.h>
int main()
{
    int value=181; // 1011 0101
    //SET 3rd BIT
    value= value|(1<<3); 
    printf("value after setting 3rd bit=%d\n", value); 

    //CLEAR 3rd BIT value =1011 1101
    value = value & ~ (1<<3); 
    printf("value after clearing 3rd bit = %d\n",value);

    //TOGGLE 6th bit value = 1011 0101 
    value=value^(1<<6);
    printf("value after toggling 6th bit = %d\n", value);

    //GET 6th bit value =1111 0101
    value = ((value &(1<<6))>>6);
    printf ("value of the position = %d\n", value);  

    // set 6th and 7th bit bit
    value=0x3F; //0011 1111
    //value=value|(1<<6|1<<7); //1111 1111
    value =value|(3<<6);
    printf ("value after setting 6th&7th bit = %d\n", value);  

    //clear 6th, 3rd and 7th bit
    value= 0xFF;
    //value= value&=~(1<<6|1<<7|1<<3); // 0011 0111
    //value =value&~(1<<6|1<<3); //continous 2 bit 0011

    //clear 5th, 6th 7th and 3rd bit 1111 1111 to 0001 0111
     value = value&~(7<<5|1<<3); // 3 bit 0111 7<<5 (5is the lowest ) 
    printf ("value after clearing 5th, 6th,7th and 3rd bit = %d\n", value);  
    return 0;
}

