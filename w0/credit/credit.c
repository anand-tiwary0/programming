#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long num=get_long("enter the credit card numbeer ::");
    int sum1=0;
    int sum=0;
    int a[16];
    int i=0;

    do
    {
         a[i]=num%10;
        num=num/10;
        i++;
    }
    while(num!=0);

    for (int j=1;j<=i;j++)
    {
        if (j%2==0)
        {
            int m = a[j-1]*2;
            if (m>=10)
            {
                do
                {
                    sum1=sum1+m%10;
                    m=m/10;
                }
                while(m!=0);
            }
            else
            {
                sum1=sum1+m;
            }
        }
        else
        {
            sum=sum+a[j-1];
        }
    }

    int s=sum+sum1;

    if(s%10==0 && a[14]==3 && (a[13]==4 || a[13]==7))
    {
        printf("AMEX\n");
    }
    else if(s%10==0 && a[15]==5 && (a[14]>=1 && a[14]<=5))
    {
        printf("MASTERCARD\n");
    }
    else if(s%10==0 && (a[12]==4 || a[15]==4))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}