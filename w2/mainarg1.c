#include<stdio.h>
#include<cs50.h>

int main(int argc , string argv[])
{
    if (argc >= 2)
    {
        printf("hello ");
        //prints CLAA after programme name
        for (int i=1;i<argc;i++)
        {
            printf("%s ",argv[i]);
        }
        printf("\n");
        return 0;  //terminates furthur execution and return 0 to main as it indicates everything went fine
    }
printf("hello world missing command line argument\n");
return 1; //stops furthur execution of the program and returns 1 exit code to main function indicating error
}