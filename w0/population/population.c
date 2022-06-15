#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int st;
    int y=0;
    do
    {
        st= get_int("enter the current population ::");
    }
    while(st<9);

    // TODO: Prompt for end size
    int en = 0;
    while(en<st)
    {
        en= get_int("enter the ending population size ::");
    }

    // TODO: Calculate number of years until we reach threshold
    int n;
    int k =st;
    do
    {
    n=(k+(k/3)-(k/4));
    k=n;
    y++;
    }
    while(n<en);

    // TODO: Print number of years
    printf("%i years will require for poplation to grow from %i to %i \n",y,st,en);
}
