// Bubble Sort in C – User Input Version

/*"This program sorts numbers you enter using Bubble Sort.
It compares numbers one by one and swaps them if they are in the wrong order.
This keeps doing it until the list is sorted.
*/

#include <stdio.h>
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int swapped;
    /*
    i: tracks the current pass number,
    j: index for comparing adjacent elements,
    3
    temp: temporary holder used during swapping.
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

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}