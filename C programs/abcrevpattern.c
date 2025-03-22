#include <stdio.h>
#include <ctype.h> // For handling uppercase/lowercase conversions

int main() {
    // Start with the letter 'a'
    char start = 'a';
    int rows = 3; // Number of rows
    
    for (int i = 0; i < rows; i++) {
        // Determine whether to print in ascending or descending order
        if (i % 2 == 0) {
            // Ascending order
            for (int j = 0; j < 4; j++) {
                // Print the letter and move to the next
                printf("%c", start);
                start++;
            }
        } else {
            // Descending order, start at the current letter and go backward
            char temp = start + 3;  // Start from 3 letters ahead of 'start'
            for (int j = 0; j < 4; j++) {
                printf("%c", temp);
                temp--;
            }
            // Move 'start' forward by 4 for the next line
            start += 4;
        }
        // Move to the next line
        printf("\n");
    }
    
    return 0;
}

