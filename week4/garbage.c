#include<stdio.h>
#include<cs50.h>

int main (void)
{
    int score[3];
    for (int i=0;i<3;i++)
    {
        printf("%i\n",score[i]);
    }
    int *a=NULL;
   // *a=5;      //causes segmentation fault
    printf("%p\n",a);
}