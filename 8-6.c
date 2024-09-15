#include <stdio.h>
#include <stdlib.h>


int **allocate_matrix(int rows, int cols) {
    int **matrix = (int **)malloc(rows * sizeof(int *));  // Allocate memory for rows (array of pointers)
    if (matrix == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));  // Allocate memory for each column
        if (matrix[i] == NULL) {
            printf("Memory allocation failed for row %d!\n", i);
            // Free previously allocated memory if a failure occurs
            for (int j = 0; j < i; j++) {
                free(matrix[j]);
            }
            free(matrix);
            return NULL;
        }
    }

    return matrix;
}

// Function to free the memory allocated for the 2D matrix
void free_matrix(int **matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);  // Free each row
    }
    free(matrix);  // Free the array of pointers
}

int main() {
    int rows = 3, cols = 3;

    // Allocate memory for the 2D matrix
    int **matrix = allocate_matrix(rows, cols);
    if (matrix == NULL) {
        return 1;  // Exit if memory allocation failed
    }

    // Assign values to the matrix
    printf("Assigning values to the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = i + j;  // Example assignment
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Free the allocated memory
    free_matrix(matrix, rows);

    return 0;
}

