
#include <stdio.h>

int void() {
    int arr[10];
    int i, largest, secondLargest, smallest, secondSmallest;

    for (i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    largest = secondLargest = arr[0];
    smallest = secondSmallest = arr[0];

    for (i = 1; i < 10; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }

        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    printf("Second largest number is %d\n", secondLargest);
    printf("Second smallest number is %d\n", secondSmallest);
}
