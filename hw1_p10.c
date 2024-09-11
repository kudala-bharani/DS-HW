#include <stdio.h> //Importing standard Input/Output header file

int main()
{ // Start of main function

    int A, B; //Declaring varibles

    printf("Truth table (A, B)\n"); // Just a print statement
    printf("==================\n\n"); // Again a print statement

    printf("A  B  !A !B  A&&B  A||B\n"); // Print statement for table header
    printf("-----------------------\n"); // Print statement for doted line
    
    A = 0; // Assigning 0 to A
    B = 0; // Assigning 0 to B

    printf("%d  %d  %d  %d   %d     %d\n", A, B, !A, !B, A && B, A || B); // Print statement for first row

    B = 1; // Assigning 1 to B

    printf("%d  %d  %d  %d   %d     %d\n", A, B, !A, !B, A && B, A || B); // Print statement for second row

    A = 1; // Assigning 1 to A
    B = 0; // Assigning 0 to B

    printf("%d  %d  %d  %d   %d     %d\n", A, B, !A, !B, A && B, A || B); // Print statement for third row

    B = 1; // Assigning 1 to B

    printf("%d  %d  %d  %d   %d     %d\n", A, B, !A, !B, A && B, A || B); // Print statement for fourth row

    printf("\nEnd of program.\n\n"); // Print statement

    return 0; // Returning an integer because function is of type 'int'
} // End of main function
