#include<stdio.h>
//function declaration

void Smallest(int array[], int limit); 
void Largest(int array[],int limit);

int main()
{
    int i, limit, array[100],temp;
    int *p=&array[0];
    char choice;
     printf("Enter the Array limit\n");
    scanf("%d", &limit);
    printf ("Enter the values in Array\n");
      
    for(i=0; i<limit; i++)
    {
         scanf("%d", &array[i]); 
    }
    printf("\n Enter L for Largest / S for smallest number in Array ");
    scanf(" %c",&choice);
    
    if(choice=='L')
    {
        Largest(array, limit); 
        /* passing address of first element of array and the limit also to identify the array size*/
    }
    else
    {
        Smallest(array, limit);
    }
    return 0;
}

// Function defenitions

   void Largest(int array[], int limit) 
/* where the array[] act as a pointer ie first addree of the element and limited its size to limit value */
    {
        int i,temp;
        int *p=&array[0];
        temp=*p;
    for(i=1; i<limit; i++)
        {
            
            p=p+1;
            if(*p>temp)
            {
               temp=*p;
            }
            else
            {
                temp=temp;
            }
        }
            printf("\nLargest number of the array=%d",temp);    
    }
    

void Smallest(int array[], int limit)
    {
        int i,temp;
        int *p = & array[0];
      temp=*p;
    for(i=1; i<limit; i++)
        {          
            p=p+1;
            if(*p<temp)
            {
                temp=*p;
            }
            else
            {
                temp=temp;
            }
        }
    printf("The smallest number of array=%d",temp);
        
    }
