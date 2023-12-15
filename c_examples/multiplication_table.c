#include <stdio.h>

int main() {
    int i, j;

    // This is to print the column headers
    printf("  x");
    for (i = 1; i <= 10; i++) {
        printf("%4d", i);
    }
    printf("\n");

    // This is to print the table
    for (i = 1; i <= 10; i++) {
        printf("%3d", i); // This will be the row header

        // Print the multiplication table for each number up to 10
        for (j = 1; j <= 10; j++) {
            printf("%4d", i * j);
        }

        printf("\n");
    }

    return 0;
}