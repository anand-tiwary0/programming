#include<stdio.h>
#include<cs50.h>

int main(void)
{
    string a[]={"j","k","jfsfjd","you"};
    int arlen;
    int i;
    while(a[i] !='\0')
    {
        i++;
        arlen+=1;
    }
    for(int i=0;i<arlen;i++)
    {
        printf(" a[%i] is %s\n",a[i]);
    }
    printf("\n");
}