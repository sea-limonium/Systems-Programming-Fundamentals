#include <stdio.h>

void printAddress(double *num1, double *num2)
{
    printf("\nMemory address of num1: %p", num1); //%p for pointer
    printf("\nMemory address of num2: %p", num2);
}

int main()
{
    double num1;
    double num2;

    //pointer declration
    double *ptr1 = &num1; //ptr1 points to memory address of num1
    double *ptr2 = &num2;

    printf("Enter first number: ");
    scanf("%lf", ptr1); //user input in num1 thru ptr1

    printf("Enter second number: ");
    scanf("%lf", ptr2);

    printAddress(ptr1, ptr2);

    //Sum
    printf("\nSum: %.2lf", *ptr1 + *ptr2);
    //Difference
    printf("\nDifference: %.2lf", *ptr1 - *ptr2);
    //Product
    printf("\nProduct: %.2lf", *ptr1 * *ptr2);
    //Quotient
    printf("\nQuotient: %.2lf", (*ptr1) / (*ptr2));


    printAddress(ptr1, ptr2);

    return 0;

}
