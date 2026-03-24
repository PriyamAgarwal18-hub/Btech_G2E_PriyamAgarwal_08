#include <stdio.h>

int main() {
    int n, i, j, min, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n]; // Declare array AFTER getting n

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Selection Sort Logic
    for(i = 0; i < n - 1; i++) {
        min = i; 
        for(j = i + 1; j < n; j++) { // Use j < n
            if(a[j] < a[min]) {
                min = j; // Update index of the smallest element
            }
        }
        // Swap the found minimum element with the first element
        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }

    printf("Sorted array: \n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
