/* Bubble sorting array */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    int tab[argc];
    int number;

    for (int i = 0; i < argc; i++) {
        tab[i] = atoi(argv[i]);
    }

    int len = sizeof(tab)/sizeof(tab[0]);

    printf("Le tableau non trié : \n");
    for (int k = 0; k < len; k++) {
        printf("%d;", tab[k]);
    }

    for (int i = len-1; i > 1; i--) {
        for (int j = 0; j < i; j++) {
            if (tab[j+1] < tab[j]) {
                number = tab[j+1];
                tab[j+1] = tab[j];
                tab[j] = number;
            }
        }
    }

    printf("\n\nLe tableau trié : \n");
    for (int k = 0; k < len; k++) {
        printf("%d;", tab[k]);
    }
}