#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1; //from random number genrator to genrate a random number for the game
    srand(time(0));
    number = rand() % 100 + 1;
    do // it is used so that the program runs at least once
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please\n");
        }
        else if (guess < number)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("You guessed it in %d attempt\n", nguesses);
        }
        nguesses++; // to count the number of guesses

    } while (guess != number);

    return 0;
}
