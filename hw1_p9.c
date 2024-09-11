#include <stdio.h> //Importing standard Input/Output header file

int main()
{ // Start of main function

    float weight, height, BMI; //Declaring varibles

    printf("BMI calculator for adults (20+ yo)\n"); // Just a print statement
    printf("==================================\n\n"); // Again a print statement

    printf("Type the person's weight (kg): "); // Print statement asking for weight as input
    scanf("%f", &weight); // Taking input for weight
    printf("Type the person's height (cm): "); // Print statement asking for height as input
    scanf("%f", &height); // Taking input for height

    height = height / 100; // Converting height from cm to m

    BMI = weight / (height * height); // Calculating BMI

    printf("\nThe person's BMI is %.2f.\n", BMI); // Printing BMI

    printf("\nEnd of program.\n\n"); // Print statement

    return 0; // Returning an integer because function is of type 'int'
} // End of main function
