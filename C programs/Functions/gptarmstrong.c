#include <stdio.h>

void ArmstrongNumLot(int x);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Armstrong numbers between 0 and %d are:", n);
    ArmstrongNumLot(n);
    return 0;
}

void ArmstrongNumLot(int x) {
    // Precompute powers of digits (0–9) for lengths 1 to 10
    int powers[10][10]; // powers[digit][length]
    for (int digit = 0; digit <= 9; digit++) {
        powers[digit][0] = 1; // Any number to the power of 0 is 1
        for (int len = 1; len < 10; len++) {
            powers[digit][len] = powers[digit][len - 1] * digit;
        }
    }

    for (int j = 0; j <= x; j++) {
        int temp = j, sum = 0, len = 0;

        // Calculate the number of digits
        while (temp != 0) {
            len++;
            temp /= 10;
        }

        temp = j;

        // Calculate the Armstrong number sum using precomputed powers
        while (temp != 0) {
            int r = temp % 10;
            sum += powers[r][len];
            temp /= 10;

            // Early termination: if sum exceeds the number, stop further calculation
            if (sum > j) {
                break;
            }
        }

        // If the sum equals the original number, it's an Armstrong number
        if (sum == j) {
            printf(" %d", j);
        }
    }
    printf("\n");
}
