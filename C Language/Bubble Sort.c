#include <stdio.h>
#include <stdbool.h>

void bubblesort(int array[], int n) { // bubble sort function
    int i, j, temp;
    bool isSwap;

    for (i = 0; i < n - 1; i++) {
        isSwap = false; // reset before each pass

        for (j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                isSwap = true;
            }
        }

        // If no swapping occurred, array is already sorted
        if (!isSwap) {
            printf("\nThe given Array is already sorted!\n");
            return;
        }
    }
}

int main() {
    int n, i;
    printf("Hello there, Assalamu Alaikum!\nWelcome to Bubble Sort World!!\n"); // Welcome message

    printf("Enter the Array Size: "); // Declare the array size
    scanf("%d", &n);

    int array[n];
    printf("Enter The Array Elements:\n"); // display message
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1); // display number of array value
        scanf("%d", &array[i]); // input array value
    }

    printf("\nThe Original Array (%d elements) is: ", n);
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]); // display unsorted array
    }

    bubblesort(array, n); // bubble sort function call

    printf("\nThe Final Sorted Array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
