#include<stdio.h> //inprogess
#include<cs50.h>

int main(void)
{
    int n = get_int ("enter the number of strings for 1st array::");
    int l =get_int ("enter the numbeer of strings for the second array ::");
    string b[l];
    string a[n];
    while(int i=0)
    {
        a[i]= get_string("enter the string ::");
        b[i]=a[i];
        i++;
    }
    for(int i=0;i<l;i++)
    {
        printf(" b[%i] is %s  \n",i,b[i] );
    }
    printf("\n");
}