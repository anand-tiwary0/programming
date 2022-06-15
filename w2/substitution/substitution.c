#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
bool check_string (string a);
char output_cipher (char plain , string cl);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf(" enter proper string of char \n " );
        return 1;
    }

    bool t= check_string (argv[1]);

    if(t == false)
    {
        printf("enter proper string \n ");
        return 1;
    }

    string text = get_string ("text : ");
    printf("ciphertext: ");

    for (int i= 0 ,z= strlen (text ); i< z; i++)
    {
        printf ("%c",output_cipher(text[i],argv[1]));
    }
    printf("\n");
return 0;
}

//function definations
bool check_string (string a)
{
    string k=a;
    if (strlen(k) != 26)       //checks for exact number(26) characters in the cla string
    {
        return false;
    }
    int n = strlen(k);
    for (int h=0 ; h<n ; h++)
    {
        //checks for only alphabetical characters in the string
        if ((k[h]< 'A' || k[h] > 'Z') && (k[h]< 'a' || k[h] > 'z'))
        {
            return false;
        }
    }
    int o=0;
    for (int h=0 ; h<n ; h++)
    {
        for ( int y=0 ; y<26 ; y++)
        {
            if (k[h]==k[y])     //checks if all characters in the string are unique
            {
                o++;
            }
        }
        if(o>1)
        {
            return false;
        }
        o=0;
    }
    return true;
}
//output part
char output_cipher (char plain , string cl)
{
    string cla = cl;
    int x= (int)plain;
    //handels lowercase plaintext
    if (islower (plain))
    {
        if (islower (cla[x-97]) )
        {
            plain = cla[x-97];
            return plain;
        }
        else if ( isupper (cla[x-97]))
        {
            char m= tolower(cla[x-97]);
            plain = m;
            return plain;
        }
    }
  //handels uppercase plain texttext
 else if (isupper(plain))
    {
        if (isupper(cla[x-65]) )
        {
            plain = cla[x-65];
            return plain;
        }
        else if ( islower(cla[x-65]))
        {
            char m= toupper(cla[x-65]);
            plain = m;
            return plain;
        }
    }
    return plain;
}