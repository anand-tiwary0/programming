#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<cs50.h>
#include<stdlib.h>

int main (void)
{
    char *s=get_string("s: ");

     //char *t=s;

   // *t=toupper(*(t+0));       //here both s and t are pointing to same memory addrress so chane through any of these pointers will be reflected in both

    //printf(" s:  %s\n",s);
   // printf("t:  %s\n",t);

    printf("correction of above mistake\n");
    char *t = malloc (strlen(s)+1);   //now t points to different memory location

    if(t==NULL)     //if no memory malloc will return null pointer (special value of all 0 bits)
    {
        return 1;
    }
    for (int i=0 ,n = strlen(s)+1; i<n;i++)
    {     //copying string pointed by s to memory pointed by t.   strcpy()basically does this..
        *(t+i)=*(s+i);
    }
   //changing first element in the memory being pointed out by t
   if (strlen(t)>0)
   {
        *t = toupper(*t);
        *t= toupper(*(t+(strlen(s))));
   }

    printf(" s:  %s\n",s);
    printf("t:  %s\n",t);

   free(t); //frees the memory allocated
}