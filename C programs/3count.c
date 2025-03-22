
#include <stdio.h>

int void() {
    int arr1[10], arr2[3];
    int i, j, count;

    for (i = 0; i < 10; i++) {
        printf("Enter element %d for first array: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < 3; i++) {
        printf("Enter element %d for second array: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < 3; i++) {
        count = 0;
        for (j = 0; j < 10; j++) {
            if (arr2[i] == arr1[j]) {
                count++;
            }
        }
        printf("Number %d occurs %d times in the first array\n", arr2[i], count);
    }
}
