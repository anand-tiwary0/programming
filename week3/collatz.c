#include<stdio.h>
#include<cs50.h>

int collatz(int n);


int main(void)
{
    int num= get_int ("enter the number :");
    printf("number of steps to reach to 1 from your input %i is %i \n",num,collatz(num));
}

int collatz(int n)
{
    if(n==1)  //number of steps to reach 1 from 1 is 0
    {
        return 0;
    }
    if(n%2 == 0)
    { //calculates number of steps for even to reach 1
        return 1+collatz(n/2);
    }
    else
     //calclates number of steps it takes to reach 1 for odds
        return 1+collatz(3*n+1);
}