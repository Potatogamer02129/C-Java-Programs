#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *name = (char *)malloc(50 * sizeof(char));  // Dynamically allocate memory for the name
    if (name == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // Exit if memory allocation fails
    }

    printf("Enter your name: ");
    scanf("%49s", name);  // Input limited to 49 characters

    printf("Hello, %s! Welcome to the program.\n", name);

    free(name);  // Free the allocated memory after use
    return 0;
}
