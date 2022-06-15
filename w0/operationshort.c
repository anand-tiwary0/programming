#include<stdio.h>
#include<cs50.h>

int main()
{   int num = get_int("enter the number of oprands :: ");
    float a[num];
    for(i=0;i<num;i++)
    {
        float ks = get_float("enter the operand ::");
        a[i]=ks;
    }

}