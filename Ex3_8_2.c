/* This program verify that the input given is a first group verb in french and then gives its "imparfait" conjugaison*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verifyVerb(char* tab, int dimTab) {

    char e, r;

    for (int i = 0; i < dimTab; i++) {
        if (i == dimTab - 2) {
            e = tab[i];
        } else if (i == dimTab - 1) {
            r = tab[i];
        }
    }
    
    if ( r == 'r' && e == 'e') {
        return 1;
    }
    return 0;
}

void conjugateVerb(char* tab, int dimTab) {

    char* endings[6] = {"ais", "ais", "ait", "ions", "iez", "aient"};

    char radical[dimTab-2];
    
    for (int i = 0; i < dimTab-2; i++) {
        radical[i] = tab[i];
    }
    
    for (int i = 0; i < 6; i++) {
        printf("%s", radical);
        printf("%s\n", endings[i]);
    }
}

int main(int argc, char* argv[]) {

    if (argc != 2) {
        perror("There should have one verb to conjugate");
    }

    int argvDim = strlen(argv[1]);

    if (verifyVerb(argv[1], argvDim) == 0) {
        perror("The word isn't a first group verb");
    } else {
        conjugateVerb(argv[1], argvDim);
    }

    return 0;
}