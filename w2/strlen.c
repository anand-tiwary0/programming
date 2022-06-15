#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main()
{
    string a=get_string("enter the string ::");
    int p =strlen(a);
    for(int i=0;i<p;i++)
    {
        printf("a[%i]=%c  ",i,a[i]);
    }
    printf("\n");
}