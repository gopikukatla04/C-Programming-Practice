/* Selection Sort in C
   1.Finding the smallest number and putting it in the right place one by one.
   2.Assume the current position holds the smallest number for now as i 
   3.Look through the rest of the array to find if there's any smaller number
   4.Found a smaller number, remember its position with j now j will be minIndex
   5.Take array size and elements from the user
   6.Sort the array using selection sort
   7.Print the sorted array after sorting is complete */

#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;  // 4,5 
                          
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;  // 6
            }
        }
        // If the smallest number isn't already at the current position, swap them
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    selectionSort(arr, n);  // 
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
