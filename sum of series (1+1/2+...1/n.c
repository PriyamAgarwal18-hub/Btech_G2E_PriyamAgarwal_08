#include <stdio.h>
int main() {
    int n, i;
    // Use 'float' or 'double' to store the sum of fractional values accurately
    float sum = 0.0;

    // Prompt the user to enter the value of n
    printf("Enter the value of n: ");
    // Read the input integer n from the user
    scanf("%d", &n);

    // Check if n is a positive number
    if (n <= 0) {
        printf("Please enter a positive integer for n.\n");
        return 1; // Exit with an error code
    }

    // Loop from 1 to n to calculate each term and add it to the sum
    for (i = 1; i <= n; i++) {
        // Type casting 1.0/i ensures floating-point division
        sum += (1.0 / i);
    }

    // Print the final sum of the series
    printf("The sum of the series 1 + 1/2 + ... + 1/%d is: %f\n", n, sum);

    return 0;
}
