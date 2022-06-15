#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>

int main(void)
{
   // char *s;
    //need to allocate memory
    char *s = malloc(4);
    //char s[4];
    printf("s : ");
    scanf("%s", s);
    printf("s : %s \n",s);
}