#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>

struct student_roll
{
    char *name;
    int roll;
};
//we can also define data types in the middle of typedef and rename/shorten it simulteniously
typedef struct student_roll roll;   //typedef is used to rename or shorten defined data types

int main (void)
{
    int n = get_int("enter number of students : ");
    printf("%lu\n",sizeof(roll));
    roll *rolls= malloc (n * sizeof(roll));
    for (int i=0 ;i<n;i++)
    {
        rolls->name = get_string("name :");
        (*rolls).roll = get_int("roll :");
    }
}
