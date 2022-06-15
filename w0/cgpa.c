#include<stdio.h>
#include<cs50.h>
int main()
{
    const int mine =  4;
    int input = get_int("enter the your cgpa:: ");
    if  (input==mine)
        {
            printf("bongo!we have same cgpa\n");
        }
    else if (input>mine)
        {
            printf("you studied harder then me\n");
        }
    else
        {
            printf("you scored little less then me\n");
        }
return 0;
}