#include<stdio.h>
#include<cs50.h>
#include<string.h>

typedef structcodde //people datatype creation
{
    string name;
    string number;
}
people;

int main(void)
{
    people person[2];

    person[0].name="david";
    person[0].number="+91-743285";          //data allocation to each variable of each struct
    person[1].name="carter";
    person[1].number="+91-673636";

    for(int i=0;i<2;i++)
    {
        if(strcmp(person[i].name,"david")==0)
        {
            printf("found %s \n",person[i].number);
            return 0;
        }
    }
    printf("not found \n");
    return 1;
}