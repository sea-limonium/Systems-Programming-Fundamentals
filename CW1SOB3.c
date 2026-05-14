#include <stdio.h>

int main()
{
    int score;

    do{ // Do while loop to always execute the block of code at least once, then check the condition
        printf("Enter exam score (-1 to stop): ");
        scanf("%d", &score);

        if(score>=0 && score<=39) // If/else statement to check arguments and print out whatever user inputs 
        {
            printf("Your exam score is %d which is a FAIL.\n", score);
        }
        else if(score>=40 && score<=49) // Checks to see if the score is more/equal to 40, and that it is less/equal to 49
        {
            printf("Your exam score is %d which is a THIRD.\n", score);
        }
        else if(score>=50 && score<=59)
        {
            printf("Your exam score is %d which is a LOWER SECOND.\n", score);
        }        
        else if(score>=60 && score<=69)
        {
            printf("Your exam score is %d which is a UPPER SECOND.\n", score);
        }
        else if(score>=70 && score<=100)
        {
            printf("Your exam score is %d which is a FIRST.\n", score);
        }
        else{
            if(score<0 && score!=-1 || score>100 ) { // else statement to print out scores out-of-range
            printf("%d is an invalid score.\n", score);
            }
        }

    }while(score!=-1); // Since the block of code is executed, it checks if the user inputted -1. If not, then repeats the loop

    return 0;
}