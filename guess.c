#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int guess = 0;
    int tries = 0;
    int chosen = 0;
    time_t t;

    srand((unsigned) time (&t));

    chosen = rand() % 21;

    printf("This is a Guessing Game.");
    printf("\nI have chosen a number between 0 and 20.");
    printf("\nYou have 5 attempts tp guess the number");

    for(;tries < 5; ++tries ){
        printf("\nYou have used %d tries.", tries);
        printf("\nWhat is your Guess?");
        scanf("%d", &guess);
            if( guess == chosen){
                printf("\nYou win!! the number was: %d", chosen);
                return 0;
            } else if (guess < 0 || guess > 20 ){
                printf("The number is between 0 and 20\n");
            } else if (guess < chosen){
                printf("Your guess %d was too low!\n", guess);
            } else if (guess > chosen){
                printf("Your guess %d was too high!\n", guess); 
            }
    }
    printf("\nSorry you lose! You have had more then 5 tries!! The number was %d", chosen);

    return 0;
}