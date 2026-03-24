#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;

    // Prompt user for the number of elements and read the input
    printf("Enter the number of elements: ");
    scanf("%d", &n); //

    // Declare an array of size n (Variable Length Array - C99 standard)
    int arr[n];

    // Use a loop to input n numbers into the array
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]); //
    }

    // Calculate the sum of the elements using another loop
    for (i = 0; i < n; i++) {
        sum += arr[i]; //
    }

    // Calculate the average (type-cast sum to float to avoid integer division errors)
    average = sum / n; //

    // Print the calculated sum and average
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
