#include <stdio.h>

#define MAX_SIZE 100

// Function to print the matrix
void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to rotate the matrix 90 degrees clockwise
void rotateMatrix90Degrees(int matrix[MAX_SIZE][MAX_SIZE], int n) {
    // Create a temporary matrix to hold the rotated result
    int temp[MAX_SIZE][MAX_SIZE];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp[j][n - 1 - i] = matrix[i][j];
        }
    }
    
    // Copy the rotated matrix back to the original matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = temp[i][j];
        }
    }
}

int main() {
    int n;
    int matrix[MAX_SIZE][MAX_SIZE];

    // Prompt user to enter the size of the matrix
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    // Ensure the size is within valid range
    if (n <= 0 || n > MAX_SIZE) {
        printf("Invalid size. The size should be between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    // Prompt user to enter the matrix elements
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Rotate the matrix 90 degrees clockwise
    rotateMatrix90Degrees(matrix, n);

    // Print the rotated matrix
    printf("Matrix after 90 degree rotation:\n");
    printMatrix(matrix, n);

    return 0;
}
