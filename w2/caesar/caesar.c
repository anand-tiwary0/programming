#include <cs50.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

bool only_digit(string k);
char rotate(char a,int i);

int main(int argc, string argv[])
{
    if(argc!=2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    bool t=only_digit(argv[1]);

    if(t==false)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int m=atoi(argv[1]);

    string text=get_string("text:  ");
    int u = strlen(text);

    printf("ciphertext: ");
    for(int i=0;i<u;i++)
    {
        char y=rotate(text[i],m);
        printf("%c",y);
    }

    printf("\n");
    return 0;
}

bool only_digit(string k)
{
    int u= strlen(k);
    for(int i=0; i<u;i++)
    {
        if(k[i]<'0' || k[i]>'9')
        {
            printf("Usage: ./caesar key\n");
            return false;
        }
    }
    return true;
}

char rotate (char a,int i)
{
    if(a>='A' && a<='Z')
    {
        return 'A'+(((a-'A')+i)%26);

    }
    else if(a>='a' && a<='z')
    {
        return 'a'+(((a-'a')+i)%26);
    }
    return a;
}