// Bubble Sort in C – Random Input Version

/* 
This program creates a list of random numbers and sorts them using Bubble Sort.
It compares the adjacent numbers and swaps them if they are out of order.abort
This process continues until the entire list is sorted.
The program generates random numbers in the range of 0 to 99999.
The user can specify the number of elements to be sorted. 
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int swapped;
    /*
    i: tracks the current pass number
    j: index for comparing adjacent elements
    temp: temporary variable used during swapping
    */

    for (i = 0; i < n - 1; i++) {
        swapped = 0; // Track if any swaps occur in this pass

        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) {
            break;
        }
    }
}

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    srand(time(NULL)); 

    printf("Randomly generated array: ");
    for (i = 0; i < n; i++) {
        arr[i] = rand() % 100000; // Generate random number in range 0 to 99999
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, n);

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}