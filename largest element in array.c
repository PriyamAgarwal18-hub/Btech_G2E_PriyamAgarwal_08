#include <stdio.h>

int main() {
    int size, i, largest;

    // Get the size of the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int array[size]; // Declaring array of user-defined size

    // Input array elements
    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Assume the first element is the largest
    largest = array[0];

    // Iterate through the rest of the array to find the largest element
    for (i = 1; i < size; i++) {
        if (array[i] > largest) {
            largest = array[i]; // Update 'largest' if the current element is greater
        }
    }

    // Print the largest element
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}

