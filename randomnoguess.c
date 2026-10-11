#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL));

    printf("=== HELLO PLAYER ===\n");
    printf("Let's play a game! Guess the random number in the range 1 to your chosen range.\n\n");

    /* --- Get valid range from user --- */
    int range = 0;
    printf("Enter your chosen range (must be >= 1): ");
    while (scanf("%d", &range) != 1 || range < 1) {
        /* Flush any non-numeric characters left in the input buffer */
        int c;
        while ((c = getchar()) != '\n' && c != EOF)
            ;
        printf("Invalid input. Please enter a positive integer for the range: ");
    }

    /* --- Get valid number of chances --- */
    int chances = 0;
    printf("Enter the number of chances (must be >= 1): ");
    while (scanf("%d", &chances) != 1 || chances < 1) {
        int c;
        while ((c = getchar()) != '\n' && c != EOF)
            ;
        printf("Invalid input. Please enter a positive integer for chances: ");
    }

    /* --- Generate random number in [1, range] --- */
    int secret = (rand() % range) + 1;

    printf("\nA random number between 1 and %d has been chosen. Good luck!\n\n", range);

    int guess;
    for (int attempt = 1; attempt <= chances; attempt++) {
        printf("Attempt %d/%d - Enter your guess (1 to %d): ", attempt, chances, range);

        if (scanf("%d", &guess) != 1) {
            /* Non-numeric input: flush and prompt again without consuming an attempt */
            int c;
            while ((c = getchar()) != '\n' && c != EOF)
                ;
            printf("Invalid input. Please enter a number.\n\n");
            attempt--;   /* Don't count this as a used attempt */
            continue;
        }

        if (guess == secret) {
            printf("\n----- You Win! -----\n");
            printf("Correct! The number was %d. You used %d attempt(s).\n", secret, attempt);
            return 0;
        }

        if (attempt == chances) {
            /* Last attempt used up */
            break;
        }

        if (guess < secret) {
            printf("Too low! Try a higher number.\n\n");
        } else {
            printf("Too high! Try a lower number.\n\n");
        }
    }

    printf("\n----- You Lose! -----\n");
    printf("You used all %d chances. The secret number was %d.\n", chances, secret);

    return 0;
}
