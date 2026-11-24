#include<stdio.h>
//#include<string.h>
struct date
{
   int day;
   int month;
   int year;
};

struct employee
{
    int id;
    char name[20];
    struct date join_date;
};
int main()
{
    struct employee E1={1020, "SHIBI",{01,06,2021} };
    struct employee *e1_ptr=&E1;
    
    //printf("ID =%d\n", e1_ptr->id ); //E1.id
    printf("ID=%d\n",E1.id);
    
   // printf("Name =%s\n", e1_ptr->name); 
    printf("Name=%s\n", E1.name);

    //printf("Join Date = %d-%d-%d \n",e1_ptr->join_date.day, e1_ptr->join_date.month, e1_ptr->join_date.year); 
    printf("Join Date = %d/%d/%d \n",E1.join_date.day, E1.join_date.month, E1.join_date.year);
    
    return 0;  
}
