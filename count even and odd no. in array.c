#include <stdio.h>

int main() {
    int n, i;
    int even_count = 0, odd_count = 0;

    // 1. Get the size of the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare an array of the specified size (Variable Length Array - VLA)
    int arr[n]; 

    // 2. Get the array elements from the user
    printf("Enter %d elements in the array: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Iterate through the array to count even and odd numbers
    for (i = 0; i < n; i++) {
        // Check if the current element is even using the modulo operator
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    // 4. Print the final counts
    printf("Number of even elements: %d\n", even_count);
    printf("Number of odd elements: %d\n", odd_count);

    return 0;
}
