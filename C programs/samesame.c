
#include <stdio.h>

int void() {
    int arr1[10], arr2[10];
    int i, j;

    for (i = 0; i < 10; i++) {
        printf("Enter element %d for first array: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < 10; i++) {
        printf("Enter element %d for second array: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    printf("Common elements are: ");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
}
