#include<stdio.h>
typedef struct //OR struct student
{
//char *name; //string
char name[20];
int Id;
int percentage;
int total_score;
}student;

int main()
{
    student S1; //struct student S1;
    student *ptr=&S1; //OR struct student *ptr =&S1; //ptr hold the address of stucture S1
    //ptr->name ="SHIBI"; //string


    sprintf(ptr->name, "SHIBI"); //using char array
    ptr->Id =1010; 
              //it also called by (*ptr).Id=1010;
              
    ptr->percentage =99;
    ptr->total_score =100;
    printf("Student S1 details are \nName=%s\nId=%d\nPercentage=%d\nTotal score =%d\n",ptr->name, ptr->Id,ptr->percentage,ptr->total_score);
    return 0;

}