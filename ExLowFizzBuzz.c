/* This program display the first 100 numbers and if this numer is a multiple of 3, it writes Buzz and if it's a multiple of 5, it writes Fizz and if both, BuzzFizz*/

#include <stdio.h>

int main() {

    for (int i = 0; i < 101; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d BuzzFizz\n", i);
        } else if (i % 3 == 0) {
            printf("%d Buzz\n", i);
        } else if (i % 5 == 0) {
            printf("%d Fizz\n", i);
        } else {
            printf("%d\n", i);
        }
    }
}