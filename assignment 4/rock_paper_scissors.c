#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userchoice, computerchoice;
    char *options[] = {"Rock", "Paper", "Scissors"};
    srand(time(0));
    computerchoice = rand() % 101;

    printf("Choose an option:\n1. Rock\n2. Paper\n3. Scissors\nEnter your choice: ");
    scanf("%d", &userchoice);

    if (computerchoice <= 33)
        computerchoice = 1;
    else if (computerchoice <= 66)
        computerchoice = 2;
    else
        computerchoice = 3;

    printf("You chose: %s\n", options[userchoice - 1]);
    printf("Computer chose: %s\n", options[computerchoice - 1]);

    if (userchoice == computerchoice)
        printf("It's a tie!\n");
    else if ((userchoice == 1 && computerchoice == 3) || 
             (userchoice == 2 && computerchoice == 1) || 
             (userchoice == 3 && computerchoice == 2))
        printf("You win!\n");
    else
        printf("Computer wins!\n");

    return 0;
}
