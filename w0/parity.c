#include<stdio.h>
#include<cs50.h>  //parity is a fancy word for odd-even
int main()
{
    int n= get_int("enter a number to check add or even x :: \n");

    if(n%2==0)
    {
        printf("you entered %d and the nuber is even \n",n);
    }
    else
    {
        printf("you entered %d and the number is odd \n",n);
    }
return 0;
  }