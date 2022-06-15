#include<stdio.h>
#include<cs50.h>
#include<string.h>   //for strlen
#include<ctype.h>     //for toupper

int main()
{
    string a= get_string("enter the string ::");
    int m=strlen(a);

    for(int i=0;i<m;i++)
    {
        //toupper takes char as argument and canges it to uppercase if it is in lowercase otherwise it returns same char
        printf("%c",toupper(a[i]));
    }
printf("\n");
}