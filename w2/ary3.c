#include<stdio.h>
#include<cs50.h>
// program to print out all the cla user typed in during program execution

int main(int argc ,string argv[])
{
    string mv;
    for (int i=0;i<argc;i++)
    {
        printf("%s ",argv[i]);
    }
    printf("\n");
}