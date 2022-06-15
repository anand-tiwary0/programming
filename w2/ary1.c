#include<stdio.h>
#include<cs50.h>
// program to print out the indices of different elements in the array
int main(void)
{
    int ary[10];
    for (int i=0 ;i<10 ;i++)
        {
            ary[i]=i;
            printf("%i \n" , ary[i]);
        }
}