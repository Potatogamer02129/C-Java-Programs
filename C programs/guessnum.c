#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lower = 1, upper = 100;  // Define the range for the random number
    int guess, number, attempts = 0;
    char playAgain;

    // Seed the random number generator
    srand(time(0));

    do {
        // Generate a random number between lower and upper
        number = (rand() % (upper - lower + 1)) + lower;

        printf("Guess the number between %d and %d: ", lower, upper);

        // Keep asking until the player guesses the correct number
        do {
            scanf("%d", &guess);
            attempts++;

            if (guess > number) {
                printf("Too high! Try again: ");
            } else if (guess < number) {
                printf("Too low! Try again: ");
            } else {
                printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            }
        } while (guess != number);

        // Ask if the player wants to play again
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);

        // Reset the number of attempts for the next round
        attempts = 0;

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thank you for playing!\n");

    return 0;
}
