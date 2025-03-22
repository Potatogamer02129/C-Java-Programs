
#include <stdio.h>

int main() {
    int arr1[10], arr2[10];
    int i, j, found;

    for (i = 0; i < 10; i++) {
        printf("Enter element %d for first array: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < 10; i++) {
        printf("Enter element %d for second array: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    printf("Elements unique to first array: ");
    for (i = 0; i < 10; i++) {
        found = 0;
        for (j = 0; j < 10; j++) {
            if (arr1[i] == arr2[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%d ", arr1[i]);
        }
    }

    printf("\nElements unique to second array: ");
    for (i = 0; i < 10; i++) {
        found = 0;
        for (j = 0; j < 10; j++) {
            if (arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%d ", arr2[i]);
        }
    }

    return 0;
}
