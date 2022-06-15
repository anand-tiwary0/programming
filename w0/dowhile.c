#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n;
    do
    {
         n= get_int("width ::");
    }
    while(n<1);
    string say = get_string("what to repeat ::");

    for(int i=0;i<n;i++)
    {
        printf("%s",say);
    }
    printf("\n");
}