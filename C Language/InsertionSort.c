#include <stdio.h>

void insertionsort(int array[], int n) {
    int i, j, key;

    for (i = 1; i < n; i++) {
        key = array[i];
        j = i - 1;

        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = key;
    }
}

int main() {
    int n;

    printf("Welcome to insertion sort world!\n\nEnter the number of Array: ");
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

    insertionsort(array, n);

    printf("\nThe Sorted Array in Insertion Sort: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
