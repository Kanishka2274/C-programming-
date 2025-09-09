#include <stdio.h>
#include <stdlib.h> // for rand() and srand()
#include <time.h>   // for time()

int main()
{
    // initialize the random number generator
    srand(time(0));

    int randomBetween1And100 = (rand() % 100) + 1; // Generate a random number between 1 to 100
    int no_of_guesses = 0;
    int guessed_number;

    // printf("Random number (any range): %d\n", randomNum);
    // printf("Random number between 1 and 100: %d\n", randomBetween1And100);
    // --- Welcome & Description ---
    printf("=====================================\n");
    printf("  Welcome to the Guess the Number Game! \n");
    printf("=====================================\n");
    printf("Rules of the game:\n");
    printf("1. I have chosen a random number between 1 and 100.\n");
    printf("2. Your task is to guess the number.\n");
    printf("3. After each guess, I will tell you:\n");
    printf("   - 'Lower number please' if your guess is too high.\n");
    printf("   - 'Higher number please' if your guess is too low.\n");
    printf("4. Keep guessing until you find the correct number!\n");
    printf("-------------------------------------\n\n");
     // --- Game Loop ---
    do
    {

        printf("Guess the Number(1-100) :-----");
        scanf("%d", &guessed_number);
        if (guessed_number > randomBetween1And100)
        {
            printf("Lower number please!!!\n");
        }
        else if(guessed_number<randomBetween1And100)
        {
            printf("Higher number please!!!\n");
        }
        else{
            printf("congrats!!!!\n");
        }
        no_of_guesses++;

    } while (guessed_number != randomBetween1And100);

    printf("You guessed the number in %d guessess", no_of_guesses);

    return 0;
}
