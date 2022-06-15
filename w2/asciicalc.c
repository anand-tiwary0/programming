#include<stdio.h>
#include<cs50.h>

void asciicovt(void);

int main(void)
{
    asciicovt();
}





void asciicovt(void)
{
    char n;
    do
    {
        n=get_char("enter the character to know it's ASCII value ::");
        printf("ASCII FOR YOUR CHAR '%c' is '%i' \n press ctrl/cmd +c to exit if calcualtion completed \n ",n,n);
    }
    while(true);
}