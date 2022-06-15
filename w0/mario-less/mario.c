#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int ht;
    do
    {
        ht = get_int("enter the height of pyramid ::");
    }
    while(ht>8 || ht<1);

    for(int i =1 ; i<=ht ;i++) //controls row
    {
        for(int j=ht;j>i; j--) //prints space in the row
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)  //prints # in the row
        {
            printf("#");  //gets to new row
        }
    printf("\n");
    }
}