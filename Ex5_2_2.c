/* In this program, we want to simulate the echo command.*/

#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {

    if (argc < 2) {
        printf("Not enough arguments");
        return 1;
    }

    if (strcmp(argv[1], "echo")) {
        printf("We only work with echo !");
        return 1;
    }

    for (int i = 2; i < argc; i++) {
        printf("%s ", argv[i]);
    }

    return 0;
}