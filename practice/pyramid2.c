#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    printf("enter thee height of pyramid :");
    int height;
    scanf("%d",&height);

    for(int i = 0; i < height ; i++)
    {
        for (int j = height ; j > i ; j--)
        {
            printf(" ");
        }
        for( int m =0 ; m < i+1  ;m++)
        {
            printf("*");
        }
        for(int p = 0; p<i ; p++)
        {
            printf("*");
        }
        printf("\n");
    }
}