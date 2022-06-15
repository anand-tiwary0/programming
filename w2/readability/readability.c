#include <cs50.h>
#include <stdio.h>
#include<string.h>
#include<math.h>
int count_letters(string s);
int count_words(string s);
int count_sentenses(string s);
int index(int l,int w,int s);


int main(void)
{
    char *user=get_string("text: ");
    int l = count_letters(user);
    int w= count_words(user);
    int s= count_sentenses(user);
    int ind=index(l,w,s);

    if(ind>=16)
    {
        printf("Grade 16+\n");
    }
    else if (ind<1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n",ind);
    }
    return 0;
}



int count_letters(string s)
{
    int m=0;
    int q= strlen(s);
    for(int i=0;i<q;i++)
    {
        if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
        {
            m++;
        }
    }
    return m;
}


int count_words(string s)
{
    int m=1;
    int q=strlen(s);
    for(int i=0;i<q;i++)
    {
        if(s[i]==' ')
        {
            m++;
        }
    }
    return m;
}



int count_sentenses(string s)
{
    int m=0;
    int q=strlen(s);
    for(int i=0;i<q;i++)
    {
        if((s[i]=='!') || (s[i]=='.') || (s[i]=='?'))
        {
            m++;
        }
    }
    return m;
}


int index(int l,int w,int s)
{
    float lw=(l/(float)w)*100.0;
    float sw=(s/(float)w)*100.0;
    int index = round(0.0588*lw-0.296*sw-15.8);
    int index1=index;
    return index1;
}