#include <stdio.h>

void myFunction(int limit, int myNumbers[]) 
{
  int i;
  printf("\n stored numbers are\n", myNumbers);
  for(i=0; i<limit; i++)
  {
    printf(" %d\n", myNumbers[i]);
  }
}

int main() {
  int Numbers[5] ,limit, i;
  printf("Enter the limit\n");
      scanf("%d",&limit);
  printf("Enter the numbers\n");
    for(i=0; i<limit;i++)
  {
     scanf("%d",&Numbers[i]);
     }
  myFunction(limit,Numbers);
  return 0;
}