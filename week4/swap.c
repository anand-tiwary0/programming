#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
void swap(int *a,int *b)   //argument is address then only can directly change the vaule of variable -- call are reference
{
    int temp=*a;
    *a = *b;   //go to pointee of b and copy that value to pointee of a
    *b = temp;
}


int main (void)
{
    int x,y;
    x=get_int("x : ");
    y=get_int("y : ");

    printf("x is %i , y is %i \n",x,y);

    swap(&x,&y);   //copy of address is begin passed means giving direct accesss to variable here

    printf("x is %i , y is %i \n",x,y);
}