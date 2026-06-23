/* The aim is to reverse a string, without creating any other array*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char string[1024];

    printf("What's the string you want to reverse ? > ");
    scanf("%1023s", string);

    char other;
    int len, switches;

    len = strlen(string);

    switches = len / 2;

    for (int i = 0; i < switches; i++) {
        other = string[i];
        string[i] = string[len - i - 1];
        string[len - i - 1] = other;
    }

    printf("The reverse string is %s", string);

    return 0;
}