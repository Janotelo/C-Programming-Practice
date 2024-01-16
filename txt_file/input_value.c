#include <stdio.h>

int main() {
    FILE *file;
    int num1, num2;

    // Open file in write mode
    file = fopen("input.txt", "w");

    // Check if file opened successfully
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Get two inputs
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Write inputs to the file
    fprintf(file, "%d %d", num1, num2);

    // Close the file
    fclose(file);

    printf("Inputs written to file successfully.\n");

    return 0;
}