/* This program simulate the cat command */


#include <stdio.h>


int main(int argc, char* argv[]) {

    for (int i = 1; i < argc; i++) {
        FILE* file;
        if ((file = fopen(argv[i], "r")) != NULL) {
            int letter;
            while ((letter = getc(file)) != EOF) {
                printf("%c", letter);
            }
            printf("\n\n");
        } else {
            printf("Impossible to open the %dth file", i);
            return 0;
        }
    }

    return 1;
}