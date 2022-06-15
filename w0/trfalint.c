#include<stdio.h>
#include<cs50.h>
//c considers every integer except 0 as true and 0 as faalse in terms of boolean value
int main(void)
{
    int a = get_int("enter a boolean true or false(any integer of your choice) ::");
    bool b = (bool) a;

    if(b==false)
    {
        printf("false boolean expression \n");
    }
    else
    {
        printf("true boolean expression \n");
    }
}