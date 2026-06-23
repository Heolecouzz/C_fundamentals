/* In this exercice, the aim is to read 2 integers and then display them ordered */

#include <stdio.h>

int main() {

    int result[2];
    int number;

    for (int i = 0; i < 2; i++) {
        printf("What is your number ? > ");
        scanf("%d", &number);
        result[i] = number;
    }

    printf("The ordered numbers are : \n");
    if (result[0] < result[1]) {
        printf("%d\n", result[0]);
        printf("%d\n", result[1]);
    } else {
        printf("%d\n", result[1]);
        printf("%d\n", result[0]);
    }
}