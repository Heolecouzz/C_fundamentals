/* The aim is to give the max and min of an array given by the user */

#include <stdio.h>
#include <stdlib.h> // Ajout obligatoire pour utiliser malloc() et free()

int* createArray(int dim) {
    // Allocation dynamique : on demande au système de réserver de la mémoire
    // qui survivra à la fin de cette fonction.
    int* tab = malloc(dim * sizeof(int));
    
    // Sécurité : vérifier que l'allocation a fonctionné
    if (tab == NULL) {
        printf("Erreur d'allocation mémoire !\n");
        exit(1);
    }

    int number;
    for (int i = 0; i < dim; i++) {
        printf("What's your number %d ? > ", i);
        scanf("%d", &number);
        tab[i] = number;
    }
    return tab;
}

// On ajoute 'dim' en paramètre pour savoir quand arrêter la boucle
int Min(int tab[], int dim) {
    int min = tab[0];
    for (int i = 1; i < dim; i++) { // Remplacement de sizeof(tab) par dim
        if (tab[i] < min) {
            min = tab[i];
        }
    }
    return min;
}

// Pareil ici, on passe la dimension
int Max(int tab[], int dim) {
    int max = tab[0];
    for (int i = 1; i < dim; i++) { // Remplacement de sizeof(tab) par dim
        if (tab[i] > max) {
            max = tab[i];
        }
    }
    return max;
}

// La norme C exige que main retourne un int
int main() {
    int* myTab;
    int dim, min, max;
    
    printf("What is the dimension of the array ? > ");
    scanf("%d", &dim);
    
    myTab = createArray(dim);
    
    // On n'oublie pas de passer la dimension aux fonctions !
    min = Min(myTab, dim);
    max = Max(myTab, dim);
    
    // Ajout de \n pour la clarté dans le terminal
    printf("The minimum of this array is %d\n", min);
    printf("The maximum of this array is %d\n", max); // Correction du mot 'maximum'

    // RÈGLE D'OR : Tout ce qui a été alloué avec malloc() doit être libéré avec free()
    free(myTab);

    return 0; // Signifie que le programme s'est terminé sans erreur
}