#include<stdio.h>
#include<cs50.h>

float perc(int a[]);

int main()
{
    int a = get_int("enter the number of subjects. ::  ");
    int b[a];
    int s=0;
    for (int i=0;i<a;i++)
    {
        int m= get_int("enter your marks ::");
        b[i]=m;
        s+=b[i];
    }
    float per= (float) s /a;
    printf("percentage for your marks is %f \n ",per);
return 0;
}