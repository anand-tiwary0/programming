#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
int main (void)
{
    int *p=malloc(90);     //pointer just stores address
    printf("%lu\n",sizeof(malloc(90)));
    printf("%lu\n",sizeof(*p));
    printf("%lu\n",sizeof(p));
    scanf("%i",p);

    printf ("%p \n",p);  //%p is the format codec for pointers
    //here * is used as the dereference operator
    printf ("%i is the value at the address %p being pointed by p pointer \n",*p,p );
}
