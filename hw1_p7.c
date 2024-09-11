#include <stdio.h> //Importing standard Input/Output header file

int main()
{ // Start of main function

    float A, B, C; //Declaring varibles

    printf("Swapping Program\n");   // Just a print statement
    printf("================\n\n"); // Again a print statement

    printf("Enter the first number: "); // Print statement asking for 1st number
    scanf("%f", &A); // Taking input for A
    printf("Enter the second number: "); // Print statement asking for 2nd number
    scanf("%f", &B); // Taking input for B
    printf("Enter the third number: "); // Print statement asking for 3rd number
    scanf("%f", &C); // Taking input for C

    printf("\nBefore swapping:\n"); // Print statement
    printf("a = %.1f\n", A); // Print statement to show value of A before swapping
    printf("b = %.1f\n", B); // Print statement to show value of B before swapping
    printf("c = %.1f\n", C); // Print statement to show value of C before swapping

    float temp = A; // Declaring a temporary variable to store value of C

    A = C; // Storing value of C in A
    C = B; // Storing value of B in C
    B = temp; // Storing value of A in B

    printf("\nAfter swapping:\n"); // Print statement
    printf("a = %.1f\n", A); // Print statement to show value of A after swapping
    printf("b = %.1f\n", B); // Print statement to show value of B after swapping
    printf("c = %.1f\n", C); // Print statement to show value of C after swapping
    
    printf("\nEnd of program.\n\n"); // Print statement

    return 0; // Returning an integer because function is of type 'int'
} // End of main function
