#include <stdio.h>

int main() {
    FILE *file;
    int num1, num2;

    // Open file in read mode
    file = fopen("input.txt", "r");

    // Check if file opened successfully
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read inputs from the file
    fscanf(file, "%d %d", &num1, &num2);

    // Close the file
    fclose(file);

    // Display the read inputs
    printf("Read numbers from file: %d, %d\n", num1, num2);

    return 0;
}