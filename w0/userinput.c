#include <stdio.h>
#include <cs50.h>
int main()
{
    //get_string is function defined in the cs50 library
    string answer = get_string("what's your name?   ");
    printf("hello %s \n",  answer );   // %s as a place holder for string
    return 0;
}