/* The Sieve of Eratosthenes */

#include <stdio.h>
#include <stdlib.h>

void explanation() {
    printf("The Sieve of Eratosthene needs you to indicate the number N, which is the the maximum number, forming the range 2-N in which we look for prime number.\n");
    printf("\n");
    printf("Here's an example : ./a.out 100\n");
}

int main(int argc, char* argv[]) {
    
    if (argc != 2) {
        explanation();
    }

    int N = atoi(argv[1]);

    int tab[N];

    // Creation of an array to true
    for (int i = 0; i < N; i++) {
        tab[i] = 1;
    }

    // 0 and 1 aren't prime numbers
    tab[0] = 0;
    tab[1] = 0;

    printf("Every prime number in the range 0-%d are :\n", N);
    for (int i = 2; i <= N; i++) {
        // if the index is a prime number
        if (tab[i] == 1) {
            int w = 2;
            while ((i * w) <= N) {
                // Every multiple isn't a prime number
                tab[i*w] = 0;
                w += 1;
            }
            printf("%d is a prime number\n", i);
        }
    }
}