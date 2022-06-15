#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char *s="HI!";     //s is char pointer which stores address for very first character in the string
    int numbers[]={1,2,3,4,5,6,7,0};   //array is also just a pointer which have address of first element of array
    char c=*(s+0);
    char *p = &(*(s+0));
    printf("%p\n",s);
    printf("%p\n\n",p);
    printf("pointer arithmatic");
    printf("%p\n",&(*s));
    printf("%p\n",&s[1]);
    printf("%p\n",&*(s+2));
    printf("%p\n",&s[3]);
    printf("%p\n",&s[4]);
    printf("pointer arithmatic automatically takes care of bytes to jump \n so it gives us next unit not next byte \n ");
    printf("%i\n",*(numbers+0));
    printf("%i\n",numbers[1]);  //here pointer aritmatics just automatically moves 4 bytes (as it'S int type )
    printf("%i\n",*(numbers+2));   //so pointer gives next element in the array not the next byte
    printf("%i\n",*(numbers+3));
    printf("%i\n",*(numbers+4));
    printf("%i\n",*(numbers+5));
    printf("%i\n",*(numbers+6));
    printf("%i\n",*(numbers+7));
    printf("%i\n",*(numbers+8));  //exceeding array limits will give garbage value - some random preexisting value
}