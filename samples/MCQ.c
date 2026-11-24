#include<stdio.h>

int main()
{
    printf("%x\n", -1>>1); //x= ffff ffff ffff ffff  -1= 1 1111 1111 1111 1111  1s compliment 1111 1110 //0111 1111
    unsigned int m = 32;
    printf("%x\n", ~m);
    printf("%x\n", -1<<3);
    unsigned int a=0xffff;
    ~a;
    printf("%x\n", a);
    unsigned char i = 0x80; //char promoted to int so output 16 bit even char 1 byte
    printf("%d\n", i<<1);
    unsigned char c = 200;
    unsigned char b = 100;
    unsigned char d=b+c;
    printf("%d\n",d);
    printf("%d\n", c + b); //int promotion
    printf("%d >> %d %d >> %d\n", 4 >> 1, 8 >> 1);
    printf("%d >> %d %d >> %d\n", 4 >> 1, 8 >> 1);
      return 0;
}


