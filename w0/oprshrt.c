#include<stdio.h>
#include<cs50.h>
int main()
{
    int a=get_int ("x ::");

    printf("pro %i \n",a*=5);
    printf("div %f \n",a/5.0);
    printf("mod %i \n",a%=5);
    printf("inc %i \n",a++);
    printf("decre %i \n",a--);
    printf("sum %i \n",a+=5);
    printf("diff %i \n",a-=5);

}