#include<stdio.h>
#include<cs50.h>
#include<math.h>
int main()
{
    double inp2 = get_double("enter any irrational division ::  ");
    double inp3 = get_double("enter denominator now::  ");
    double div= inp2 /inp3;
    double rem= remainder(inp2,inp3); 
    printf("uff your quotient is %f\n and your remainder is %f \n ", div,rem);
    return 0;
}