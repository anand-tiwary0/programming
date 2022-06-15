#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(int argc ,string argv[])
{
    printf("number of CLA are %i \n",argc);
    for (int j=0; j<argc ;j++)
    {
        printf("argv[%i] is %s \n",j,argv[j]);
    }
    printf("\n");
}