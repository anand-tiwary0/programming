#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    string a= get_string("enter the string ::");
    int i=0;
    while(a[i] != '\0')
    {
        printf("a[%i]%c  ",i,a[i]);
        i++;
    }
    printf("\n"); //strlen() has data type of unsigned long (lu)
    printf("lengh of string = %u \n",(unsigned int)strlen(a)); //func to calculate lengh of string available through string.h
}