#include <stdio.h>

int main() {
    int i, j, n, is_prime;
    
    // Input a number
    printf("Input a number: ");
    scanf("%d", &n);
    
    // Iterate through numbers from 2 to n
    for(i = 2; i <= n; i++) {
        is_prime = 1; // Assume i is prime
        
        // Check if i is divisible by any number from 2 to sqrt(i)
        for(j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                is_prime = 0; // i is not prime
                break;
            }
        }
        
        // If i is prime, print it
        if(is_prime) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
