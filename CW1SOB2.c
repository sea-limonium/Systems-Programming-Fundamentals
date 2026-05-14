#include <stdio.h>
#include <string.h>

int main()
{
    char operator; 
    char Student_Name[100];
    double X; //Number 1
    double Y; // Num2
    double result; 

    printf("What's your name?: "); // Asks for user's name
    fgets(Student_Name, 100, stdin); //fgets to consider white space
    Student_Name[strlen(Student_Name) - 1] = '\0'; // Removes newline 
        while(strlen(Student_Name) == 0)
        { // While loop if Student_Name is blank, by checking length of name
            printf("Did you mean to leave your name blank?\n"); 
            printf("\nWhat's your name?: ");
            fgets(Student_Name, 100, stdin);
            Student_Name[strlen(Student_Name) - 1] = '\0';
        }

    printf("Enter an operator (+ - * /): "); // User input for operator akin to a menu
    scanf("%c", &operator);
    
    while(operator != '+' && operator != '-' && operator != '*' && operator != '/') // Checks to see that user input follows the designated operators
    { // While loop to continuously ask User for correct operator
        printf("%c is an invalid operator. Try again:\n", operator);
        printf("Enter an operator (+ - * /): ");
        scanf(" %c", &operator); // Space to ensure that newline char is ignored
    }

    printf("Enter number 1: "); 
    scanf("%lf", &X);

    printf("Enter number 2: ");
    scanf("%lf", &Y);

    switch(operator){ // Examining operators by using switch cases
        case '+': // Goes through each switch case corresponding to the operator by user input
            result=X+Y;
            printf("%s has entered %.2lf and %.2lf. %.2lf + %.2lf equals %.2lf", Student_Name, X, Y, X, Y, result);
            break; // To break out of the switch

        case '-':
            result=X-Y;
            printf("%s has entered %.2lf and %.2lf. %.2lf - %.2lf equals %.2lf", Student_Name, X, Y, X, Y, result);
            break;

        case '*':
            result=X*Y;
            printf("%s has entered %.2lf and %.2lf. %.2lf * %.2lf equals %.2lf", Student_Name, X, Y, X, Y, result);
            break;

        case '/':
            result=X/Y;
            printf("%s has entered %.2lf and %.2lf. %.2lf / %.2lf equals %.2lf", Student_Name, X, Y, X, Y, result);
            break;
    }

    return 0;
}
