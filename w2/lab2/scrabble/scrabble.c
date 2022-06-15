#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if(score1==score2)
    {
        printf("tie!\n");
    }
    else if(score1>score2)
    {
        printf("player1 wins!\n");
    }
    else
    printf("player2 wins!\n");
}

int compute_score(string word)
{   int z;
    int sum=0;
    int m=strlen(word);
    char a[m];
    for(int n=0;n<m;n++)
    {
    a[n]=word[n];
    }
    for(int i=0;i<m;i++)
    {
        a[i]=toupper(a[i]);
    }
    int c[26]={65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90};
    // TODO: Compute and return score for string
    for (int t=0;t<m;t++)
    {
        z=(int) a[t];
        for(int f=0;f<25;f++)
        {
        if(z==c[f])
        {
            sum=sum+POINTS[f];
        }
        else
            sum=sum+0;
        }
    }
    return sum;
}
