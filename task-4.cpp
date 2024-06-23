#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random_number, guess;
    
    // Seed the random number generator
    srand(time(0));
    random_number = rand() % 100 + 1;  // Generate a random number between 1 and 100

    printf("Guess the number (between 1 and 100):\n");

    // Loop until the user guesses the correct number
    while (1) {
        // Get user input
        printf("Enter your guess: ");
        scanf("%d", &guess);

        // Check if the guess is correct
        if (guess > random_number) {
            printf("Lower!\n");
        } else if (guess < random_number) {
            printf("Higher!\n");
        } else {
            printf("Congratulations! You guessed the correct number: %d\n", random_number);
            break;
        }
    }

    return 0;
}

