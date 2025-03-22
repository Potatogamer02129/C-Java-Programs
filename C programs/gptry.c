
#include <stdio.h>

void main() {
    char str[50], srch[10];
    int i, j, flg = 0;
    int len_str = 0, len_srch = 0;

    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter the string to be searched: ");
    scanf("%s", srch);

    // Calculate the length of the main string
    while (str[len_str] != '\0') {
        len_str++;
    }

    // Calculate the length of the search string
    while (srch[len_srch] != '\0') {
        len_srch++;
    }

    // Perform substring search
    for (i = 0; i <= len_str - len_srch; i++) {
        flg = 1; // Assume match is found
        for (j = 0; j < len_srch; j++) {
            if (str[i + j] != srch[j]) {
                flg = 0; // Mismatch found
                break;
            }
        }
        if (flg) {
            printf("Found!\n");
            return; // Exit the function
        }
    }

    if (!flg) {
        printf("Not found\n");
    }
}
