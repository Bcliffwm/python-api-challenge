#include <stdio.h>
#include <stdlib.h>


int main(){

    int secretNumber = 8;
    int guess;
    int guessCount = 0;
    int guessLimit = 5;
    int outOfGuesses = 0;

    while(guess != secretNumber && outOfGuesses == 0){
        if(guessCount < guessLimit){
            printf("Enter a number: ");
            scanf("%d", &guess);
            guessCount++;
        } else {
            outOfGuesses = 1;
        }
    }
    if(outOfGuesses == 1){
        printf("Out of guesses");
    } else {
        printf("You Win!");
    }

    return 0;
};

