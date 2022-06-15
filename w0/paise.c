#include<stdio.h>
#include<cs50.h>
#include<math.h>
int main (void)
{
    float amount =get_float("enetr the amoount ::");
    printf("%f \n",amount);
    float paise = amount * (float) 100;    //float point impreseason if trying to store 4.20 in float actually getting stored as 4.199999.... as it is closes value thatcan be stored in case of floatpoint imprecisiion
    printf("paise = %.50f \n",paise);
}