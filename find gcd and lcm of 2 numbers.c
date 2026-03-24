#include <stdio.h>

// Function to calculate the GCD using the Euclidean algorithm
int calculate_gcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, gcd, lcm;

    // Take input from the user
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Ensure the numbers are positive for the standard algorithm
    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers.\n");
        return 1; // Exit with an error code
    }

    // Calculate GCD
    gcd = calculate_gcd(num1, num2);

    // Calculate LCM using the formula: LCM = (num1 * num2) / GCD
    // Use long long for product to avoid potential overflow before division
    // The result will fit in an int if it's within range for the specific inputs
    lcm = (long long)num1 * num2 / gcd;

    // Print the results
    printf("GCD of %d and %d is %d\n", num1, num2, gcd);
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}
