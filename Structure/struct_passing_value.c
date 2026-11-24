#include<stdio.h>


struct date
{
  int day;
  int month;
  int year;
};

struct employee
{
    int id;
    struct date join_date;
};
void data(struct employee E2);
int main()
{
    struct employee E1={1020, {10,02,2023}};
    data(E1);
    return 0;
}
void data(struct employee E2)
{
    printf("ID=%d\n", E2.id);
    printf("Join date=%d/%d/%d\n", E2.join_date.day, E2.join_date.month, E2.join_date.year);
}
