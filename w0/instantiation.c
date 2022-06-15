#include<stdio.h>
#include<cs50.h>
#include<string.h>

int arylen(int argv[]) ;

int main (void)
{
    int a[]={1,2,3,4,5,6};
    for(int i=0;i<arylen(a);i++)
    {
    printf("data at a[%i] is %i  \n",i,a[i]);
    }
    printf("\n");

}

int arylen(int argv[])
{
int i=0;
while(argv[i] != '\0')
{
    i++;
}
return i;
}