#include <stdio.h> //Importing standard Input/Output header file
#include <math.h> //Importing math header fie

int main()
{ // Start of main function

    float adjacent, opposite, hypotenuse; //Declaring varibles to store the values of adjacent, opposite and hypotenuse

    printf("Hypotenuse Calculator\n");   // Just a print statement
    printf("=====================\n\n"); // Again a print statement

    printf("Type the length of the adjacent side (in cm): "); // Print statement asking for length of adjacent side
    scanf("%f", &adjacent); // Taking adjacent side length as input
    printf("Type the length of the opposite side (in cm): "); // Print statement asking for length of opposite side
    scanf("%f", &opposite); // Taking opposiite side length as input

    hypotenuse = sqrt((adjacent * adjacent) + (opposite * opposite)); // Calculating hypotenuse using Pythagoras theorem

    printf("\nHypotenuse: %.1f\n\n", hypotenuse); // Printing the hypotenuse

    printf("End of program.\n\n"); // Print statement

    return 0; // Returning an integer because function is of type 'int'
} // End of main function
