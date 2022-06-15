#include<stdio.h>
#include<cs50.h>
void str_len(void);

int main(void)
{
    str_len();
}


void str_len(void)
{
    string a=get_string("enter a string of your choice : :");
    int i=0;
    while(a[i]!= '\0')
    {
        i++;
    }
    for(int k=0;k<i;k++)
    {
        printf("a[%i] = %c in your string [ascii =%i] \n",k,a[k],a[k]);
    }
    printf("number of characters = %i \n",i);
}