// Example program #1 from chapter 5 of Absolute Beginner's Guide
// to C, 3rd Edition
//File Chapter5ex1.c

// This is a sample program that lists three kids and their school supply needs, as well as the cost to buy the supplies

#include <stdio.h>

int main (void)

{
    //Set up the variables as well as define a few
    char firstInitial, middleInitial;
    int number_of_pencils;
    int number_of_notebooks;
    float pencils = 0.23;
    float notebooks = 2.89;
    float lunchbox = 4.99;

    //The information for the first child
    firstInitial = 'J';
    middleInitial = 'R';

    number_of_pencils  = 7;
    number_of_notebooks = 4;
    printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n", firstInitial, middleInitial, number_of_pencils, number_of_notebooks);
    printf("The total cost is $%.2f\n\n", number_of_pencils*pencils + number_of_notebooks*notebooks+ lunchbox);

    //The information for the second child
    firstInitial = 'M';
    middleInitial = 'T';

    number_of_pencils = 9;
    number_of_notebooks = 2;
     printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n", firstInitial, middleInitial, number_of_pencils, number_of_notebooks);
    printf("The total cost is $%.2f\n\n", number_of_pencils*pencils + number_of_notebooks*notebooks+ lunchbox);

return 0;
}
