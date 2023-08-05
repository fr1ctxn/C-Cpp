#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numberToGuess, playerGuess;
    int attempts = 0;
    char playAgain;

    srand(time(NULL)); // Seed the random number generator with the current time
    do {
        // Generate a random number between 1 and 100
        numberToGuess = rand() % 100 + 1;

        printf("Welcome to the Guess the Number game!\n");
        printf("I'm thinking of a number between 1 and 100.\n");

        do {
            printf("Enter your guess: ");
            scanf("%d", &playerGuess);
            attempts++;

            if (playerGuess < numberToGuess) {
                printf("Too low! Try again.\n");
            } else if (playerGuess > numberToGuess) {
                printf("Too high! Try again.\n");
            } else {
                printf("Congratulations! You've guessed the number %d in %d attempts!\n", numberToGuess, attempts);
            }
        } while (playerGuess != numberToGuess);

        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);

        attempts = 0; // Reset attempts for the new game

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thank you for playing!\n");

    return 0;
}
