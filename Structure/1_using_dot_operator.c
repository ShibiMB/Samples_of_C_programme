#include<stdio.h>
//#include<string.h> //include strcpy
typedef struct 
{
   char name[10]; 
   //char *name;
   int id;
   int mark;
   char grade;
}student;

int main()
{
   student S1;
  // student S1 = {"SHIBI", 12, 1250, 'A'};
   
   //strcpy (S1.name,"SHIBI"); //declare as char
         
   sprintf(S1.name,"SHIBI"); //declare as char
       
       /*include in stdio.h sprintf/(scanf read by user) sprintf
        d/f b/w printf it print to S1 */

   // S1.name= "SHIBI"; 
   
        /* if name declare as pointer 
                      take each char to address 
                      name[0]='S', name[1]='H'.... name[5]=\0 */
     S1.id= 12;
     S1.mark= 1250;
     S1.grade= 'A';  
     printf("Student details are \n Name=%s\n Id = %d\n Mark=%d\n Grade=%c\n", S1.name, S1.id, S1.mark, S1.grade);
     return 0;
}
