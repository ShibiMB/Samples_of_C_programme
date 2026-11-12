#include <stdio.h>

void myFunction(int myNumbers[]) 
{
  int i;
  printf("\n stored numbers are\n", myNumbers);
  for(i=0; i<5; i++)
  {
    printf(" %d\n", myNumbers[i]);
  }
}

int main() {
  int myNumbers[5] , i;
  printf("Enter the 5 numbers\n");
  
  for(i=0; i<5;i++)
  {
     scanf("%d",&myNumbers[i]);
     }
  myFunction(myNumbers);
  return 0;
}