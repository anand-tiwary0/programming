#include<stdio.h>
#include<limits.h>
int main()
{   //symbolic constant for long signed int
    long int ver1 = LONG_MIN;
    long int ver2 = LONG_MAX;
    printf("range of long int = %ld to %ld \n",ver1 ,ver2);
    return 0;
}