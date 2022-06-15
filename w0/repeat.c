#include<stdio.h>
#include<cs50.h>
int main()
{
    int counter = get_int("enter times X you want ::");
    string say = get_string("enter the phrase you want to repeat ::");
    while(counter>0)
    {
        printf("\n");
        printf("%s\n ",say);
        counter--;
    }
return 0;
}