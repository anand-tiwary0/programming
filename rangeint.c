#include<stdio.h>
#include<limits.h>
int main()
{
    unsigned long int ver1 = 0;
    unsigned long int ver2 = ULONG_MAX;
    printf("range for long unsigned int= %lu to %lu \n",ver1,ver2);
    return 0;
}