#include <stdio.h>

int main() {
    int i, j, k, n = 5, s = 1;
    
    for(i = 1; i <= n; i++, s++) {
        // Print leading spaces
        for(k = 1; k <= n - i; k++) {
            printf(" ");
        }
        // Print stars or spaces in between
        for(j = 1; j <= i; j++) {
            if(j > 1 && j < i && s > 1 && s < n) {
                // Print spaces between the first and last stars
                printf("  ");
            } else {
                // Print stars at the boundary
                printf(" *");
            }
        }
        printf("\n");
    }
    
    return 0;
}
