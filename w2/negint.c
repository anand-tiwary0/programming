#include<stdio.h>
#include<cs50.h>
int get_neg_int(void);

int main()
{
    int a = get_neg_int();
    printf("%i \n",a);
}

int get_neg_int(void)
{
    int n;
    do
    {
        n=get_int("enter a negative integer ::");
    }
    while(n>0);
    return n;
}