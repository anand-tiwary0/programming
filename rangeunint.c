#include<stdio.h>
#include<limits.h>
int main()
{
    unsigned int ver1 = 0;
    //symbolic const for unsigned int
    unsigned int ver2 = UINT_MAX;
    printf("range of unsigned int = %u to %u \n" , ver1,ver2);
    return 0;
}