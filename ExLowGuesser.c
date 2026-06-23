/* The user gives a number and thanks to hints, the user has to guess the number*/

#include <stdio.h>
#include <stdlib.h> // For the randomness

int main() {

    int number, attempt;

    number = rand() % 101;

    do {
        printf("Let's attempt to guess the number. What's your number ? > ");
        scanf("%d", &attempt);
        if (attempt < number) {
            printf("The number is higher than your attempt !\n");
        } else if (attempt > number) {
            printf("The number is lower than your attempt !\n");
        } else {
            printf("You find it ! The number was %d", number);
        }
    } while(attempt != number);
}