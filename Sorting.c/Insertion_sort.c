/* Insertion Sort in C
1.Start from the second element, treating the first element as already sorted.
2.Take the current element (temp) and compare it with elements before it.
3.Shift all elements greater than temp to one position ahead.
4.Insert temp at the correct position in the sorted part.
5.Take array size and elements from the user.
6.Sort the array using insertion sort.
7.Print the sorted array after sorting is complete.
*/

#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, j, temp;
    for (i = 1; i < n; i++) {
    temp = arr[i];
    j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
    }
    arr[j + 1] = temp;
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

    insertionSort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}