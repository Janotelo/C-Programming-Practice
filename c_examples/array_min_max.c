#include <stdio.h>

int main() {
    int arr[] = {5, 2, 9, 1, 7, 3, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("%d\n", size);

    int max = arr[0];  // Assume the first element is the maximum
    int min = arr[0];  // Assume the first element is the minimum

    // Iterate through the array to find max and min
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];  // Update max if the current element is greater
        } else if (arr[i] < min) {
            min = arr[i];  // Update min if the current element is smaller
        }
    }

    // Display the results
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}