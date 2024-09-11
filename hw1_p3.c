#include<stdio.h> //Importing standard Input/Output header file

int main(){ //Start of main function

        float nunber1, number2; //Declaring Variables

        printf("Number comparison\n"); //Just a print statement
        printf("=================\n\n"); //Again a print statement

        printf("Type the first number: "); //Print statement
        scanf("%f", &nunber1); //Taking first number as input

        printf("Type the second float number: "); //Print statement
        scanf("%f", &number2); //Taking second number as input

        printf("\nIs the first number greater than second (1: yes | 0: no)?\nResult: %d\n\n", nunber1>number2); //Printing the output by comparing two numbers

        printf("End of program.\n\n"); //Print statement

        return 0; //Returning an integer because function is of type 'int'
} //End of main function
