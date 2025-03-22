#include <stdio.h>

// Function to print the pyramid pattern
void printPyramid(int n) {
    int i, j, k;
    
    // Outer loop for rows
    for (i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (k = 1; k <= n - i; k++) {
            printf(" ");
        }
        // Print numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Move to the next line after each row
        printf("\n");
    }
}

int main() {
    int n;
    
    // Taking input from the user
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &n);

    // Call the function to print the pyramid
    printPyramid(n);

    return 0;
}
