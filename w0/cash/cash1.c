#include<stdio.h>
#include<cs50.h>

int get_cent(void);
int cnt_quaters(int cent);
int cnt_dimes(int cent);
int cnt_nickels(int cent);
int cnt_pennies(int cent);

int main(void)
{
    int z=get_cent();
    int q= cnt_quaters(z);
    z=z-25*q;

    int d= cnt_dimes(z);
    z=z-10*d;
    int n =cnt_nickels(z);
    z=z-5*n;
    int p = cnt_pennies(z);
    z=z-1*p;

    printf("total coins %i \n %i quater\n %i dimes \n %i nickels \n %i pennies \n",(q+d+n+p),q,d,n,p);
}
int get_cent(void)
{
    int l;
    do
    {
        l=get_int("enter the cents owed ::");
    }
    while(l<0);
    return l;
}

int cnt_quaters(int cent)
{
    return cent/25;
}

int cnt_dimes(int cent)
{
    int x=cent;
    if(cent>=100)
    {
        x=cent%100;
    }
    return x/10;
}

int cnt_nickels(int cent)
{
    int x=cent;
    if(cent>=100)
    {
        x=cent%100;
    }
    return cent/5;
}
int cnt_pennies(int cent)
{
    int x=cent;
    if(cent>=100)
    {
        x=cent%100;
    }
    return cent;
}