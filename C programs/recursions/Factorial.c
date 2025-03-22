#include <stdio.h>

int itsFactorial(int x);

void main() {
    int n;
    printf("Enter a number to print its factorial: ");
    scanf("%d", &n);
    printf("The factorial of %d is %d\n", n, itsFactorial(n));
}

int itsFactorial(int x) {
    if (x > 1) {
        return x * itsFactorial(x - 1);
    } else {
        return 1; // Base case: factorial of 1 or 0 is 1
    }
}
