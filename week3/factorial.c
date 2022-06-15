#include<stdio.h>
#include<cs50.h>

int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}

int main(void)
{
    int number = get_int("enter the number ::");
    printf("factorial of %i is %i \n",number,factorial(number));
}