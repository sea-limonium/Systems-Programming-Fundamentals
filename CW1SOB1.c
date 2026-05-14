#include <stdio.h>

int main()
{ 
    int id = 982467; // Declaring and initialising id as 982467
    printf("Anastasia Kajalic");
    printf("\nStudent ID: M00%d",id); // Using variable id within print statement
    printf("\nDegree Programme: Cyber Security & Digital Forensics");
    printf("\nPurpose of studying: Demand");

    int result1 = id + id;
    printf("\nAddition: %d", result1);

    result1 = id - 52;
    printf("\nSubtraction: %d", result1);

    double result2 = 13094392 / (double) id; //Preceiding divisor with double as id is declared as int.
    printf("\nDivision: %.4lf", result2); 

    result2 = (float) id * 2; 
    printf("\nMultiplication: %.2f", result2); //Altering result2 to 2 decimal places

    return 0;
}