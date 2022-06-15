#include <stdio.h>
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int cmp(char *s,char *t);

int main(void)
{
    char *s = get_string("s: ");
    char *t = get_string("s: ");
    int u  =  cmp(s,t);
    if (u == 0)
    {
        printf("same\n");
    }
    else if(u==1)
    {
        printf("different\n");
    }
}

    int cmp(char *s, char *t)
    {
        int q=0;
        for (int i = 0,n = strlen(s); i < n ; i++)
        {
            if (*(s + i) == *(t + i))
            {
                q++;
            }
        }
              if(q==strlen(s))
            {
                return 0;
            }
            else
            {
                return 1;
            }
    }