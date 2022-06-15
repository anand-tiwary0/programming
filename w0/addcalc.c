#include<cs50.h>
#include <stdio.h>

int main()
{   //prompt user to enter an interger
    long x = get_long("enter an int x:   ");
    //prompt user to enter another addent
    long y = get_long("enter an int y:   ");
    //print result of addition
    printf("the added result = %li  \n", x+y);
    return 0;
}