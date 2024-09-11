#include<stdio.h> //Importing standard Input/Output header file

int main(){ //Start of main function

        float decimal1, decimal2, decimal3; //Declaring Variables

        printf("Trim decimal number\n"); //Just a print statement
        printf("===================\n\n"); //Again a print statement

        printf("Type a decimal number: "); //Print statement
        scanf("%f", &decimal1); //Taking first decimal as input

        printf("Type another decimal number: "); //Print statement
        scanf("%f", &decimal2); //Taking second decimal as input

        printf("Type a third decimal number: "); //Print statement
        scanf("%f", &decimal3); //Taking third decimal as input

        printf("\nOutput: %d, %d, %d\n\n", (int) decimal1, (int) decimal2, (int) decimal3); //Printing the output by converting decimals into integers

        printf("End of program.\n\n"); //Print statement

        return 0; //Returning an integer because function is of type 'int'
} //End of main function 
