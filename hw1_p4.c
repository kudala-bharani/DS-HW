#include<stdio.h> //Importing standard Input/Output header file

int main(){ //Start of main function

        char name1[25], name2[25]; //Declaring two Strings from names of two student
        float marks1, marks2; //Declaring two float variables to store makrs of two students

        printf("Grade Report\n"); //Just a print statement
        printf("============\n\n"); //Again a print statement

        printf("Type the first student's name: "); //Print statement asking for first student's name
        scanf("%s", name1); //Taking first student name as input
        printf("Type the first student's grade (0-100): "); //Print statement asking for first student's grade
        scanf("%f", &marks1); //Taking first student grade as input

        printf("Type the second student's name: "); //Print statement asking for second student's name
        scanf("%s", name2); //Taking second student name as input
        printf("Type the second student's grade (0-100): "); //Print statement asking for second student's grade
        scanf("%f", &marks2); //Taking second student grade as input

        printf("\n| Student Name              | Student Grade |\n"); //Printing headings of table
	printf("|---------------------------|---------------|\n"); //Printing a doted line
        printf("| %-25s | %13.2f |\n", name1, marks1); //Printing details of first student in a formated way
        printf("| %-25s | %13.2f |\n\n", name2, marks2); //Printing details of second student in a formated way

        printf("End of program.\n\n"); //Print statement

        return 0; //Returning an integer because function is of type 'int'
} //End of main function
