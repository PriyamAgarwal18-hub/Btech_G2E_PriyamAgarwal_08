#include <stdio.h>

int main() {
    int n, temp;
    // Prompt user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Declare the array of the specified size
    int arr[n];

    // Prompt user to enter the elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse the array using the in-place swap method
    // Loop only up to half of the array length
    for (int i = 0; i < n / 2; i++) {
        temp = arr[i]; // Store the first element in a temporary variable
        arr[i] = arr[n - i - 1]; // Replace the first element with the last element
        arr[n - i - 1] = temp; // Replace the last element with the temporary value
    }

    // Print the reversed array
    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
