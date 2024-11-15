#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "computer";
    char display[] = "________";
    char guess;
    int chances = 3, correctGuess = 0, i;

    while (chances > 0 && strcmp(word, display) != 0) {
        printf("Word: %s\n", display);
        printf("Enter your guess: ");
        scanf(" %c", &guess);
        correctGuess = 0;

        for (i = 0; i < strlen(word); i++) {
            if (word[i] == guess && display[i] == '_') {
                display[i] = guess;
                correctGuess = 1;
            }
        }

        if (!correctGuess) {
            chances--;
            printf("Wrong guess! Remaining chances: %d\n", chances);
        } else {
            printf("Good guess!\n");
        }
    }

    if (strcmp(word, display) == 0) {
        printf("Congratulations! You saved the man! The word was: %s\n", word);
    } else {
        printf("You lost! The man is hanged. The word was: %s\n", word);
    }

    return 0;
}
