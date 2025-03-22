#include <stdio.h>

int main() {
    int rows, i, j;

    // Taking user input for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            // Example conditions based on i and j, you can modify them as needed
            if ((i == 4 && j >= 3) || (i == 5 && j >= 2)) {
                continue;  // Skip certain numbers in specific rows
            }
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
