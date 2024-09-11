#include <stdio.h> //Importing standard Input/Output header file
#include <math.h> //Importing math header fie

int main()
{ // Start of main function

    float A, B, C, root1, root2; //Declaring varibles

    printf("Bhaskara Calculator (real roots only)\n");   // Just a print statement
    printf("=====================================\n\n"); // Again a print statement

    printf("Enter the coefficient A: "); // Print statement to ask the value of A
    scanf("%f", &A); // Taking input for A
    printf("Enter the coefficient B: "); // Print statement to ask the value of B
    scanf("%f", &B); // Taking input for B
    printf("Enter the coefficient C: "); // Print statement to ask the value of C
    scanf("%f", &C); // Taking input for C

    root1 = (-B + sqrt(B * B - 4 * A * C)) / (2 * A); // Calculating root1
    root2 = (-B - sqrt(B * B - 4 * A * C)) / (2 * A); // Calculating root2

    printf("The real roots are x1=%.1f and root2=%.1f\n\n", root1, root2); // Print statement to show the roots
    

    printf("End of program.\n\n"); // Print statement

    return 0; // Returning an integer because function is of type 'int'
} // End of main function
