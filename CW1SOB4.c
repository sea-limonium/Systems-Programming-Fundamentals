#include <stdio.h>
#include <string.h>

//struct to act as datatype
struct User {
    char userName[100];
    int guesses;
};

//function prototypes
void printName(int x, struct User user); //pass X to function called printName
void passwordEntry(struct User *user); //passwordEntry function prompts user, by their provided name, to enter password

int main()
{
    int X;
    struct User user; //create struct

    printf("Enter a whole number: ");
    scanf("%d", &X); 
    //space for newline erasure
    
    //exception statement to oop back if the user puts a non-whole number for X
    while(X <= 0)
    {
        printf("Invalid integer... Please put a whole number!\n");
        printf("Enter a whole number: ");
        scanf("%d", &X); 
    }

    while (getchar() != '\n'); //clear leftoover newline

    //asks for user's name
    printf("What's your name? ");
    fgets(user.userName, 100, stdin); //consider whitespace
    user.userName[strlen(user.userName) - 1] = '\0'; //newline erasure
    
    while (strlen(user.userName) == 0) //whlie loop to handle blank names
    {
        printf("Did you mean to leave your name blank?\n");
        printf("What's your name? ");
        fgets(user.userName, 100, stdin);
        user.userName[strlen(user.userName) - 1] = '\0';
    }

    printf("\nHello, %s. Your name will be printed %d amount of times: \n", user.userName, X);
    printName(X, user); //invoke printName w nickn. user for userName

    passwordEntry(&user); //call 

    return 0;
}


void printName(int X, struct User user) //same as user.userName
{
    for(int i = 0; i < X; i++) //print userName X times
    {
        printf("%s\n", user.userName);
    }
}

void passwordEntry(struct User *user) // dereference! so we can modify og. struct in main
{
    char password[25];
    char sentinelPass[] = "Doofenshmirtz";
    //-> instead of user.guesses since we dereferenced it!
    user->guesses = 0; //initialise bcz itll output a random number otherwise
    
    printf("\nHello, %s.", user->userName);
    do
    {
        printf("\nPlease enter password: ");
        scanf("%s", password);
        while (getchar() != '\n'); //clear leftoover newline

        if(strcmp(password, sentinelPass) != 0) //itll execute if both str != 0 (means there is diff) (pass not same)
        {
            printf("Incorrect. You have %d amount of tries left.\n", 2 - user->guesses); //3 attempts - iteration
            user->guesses++; //increment guess by 1
        }
        else
        {
            printf("Well done %s, you got the password right in %d attempts!!\n", user->userName, user->guesses + 1);
            break;
        }
    }while(user->guesses < 3); //if user still has attemptes

    if (user->guesses >= 3)
    {
        printf("Bad luck %s, you took %d attempts, you are locked out!\n", user->userName, user->guesses);
    }
}
