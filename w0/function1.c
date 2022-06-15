#include<stdio.h>
#include<cs50.h>
string pro(int);

int main(void)
{
    int re=  get_int ("enter loop times ::");
    pro(re);
}




string pro(int r)
{   string say=get_string("what to say ::");
    for(int i=0; i<r ;i++)
    {
        printf("%s",say);
        printf("\n");
    }
return say;
}