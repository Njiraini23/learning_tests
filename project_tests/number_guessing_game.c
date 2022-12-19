#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    New_game:
    srand(time(NULL));
    int guess, number, no_of_guesses = 1;
    number = (rand() % (1000 - 1 + 1 )) + 1;
    //printf("%d\n", number);
   
    puts("I have a number between 1 and 1000");
    puts("Can you guess the number?");
    printf("Please enter your first guess: \n");

    while(guess != -1)
    {

        if(guess != -1)
        {
            scanf("%d", &guess);

            if(guess == number)
            {
                char option;
                puts("***************************************");
                puts("Excellent! you guessed the number!");
                printf("It took you %d guesses\n", no_of_guesses);
                puts("Would you like to play again (y or n)?");
                puts("****************************************");
                scanf(" %c", &option);

                if(option == 'y')
                {
                   goto New_game;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if(guess < number)
                {
                    puts("Too low, Try again.");
                }
                else
                {
                    puts("Too high, Try gain.");
                }
            }
            no_of_guesses++;
        }
    }
    return (0);
}
