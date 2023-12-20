#include <stdio.h>
#include <stdlib.h>

// Structure to represent a sparse matrix element
typedef struct Element {
    int row;
    int col;
    int value;
}Element;

// Structure to represent a sparse matrix
typedef struct SparseMatrix {
    int m; // Number of rows
    int n; // Number of columns
    int numElements;
    Element *elements;
}sparse;

// Function prototypes
void init(sparse *,int m, int n);
void append(sparse *matrix, int row, int col, int value);
sparse sum(sparse matrix1, sparse matrix2);
sparse difference(sparse matrix1, sparse matrix2);
void display(sparse matrix);

int main() {
    // Initialize sparse matrices
    sparse matrix1;
    sparse matrix2;

	init(&matrix1,3,3);
	init(&matrix2,3,3);
    // Populate matrices with elements
    append(&matrix1, 0, 0, 1);
    append(&matrix1, 1, 1, 2);
    append(&matrix1, 2, 2, 3);

    append(&matrix2, 0, 0, 4);
    append(&matrix2, 1, 1, 5);

    // Display original matrices
    printf("Matrix 1:\n");
    display(matrix1);
    printf("\nMatrix 2:\n");
    display(matrix2);

    // Perform addition and subtraction
    sparse resultSum = sum(matrix1, matrix2);
    sparse resultDifference = difference(matrix1, matrix2);

    // Display results
    printf("\nAddition Result:\n");
    display(resultSum);

    printf("\nSubtraction Result:\n");
    display(resultDifference);

    // Free memory
    free(matrix1.elements);
    free(matrix2.elements);
    free(resultSum.elements);
    free(resultDifference.elements);

    return 0;
}

void init(sparse *s,int m, int n) {
    s->m = m;
    s->n = n;
    s->numElements = 0;
    s->elements = NULL;
}

void append(sparse *matrix, int row, int col, int value) {
    matrix->numElements++;
    matrix->elements = (Element*)realloc(matrix->elements, matrix->numElements * sizeof(Element));

    matrix->elements[matrix->numElements - 1].row = row;
    matrix->elements[matrix->numElements - 1].col = col;
    matrix->elements[matrix->numElements - 1].value = value;
}

sparse sum(sparse matrix1, sparse matrix2) {
    sparse result; 
    init(&result, matrix1.m, matrix1.n);

    // Add elements from matrix1
    for (int i = 0; i < matrix1.numElements; ++i) {
        append(&result, matrix1.elements[i].row, matrix1.elements[i].col, matrix1.elements[i].value);
    }

    // Add or update elements from matrix2
    for (int i = 0; i < matrix2.numElements; ++i) {
        int row = matrix2.elements[i].row;
        int col = matrix2.elements[i].col;
        int value = matrix2.elements[i].value;

        int index = -1; // To check if the element already exists in the result matrix

        // Search for the same position in the result matrix
        for (int j = 0; j < result.numElements; ++j) {
            if (result.elements[j].row == row && result.elements[j].col == col) {
                index = j;
                break;
            }
        }

        if (index != -1) {
            // Element exists, update the value
            result.elements[index].value += value;
        } else {
            // Element does not exist, append it to the result matrix
            append(&result, row, col, value);
        }
    }

    return result;
}

sparse difference(sparse matrix1, sparse matrix2) {
    sparse result;
     init(&result,matrix1.m, matrix1.n);

    // Add elements from matrix1
    for (int i = 0; i < matrix1.numElements; ++i) {
        append(&result, matrix1.elements[i].row, matrix1.elements[i].col, matrix1.elements[i].value);
    }

    // Subtract or update elements from matrix2
    for (int i = 0; i < matrix2.numElements; ++i) {
        int row = matrix2.elements[i].row;
        int col = matrix2.elements[i].col;
        int value = matrix2.elements[i].value;

        int index = -1; // To check if the element already exists in the result matrix

        // Search for the same position in the result matrix
        for (int j = 0; j < result.numElements; ++j) {
            if (result.elements[j].row == row && result.elements[j].col == col) {
                index = j;
                break;
            }
        }

        if (index != -1) {
            // Element exists, update the value (subtract in this case)
            result.elements[index].value -= value;
        } else {
            // Element does not exist, append its negation to the result matrix
            append(&result, row, col, -value);
        }
    }

    return result;
}

void display(sparse matrix) {
    printf("Rows: %d, Cols: %d\n", matrix.m, matrix.n);
    printf("Non-zero Elements:\n");
    for (int i = 0; i < matrix.numElements; ++i) {
        printf("(%d, %d, %d)\n", matrix.elements[i].row, matrix.elements[i].col, matrix.elements[i].value);
    }
}



