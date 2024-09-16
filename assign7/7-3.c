#include <stdio.h>

#define ROWS 3
#define COLS 4


int sumRow(int matrix[ROWS][COLS], int row) {
    int sum = 0;
    if (row >= 0 && row < ROWS) {
        for (int i = 0; i < COLS; i++) {
            sum += matrix[row][i];
        }
    } else {
        printf("Invalid row index.\n");
    }
    return sum;
}


int sumColumn(int matrix[ROWS][COLS], int col) {
    int sum = 0;
    if (col >= 0 && col < COLS) {
        for (int i = 0; i < ROWS; i++) {
            sum += matrix[i][col];
        }
    } else {
        printf("Invalid column index.\n");
    }
    return sum;
}

int main() {
 
    int matrix[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int row = 1;  
    int col = 2;  

    
    int rowSum = sumRow(matrix, row);
    printf("Sum of elements in row %d: %d\n", row, rowSum);

    
	int colSum = sumColumn(matrix, col);
    printf("Sum of elements in column %d: %d\n", col, colSum);

    return 0;
}

