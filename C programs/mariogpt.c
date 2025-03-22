#include <stdio.h>

void printPyramid(int height) {
    // Loop through each row
    for (int i = 1; i <= height; i++) {
        // Print spaces for left pyramid
        for (int j = 0; j < height - i; j++) {
            printf(" ");
        }
        // Print hashes for left pyramid
        for (int k = 0; k < i; k++) {
            printf("#");
        }
        
        // Print gap between two sets of blocks
        printf("  ");

        // Print hashes for right pyramid
        for (int k = 0; k < i; k++) {
            printf("#");
        }
        
        // Move to next line after printing a row
        printf("\n");
    }
}

int main() {
    int height;

    // Get the height of the pyramid from the user
    printf("Enter the height of the Mario pyramid (between 1 and 8): ");
    scanf("%d", &height);

    // Check for valid input
    if (height < 1 || height > 8) {
        printf("Invalid input. Please enter a number between 1 and 8.\n");
        return 1;
    }

    // Print the pyramid
    printPyramid(height);

    return 0;
}
