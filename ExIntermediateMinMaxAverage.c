/* The user gives to the program 10 number and it has to find the min and max and then calculate the average*/

#include <stdio.h>

int Min(int* tab, int len) {

    int min = tab[0];

    for (int i = 1; i < len; i++) {
        if (min > tab[i]) {
            min = tab[i];
        }
    }

    return min;
}

int Max(int* tab, int len) {

    int max = tab[0];

    for (int i = 1; i < len; i++) {
        if (max < tab[i]) {
            max = tab[i];
        }
    }

    return max;
}

float Average(int* tab, int len) {

    int average;
    int sum = 0;

    for (int i = 0; i < len; i++) {
        sum += tab[i];
    }

    average = sum / len;

    return average;
}

int main() {

    int numbers[10];
    int number;
    int len = sizeof(numbers) / sizeof(numbers[0]);
    int minimum, maximum;
    float average;

    for (int i = 0; i < len; i++) {
        printf("What's your %dst number ? > ", i+1);
        scanf("%d", &number);
        numbers[i] = number;
    }

    minimum = Min(numbers, len);
    maximum = Max(numbers, len);
    average = Average(numbers, len);

    printf("Minimum : %d\nMaximum : %d\nAverage : %f", minimum, maximum, average);

    return 0;
}