#include <stdio.h>

// Function to perform selection sort
void selectionsort(int array[], int n) {
    int i, j, min, temp;

    for (i = 0; i < n - 1; i++) {
        min = i;

        // Find index of the minimum element in the remaining array
        for (j = i + 1; j < n; j++) {
            if (array[j] < array[min]) {
                min = j;
            }
        }

        // Swap the found minimum element with the first element
        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
}

int main() {
    int n;

    printf("Welcome to selection sort world!\n\nEnter the number of Array: ");
    scanf("%d", &n);

    int array[n];
    int i;

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("The Unsorted Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    selectionsort(array, n);

    printf("\nThe Sorted Array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
