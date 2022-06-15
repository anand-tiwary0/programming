#include<stdio.h>
#include<cs50.h>
int main()
{
    char c = get_char("do you agree? ::");

    if (c=='y' || c=='Y')
    {
        printf("your response is %C you agreed \n",c);
    }
    else if (c=='n' || c=='N')
    {
        printf("your response is %c you disagreed \n",c);
    }
    else
    {
        printf("sorry bbou your response(%C) it mustbe (y/n) \n",c);
    }
return 0;
}