/* The aim is to calculate the transpose of a matrix, 1 uses 2 matices and the other only uses the main one */

int* createMatrix3x3() {

    int rows = 3;
    int columns = 3;

    int* matrix = malloc(rows * columns * sizeof(int));
    int w = 0;

    for (int i =0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix[i * columns + j] = w;
            w++;
        }
    }

    return matrix;
}

/* This function uses another matrix to store the output matrix*/
int* transposeMatrix1(int matrix, int d1, int d2) {
    int* matrixBis;
    
    int rows = 3;
    int columns = 3;

    int* matrix = malloc(rows * columns * sizeof(int));

    for (int i =0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix[i * columns + j] = ;
            ;
        }
    }
}

