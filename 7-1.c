#include<stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void acceptArray(int arr[MAX_ROWS][MAX_COLS],int row,int cols);
void printArray(int arr[MAX_ROWS][MAX_COLS],int rows,int cols);

int main() {
int rows,cols;
int array[MAX_ROWS][MAX_COLS];

printf("enter number of rows %d",MAX_ROWS);
scanf("%d",&rows);

printf("enter number of cols %d",MAX_COLS);
scanf("%d",&cols);



acceptArray(array,rows,cols);

printArray(array,rows,cols);

return 0;
}


void acceptArray(int arr[MAX_ROWS][MAX_COLS],int rows,int cols) {
printf("enter the elements of the array:\n");
for(int i=0;i<rows;i++){
for(int j=0;j<cols;j++){
printf("enter [%d][%d]",i,j);
scanf("%d",&arr[i][j]);
}
}
}

void printArray(int arr[MAX_ROWS][MAX_COLS],int rows,int cols) {
for(int i=0;i<rows;i++){
for(int j=0;j<cols;j++){
printf("%d",arr[i][j]);
}
printf("\n");
}
}
