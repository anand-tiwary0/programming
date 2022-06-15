#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
struct car    //structs have two word type name
{
    int year;
    char insured;
    int number;
};

int main(void)
{
    struct car mycar[3];    //here mycay is a veriable of data type 'struct car'
    mycar[1].year=2011;
    mycar[1].insured='y';

    mycar[2].year=2014;
    mycar[2].insured = 'n';

    printf("%i \n",mycar[1].year);
    printf("%lu\n",sizeof(struct car));

    struct car *cars = malloc(3 * sizeof(struct car));
    for (int i=0;i<3;i++)
    {
        (*cars).year = get_int ("y :");  //this can automatiaclly decide where to put data without even pointer
        (*cars).insured = get_char("y/n :");  //operation as memory allocted will be filled from left to right as for loop iterates

        //or
        // cars->year= get_int("y :");
        // cars->insured = get_int("y/n :");   //arrow (->) works for both * and . together

       // printf("year fot %ith car: \n",i);
       // scanf("%i",&(cars+i) -> year);
        // printf("%i th car is insured or not (y/n): \n",i);
        // scanf("%s",&(cars+i) -> insured);
    }
}