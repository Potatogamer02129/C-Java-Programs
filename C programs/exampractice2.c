#include <stdio.h>

void main() {
    int num, remainder;
    int reversedBinary = 0, position = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Binary representation (reversed): ");
    
    // Convert the decimal number to binary and reverse it at the same time
    while (num > 0) {
        remainder = num % 2;
        reversedBinary = reversedBinary * 10 + remainder;
        num /= 2;
    }
    
    // Print the reversed binary number
    printf("%d\n", reversedBinary);
}
