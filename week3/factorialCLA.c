//factorial using command line argumentcd#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>
#include<string.h>

unsigned long factorial(unsigned long m);

int main (int argc,string argv[])
{
    if (argc==2)
    {
        int k = strlen(argv[1]);
        int pp = atoi(argv[1]); //converts str (strin of integers) to integer prototype under -- stdlib.h
        printf("factorial for %i  is %lu.  \n also number of digits of your input is %i \n",atoi(argv[1]),factorial(pp),k);
    }
    else
    printf("you are trying to abuse system enter only one integer :( \n");
}


unsigned long factorial(unsigned long m)
{
    if(m==1)
    {
        return 1;
    }
    else
    return (long)m* factorial(m-1);
}
