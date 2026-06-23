/* Show the times table*/

#include <stdio.h>

int main() {

    int number;
    int const MAX = 10;

    printf("What is the times table you want to look at ? > ");
    scanf("%d", &number);

    for (int i = 0; i <= MAX; i++) {
        printf("%d x %d = %d\n", number, i, number*i);
    }
}