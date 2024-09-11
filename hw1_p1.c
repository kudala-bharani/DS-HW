#include <stdio.h> //Importing standard Input/Output header file

int main()
{ // Start of main function

    float Fahrenheit, Celsius; // Declaring variables

    printf("Fahrenheit to Celsius calculator\n");   // Just a print statement
    printf("================================\n\n"); // Again a print statement
    printf("Type the temperature (F): ");           // One more print statement
    scanf("%f", &Fahrenheit);                                // Taking input in Fahrenheit

    Celsius = ((Fahrenheit - 32) * 5.0) / 9.0; // Converting Fahrenheit into Celsius using the formulae

    printf("\n%.2f F = %.2f C\n\n", Fahrenheit, Celsius); // Printing the Fahrenheit and Celsius temperatures, and also limiting them to two decimels
    printf("End of program.\n\n");         // Print statement

    return 0; // Returning an integer because function is of type 'int'
} // End of main function
