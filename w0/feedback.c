#include <cs50.h>
#include<stdio.h>
int main()
{
    string input = get_string("input your feedback regarding our product :  ");
    printf("thanks your feedback is this : %s\n thanks!! \n" , input);
    char conf = get_char("want to change your feedback(y/n) ::");
    if (conf=='y' || conf == 'y')
        {
            string newinp = get_string("input updatd feedback ::");
            input = newinp;
            printf("your new feedback is:; %s \nthanks!!\n",newinp);
        }
    else if(conf == 'N' || conf == 'n')
        {
        printf("thanks again \n");
        }
     else
     {
         printf("you entered a wrong choice but your previous remark will be considerd thanks visit agiain\n");
     }
    return 0;
}