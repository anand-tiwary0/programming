#include<stdio.h>
#include<cs50.h>
int main(void)
{
    int z = get_int("enter the number of oprands ::");
    int b[z];
    int s=0;
    for (int i=0;i<z;i++)
    {
        int no = get_int("enter the int operands ::");
        b[i]=no;
    }
    char op= get_char("enter the arithmatic operator of your choice ::");
    switch (op)
    {
        case '+' :
        {
            for(int i=0;i<z;i++)
            {
                s=s+b[i];
            }
            printf("result for your operation %i  \n",s);
            break;
        }
        case '*' :
        {
            for(int i=0;i<z;i++)
            {
                s=1;
                s=s*b[i];
            }
            printf("result for your operation %i \n",s);
            break;
        }
        case '/' :
        {   float m = b[0]/b[1];
            for(int i=2;i<z ;i++)
                {
                m = m/b[i];
                }
                printf("result for your operation %f  \n",m);
                break;
        }
        case '-' :
        {
            for (int i=1;i<z;i++)
            {
            s=b[1]+s;
            }
            s=b[0]-s;
            printf("result for your operation %i \n",s);
            break;
        }
        default :
        {
            printf("you enetered wrong operator \n");
        }
    }
}
