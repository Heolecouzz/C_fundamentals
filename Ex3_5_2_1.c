/* In this exercice the aim is to give an array of intengers, its dimension and a parameter
The aim is to delete all the occurences of this parameter except the last one and then 
reformat the array, so that there are no holes in it. It gives back the real length of the array*/

#include <stdio.h>
#include <stdlib.h>

void explanations() {
    printf("You lack paramaters. For N parameters, the N-2 are the number in your array. The N-1 parameter is the dimension of the array and then this is the number which we look to delete occurences \n");
    printf("Here's an example : \n\n");
    printf("./a.out 1 2 3 4 5 3 5 4 3 5 10 3");

}

int* creationArray(int array[], int dim) {

    int* newArray = malloc(dim * sizeof(int));

    for (int i = 0; i < dim; i++) {
        newArray[i] = array[i];
    }

    return newArray;
}

int* numberIndexes(int array[], int dim, int number,int* indexesArrayLength) {

    int* indexesArray = malloc(dim * sizeof(int));
    int w = 0;

    for (int i = 0; i < dim; i++) {
        if (array[i] == number) {
            indexesArray[w] = i;
            *indexesArrayLength++;
            w++;
        }
    }
    return indexesArray; 
}

int* reformatArray(int array[], int dim, int indexesArray, int dimIndexes) {

    int tab[dim];

    for (int i = 0; i < dim; i++) {
        for (int w = 0; w < indexesArray-1; w++) {
            if (i != w) {
                tab[i] = array[i];
            }
        }

    return tab;
    }
}

void printArray(int array[], int dim) {

    for (int i = 0; i < dim; i++) {
        printf("%d, ", array[i]);
    }
}


int main(int argc, int argv[]) {

    if (argc < 3) {
        explanations();
        return 1;
    }

    int* array, indexesArray;
    int dim = argv[-2];
    int number = argv[-1];
    int* indexesArrayLength = 0;

    array = creationArray(argv, dim);
    printArray(array, dim);
    indexesArray = numberIndexes(array, dim, number, &indexesArrayLength);
    array = reformatArray(array, dim, indexesArray, indexesArrayLength);
    printArray(array, dim - *indexesArrayLength + 1);

    free(array);
    free(indexesArray);

    return 0;
}