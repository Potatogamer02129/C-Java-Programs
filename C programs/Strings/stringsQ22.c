#include <stdio.h>

int main() {
    char DNA[100];
    int i, length = 0;
    char codon[4];
    printf("Enter the DNA string: ");
    scanf("%s", DNA);
    while (DNA[length] != '\0') {
        length++;
    }

    printf("Protein sequence: ");
    for (i = 0; i + 2 < length; i += 3) {
        codon[0] = DNA[i];
        codon[1] = DNA[i + 1];
        codon[2] = DNA[i + 2];
        codon[3] = '\0';
        if (codon[0] == 'A' && codon[1] == 'T' && codon[2] == 'G') {
            printf("M"); // Start codon (Methionine)
        } else if (codon[0] == 'T' && codon[1] == 'T' && (codon[2] == 'T' || codon[2] == 'C')) {
            printf("F"); // Phenylalanine
        } else if ((codon[0] == 'T' && codon[1] == 'T' && (codon[2] == 'A' || codon[2] == 'G')) ||
                   (codon[0] == 'C' && codon[1] == 'T')) {
            printf("L"); // Leucine
        } else if (codon[0] == 'A' && codon[1] == 'T' && (codon[2] == 'T' || codon[2] == 'C' || codon[2] == 'A')) {
            printf("I"); // Isoleucine
        } else if (codon[0] == 'G' && codon[1] == 'T') {
            printf("V"); // Valine
        } else if ((codon[0] == 'T' && codon[1] == 'A' && (codon[2] == 'A' || codon[2] == 'G')) ||
                   (codon[0] == 'T' && codon[1] == 'G' && codon[2] == 'A')) {
            break;
        } else {
            printf("?");
        }
    }
    printf("\n");

    return 0;
}
