/* The aim is to sum 2 matrixes */

#include <stdio.h>

void displayMatrix(int matrix[3][3], int rows, int columns) {

    printf("\n");

    for (int i = 0; i < rows; i++) {
        printf("(");
        for (int j = 0; j < columns; j++) {
            printf(" %d ", matrix[i][j]);
        }
        printf(")\n");
    }
}

int main() {

    int MatrixA[3][3];
    int MatrixB[3][3];
    int number;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("What's the number of indexes %d,%d of the first matrix > ", i+1, j+1);
            scanf("%d", &number);
            MatrixA[i][j] = number;
        }
    }

    printf("The matrix A :\n");
    displayMatrix(MatrixA, 3, 3);    

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("What's the number of indexes %d,%d of the second matrix > ", i+1, j+1);
            scanf("%d", &number);
            MatrixB[i][j] = number;
        }
    }

    printf("\n\nThe matrix B :\n");
    displayMatrix(MatrixB, 3, 3);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            MatrixA[i][j] += MatrixB[i][j];
        }
    }

    printf("\n\nThe matrix A + B :\n");
    displayMatrix(MatrixA, 3, 3);

    return 0;
}