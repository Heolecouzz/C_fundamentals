/* We aim to display the N first number of the fibonacci sequence iteratively and recursively*/

#include <stdio.h>

void iterativeFibonacci(int number) {

    int former = 0, actual = 1, result;

    printf("%d, ", former);
    printf("%d, ", actual);

    for (int i = 0; i < number - 2; i++) {
        result = former + actual;
        printf("%d, ", result);
        former = actual;
        actual = result;
    }
}

void RecFibonacci(int number, int former, int actual) {

    int result;

    if (number != 2 ) {
        result = former + actual;
        former = actual;
        actual = result;
        printf("%d, ", result);
        RecFibonacci(number - 1, former, actual);
    }
}

int main() {

    int choice, number;

    printf("How many number do you want to see of that sequence ? > ");
    scanf("%d", &number);

    printf("Do you want to display the sequence of Fibonacci iteratively (0) or recursively (1) ? > ");
    scanf("%d", &choice);

    

    if (choice == 0) {
        iterativeFibonacci(number);
    } else {
        int former = 0, actual = 1;
        printf("%d, ", former);
        printf("%d, ", actual);
        RecFibonacci(number, former, actual);
    }
}