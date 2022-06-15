#include<stdio.h>
#include<cs50.h>

int main()
{
    int in= get_int ("enter loop count ::");
    string say =  get_string("enter the phrase ::");
    for(int i=0;i<in ;i++)
    {
        printf("%s\n",say);
    }
return 0;
}