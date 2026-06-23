/* We want to find the length of a string, without using strlen !*/

#include <stdio.h>

int main(int argc, char* argv[]) {

    if (argc != 2){
        perror("You missed the string !");
    }

    int i = 0;
    int len = 0;

    while (argv[1][i] != '\0') {
        len++;
        i++;
    }

    printf("The length of the string %s is %d", argv[1], len);

    return 0;
}