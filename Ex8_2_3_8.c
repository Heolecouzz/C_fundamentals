/* This program compare 2 given files and display the first line where they differ */ 

#include <stdio.h>
#include <string.h>


int main(int argc, char* argv[]) {

    char lineFile1[1024];
    char lineFile2[1024];
    FILE* file1;
    FILE* file2;

    if (argc != 3) {
        printf("The number of arguments aren't correct. Three are required");
        return 0;
    }

    if ((file1 = fopen(argv[1], "r")) == NULL) {
        perror("Impossible to open the first file given");
        return 0;
    }

    if ((file2 = fopen(argv[2], "r")) == NULL) {
        perror("Impossible to open the second file given");
        return 0;
    }

    int isTrue = 1;

    while((fgets(lineFile1, 1024,file1)) != NULL && (fgets(lineFile2, 1024, file2)) != NULL && isTrue) {
        if (strcmp(lineFile1, lineFile2) != 0) {
            isTrue = 0;
            printf("The 2 files are differents : \n\n");
            printf("Line in the first file : ");
            puts(lineFile1);
            printf("Line in the second file : ");
            puts(lineFile2);
            return 1;
        }
    }

    printf("The two files are completely similar");
    return 1;
}