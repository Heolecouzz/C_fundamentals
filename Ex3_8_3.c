/* In this program, the user gives a string and a character and within the string we must find that character. 
When the character is found (if it is within the string), we gives it's memory address to a new variable*/


#include <stdio.h>
#include <string.h>

char* findchar(char* string, char* character) {

    int lenstr = strlen(string);
    int firstTime = 1;

    for (int i = 0; i < lenstr; i++) {
        if (firstTime) {
            if (string[i] == *character) { 
                return &string[i];
            }
        }
    }
    return NULL;
}

int main(int argc, char* argv[]) {

    if (argc != 3) {
        printf("We must have 2 arguments : ./a.out <string> <character to find>\n");
        return 1; 
    }

    char* firstOcc = findchar(argv[1], argv[2]);

    if (firstOcc != NULL) {
        printf("The character given by the memory address is : %c\n", *firstOcc);
    } else {
        printf("The character was not found in the string.\n");
    }

    return 0;
}