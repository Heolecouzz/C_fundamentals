/* It creates a sequence of int from 1 to n. n is given by the user. k is given by the user and every k th, it supresses from the list the number
n=8, k=3, the list of suppression is 3,6,1,5,2,8,4,7*/

#include <stdio.h>


int main() {

    int n, k, num;

    printf("How many numbers are in the sequence ? > ");
    scanf("%d", &n);

    int numbers[n];

    for (int w = 0; w < n; w++) {
        numbers[w] = w + 1;
    }

    printf("What's your number k ? > ");
    scanf("%d", &k);

    int count = 1; 

    for (int w = n; w >= 0; w--) {
        for (int i = 0; i < n; i++) {
            if (numbers[i] == k * count % 8) {
                // TO DO
            }
        }
    }

    
}