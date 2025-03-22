#include <stdio.h>

int main() {
    int a[25] = {1,2,4,3,5,6,5,7,4,2,4,2,4,2,1,3,4,2,4,5,5,6,1,1,2};
    int b[25];  // To store unique elements
    int i, j, k = 0;  // k will track the size of b[]
    int isUnique;

    // Process each element of a[]
    for(i = 0; i < 25; i++) {
        isUnique = 1;  // Assume current element is unique
        for(j = 0; j < k; j++) {
            if(a[i] == b[j]) {  // If a[i] is already in b[]
                isUnique = 0;   // Mark it as not unique
                break;          // No need to check further
            }
        }
        if(isUnique) {  // If element is unique, add to b[]
            b[k] = a[i];
            k++;  // Increment the unique elements count
        }
    }

    // Print the unique elements stored in b[]
    for(i = 0; i < k; i++) {
        printf("%d\n", b[i]);
    }

    return 0;
}
