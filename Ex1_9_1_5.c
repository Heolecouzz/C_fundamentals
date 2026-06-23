/* The aim is to create a filter for I/O. We want to supress the contiguous occurences of the same character and displays the number of characters transferred */

#include <stdio.h>

int transmitted = 0;
int total = 0;

int main() {

    // FIX: Changed from char to int to properly catch the EOF (-1) signal
    int actual_char;
    int former_char = EOF; 

    printf("What is your text ? > ");

    while ((actual_char = getchar()) != '\n' && actual_char != EOF) {
        total += 1;

        if (actual_char != former_char) {
            putchar(actual_char);
            transmitted += 1;
        }

        former_char = actual_char;
    }

    // Adjusted the math output to correctly reflect what was actually suppressed
    printf("\nWe suppressed %d characters out of %d, which means %d characters were unnecessary\n", total - transmitted, total, total - transmitted);

    return 0;
}