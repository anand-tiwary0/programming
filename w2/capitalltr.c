#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    string a=get_string("enter the string::");
    int l=strlen(a);
    for(int k=0;k<l;k++)
    {
    if(a[k]>='a' && a[k]<='z')
    {
        printf("%c",a[k]-32); //difference b/w ascii value of a97 and A65 is 32
    }
    else
    {
        printf("%c",a[k]);
    }
    }
    printf("\n");
}