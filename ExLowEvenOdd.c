/* The user gives a number and it displays whether it's an even or an odd number */

#include <stdio.h>

int main() {

    int number;

    printf("What's your number ? > ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("The number %d is an even one", number);
    } else {
        printf("The number %d is an odd one", number);
    }
}