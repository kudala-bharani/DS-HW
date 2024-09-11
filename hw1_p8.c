#include <stdio.h> //Importing standard Input/Output header file

int main()
{ // Start of main function

    int numerator, denominator, whole; //Declaring varibles

    printf("Improper fraction to Mixed number convertor\n"); // Just a print statement
    printf("===========================================\n\n"); // Again a print statement

    printf("Please inform the values of the improper fraction\n");
    printf("Type the numerator: "); // Print statement asking input for numerator
    scanf("%d", &numerator); // Taking input for numerator
    printf("Type the denominator: "); // Print statement asking input for denominator
    scanf("%d", &denominator); // Taking input for denominator

    whole = numerator / denominator; // Calculating whole number
    numerator = numerator % denominator; // Calculating numerator

    printf("\nThe mixed number is %d %d/%d.\n", whole, numerator, denominator); // Printing the mixed number
    
    printf("\nEnd of program.\n\n"); // Print statement

    return 0; // Returning an integer because function is of type 'int'
} // End of main function
