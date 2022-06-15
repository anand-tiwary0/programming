#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n = get_int("enter the number of scores to store ::");
    int score[n];
    int avg =0;
    for(int i=0;i<n ; i++)
    {
        score[i]=get_int("enter the score ::");
        avg=avg+score[i];
    }
    printf("average :: %f  \n", avg/(float) n);
}