#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
    string a= get_string("enter the string ::");
    int l=strlen(a);
    for(int i=0;i<l;i++)
    {
        if(islower(a[i]))
        {
            printf("%c",a[i]-32);
        }
        else
        {
            printf("%c",a[i]);
        }
    }
printf("\n");
}