#include<stdio.h>
int main()
{
    printf("5 AND 2=%d\n", 5&2);//0000 0000 .... 0000 0101 (32 bit) & 0010 =0000
    printf("5 OR 2=%d\n", 181|9);//0101|0010=0111
    printf("NOT 0=%d\n", ~0);//0000 0000 ...... 0000 0000= 1111 1111 .... 1111 1111 get %d (-1)
    printf("NOT 0=%u\n", ~0); //4294967295 is actually 1
    printf("NOT 4294967295=%u\n", ~4294967295);
    printf("5 XOR 2=%d\n", 5^2); // 0101 ^0010 = 0111
    printf("Left shift 1 in 3 times=%d\n", 1<<3); /*0000 0001 <<3  1st 0000 0010
                                                                2nd 0000 0100
                                                                3rd 0000 1000 = 1*2^3 =8*/
                                                                printf ("Right shift 5 in 4 times=%d\n", 5>>4); /*0000 0101 >>4 
                                                                4th 0101 0000 =1*2^6+1*2^4=64*+16=80*/
    printf("Left shift 5 in 4 times=%d\n", 5<<4); //0000 0101 <<4  = 0101 0000  =1*2^6+1*2^4 =64+16=80                                                        
    printf ("Right shift 5 in 4 times=%d\n", 5>>4); /*0000 0101 >>4 
                                                                4th 0101 0000 =1*2^6+1*2^4=64*+16=80*/
    return 0;
}