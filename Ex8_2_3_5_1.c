/* The user gives 2 files and if they exists, the content of the first one is copied into the second one */

#include <stdio.h>


int main(int argc, char* argv[]) {

    if (argc != 3) {
        perror("This function needs 3 arguments : ./a.out <nameFileToCopy> <nameFileWhereToCopy>");
        return 0;
    }

    FILE* dest = fopen(argv[2], "w");
    FILE* fileIn = fopen(argv[1], "r");

    if (fileIn == NULL) {
        perror("Impossible to open the file given.");
        return 0;
    }

    if (dest == NULL) {
        perror("Impossible to open or create the file");
        return 0;
    }

    int letter;

    while ((letter = getc(fileIn)) != EOF) {
        putc(letter, dest);
    }

    fclose(fileIn);
    fclose(dest);

    return 1;
} 