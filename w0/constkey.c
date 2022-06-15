#include<stdio.h>
#include<cs50.h>
int main()
{
    const int disc0 = 4;
    const int disc1 = 8;
    const int disc2 = 10;
    float pay=0;
    float amount1 = get_int("enteer the purchase amount ::  ");
    if (amount1<=500)
    {
        pay=amount1;
        printf("you will get 0 discount please consider buying above 500 to get disc upto %d or pay now =%f  \n",disc2,pay);
    }
    else if(amount1<=1000 && amount1>500)
        {
            pay=amount1-(amount1*disc0/100);
            printf("you got %d disc. and final payable amount = %f  \n thanks for visting \n",disc0,pay);
        }
    else if(amount1<=2000 && amount1>1000)
        {
            pay=amount1-(amount1*disc1/100);
            printf("you got %d disc. and final payablr amount= %f \n thanks for visting \n",disc1,pay);
        }
    else if(amount1>2000)
        {
            pay=amount1-(amount1*disc2/100);
            printf("you got %d disc. and final payable amount %f \n thanks for visiting \n",disc2,pay);
        }
return 0;
}