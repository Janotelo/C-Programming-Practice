#include <stdio.h>

int main() {
    FILE *file;
    int num1, num2;

    while (1) {
        // Open file in read mode
        file = fopen("input.txt", "r");

        // Check if file opened successfully
        if (file == NULL) {
            printf("Error opening file.\n");
            return 1;
        }

        // Read inputs from the file
        while (fscanf(file, "%d %d", &num1, &num2) == 2) {
            // Display the read inputs
            printf("Read numbers from file: %d, %d\n", num1, num2);
        }

        // Close the file
        fclose(file);

        // Sleep for a while (optional)
        // This gives some time before the next iteration
        // You may need to include the appropriate header for your platform
        // e.g., #include <unistd.h> for Unix-like systems
        // or #include <windows.h> for Windows
        // sleep(1);
    }

    return 0;
}