#include<stdio.h>
#include<cs50.h>
int main()
{
    int ver1 = get_int("x ::");
    int ver2 = get_int("y ::");
    //as int/int gives int we are trying to store float in int so it wil discard decimal part of float
    //to avoid this we use type conversion now it will retrn float so no problem
    float z = (float) ver1/(float) ver2;
    printf("%f \n",z);
}