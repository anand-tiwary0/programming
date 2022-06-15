#include<stdio.h>
#include<cs50.h>
void mai(int m);

int main(void)
{
    int a= get_int("enter your score ::");
    mai(a);

}


//side effect type functon that is it doesnot takes any user input it just show some effects
void mai(int m)
{
    if(m<=100 && m>80)
    {
        printf("your score is %i and you. get an EXCELLENT! \n",m);
    }
    if(m<=80 && m>60)
    {
        printf("your score is %i and you. get good!  \n",m);
    }
    if(m<=60 && m>40)
        {
            printf("your score is %i and you. get AVERAGE! \n",m);
        }
        else
        {
        printf("your score is %i and you. get VERY POOR \n",m);
    }

}