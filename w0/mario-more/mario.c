#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        h =get_int("enter the height ::");
    }
    while(h>8 || h<1);

    for(int i=1;i<=h;i++) //controls rows
    {
        for(int j=h; j>i;j--)   //prints space part1
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)  //prints # in the row part1
        {
            printf("#");
        }
        for(int l=1;l<=2;l++)   //prints 2 fixed space
        {
            printf(" ");
        }
        for(int m=1;m<=i;m++)   //prints 2nd part of #
        {
            printf("#");
        }
        printf("\n");   //gets us to new line
    }
}