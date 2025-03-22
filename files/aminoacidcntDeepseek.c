#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define AMINO_ACIDS 26

int main() {
    FILE *file = fopen("sequence.fasta", "r");
    if (!file) {
        printf("Error opening file.\n");
        return 1;
    }

    int counts[AMINO_ACIDS] = {0};
    char line[1024];
    int inSequence = 0;

    while (fgets(line, sizeof(line), file)) {
        if (line[0] == '>') {
            inSequence = 1;
            continue;
        }

        if (inSequence) {
            for (int i = 0; line[i] != '\0'; i++) {
                if (line[i] >= 'A' && line[i] <= 'Z') {
                    counts[line[i] - 'A']++;
                }
            }
        }
    }

    fclose(file);

    for (int i = 0; i < AMINO_ACIDS; i++) {
        if (counts[i] > 0) {
            printf("%c: %d\n", 'A' + i, counts[i]);
        }
    }

    return 0;
}