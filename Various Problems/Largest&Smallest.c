#include <stdio.h>

int main() {
    int n;

    // Prompt the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("The number of elements must be positive.\n");
        return 1;
    }

    int array[n];
    int i, largest, smallest;

    // Prompt the user to enter the elements
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Initialize largest and smallest with the first element
    largest = smallest = array[0];

    // Find the largest and smallest elements
    for (i = 1; i < n; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }

    // Display the results
    printf("The largest element is: %d\n", largest);
    printf("The smallest element is: %d\n", smallest);

    return 0;
    
}
