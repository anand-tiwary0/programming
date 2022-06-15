#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int *x,*y;
    x= malloc(sizeof(int));

    *x = 42;
    printf("x : %i \n",*x);
    *y = 13;  //no pointee so it can cause segmentation fault

    y = x;   //now y points same as x

    *y = 13;
    printf("x : %i \n",*x);
    printf("y : %i \n",*y);
}