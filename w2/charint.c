#include<stdio.h>
#include<cs50.h>

int main()
{
    char n = get_int("enter no pf elements in the array ::");
    char a[n];
    int p;
    for(int i=0,s=0;i<n;i++)
    {
        a[i]=get_char("enter the char :: ");
        printf("char %c you entered corr. to %i in ascii conv \n",a[i],a[i]);
        s=s+a[i];
        p=s;
    }
    printf("sum of chars are after ascii conv. :: %i \n",p);
}