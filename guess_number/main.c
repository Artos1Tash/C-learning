#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int guess, attempts = 0;
    srand(time(NULL));
    int num = rand() % 11;

    printf("Guess the number between 0 and 10: ");
    scanf("%d", &guess);

    do {
        if (guess == num){
            break;
        } else{
            printf("Try again: ");
            scanf("%d", &guess);
        }
    } while (guess != num);
    printf("You got it, %d\n", num);
    return 0;
}