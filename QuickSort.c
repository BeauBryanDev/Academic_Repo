#include <stdio.h>

void quickSort(int arr[], int start, int end);
int partition(int arr[], int start, int end);
void swap(int* a, int* b);

int main() {
    int A[12] = { 45, 67, 13, 51, 89, 71, 33, 49, 37, 63, 93, 27 };
    int N = 12;

    printf("Original Array: \n");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Perform QuickSort on the array
    quickSort(A, 0, N - 1);

    printf("Sorted Array: \n");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}

// Function to perform QuickSort
void quickSort(int arr[], int start, int end ) {
    if (start < end ) {
        // Find the partition index
        int piv = partition(arr, start, end);

        // Recursively sort elements before and after partition
        quickSort(arr, start, piv - 1);
        quickSort(arr, piv + 1, end);
    }
}

// Function to partition the array
int partition(int arr[], int start, int end ) {
    int pivot = arr[end]; // Pivot element
    int i = (start - 1); // Index of smaller element

    for (int j = start; j <= end - 1; j++) {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            i++; // Increment index of smaller element
            swap(&arr[i], &arr[j]);
          
        }
    }
    swap(&arr[i + 1], &arr[end] );
    
    return (i + 1);
}

// Utility function to swap two elements

void swap(int* a, int* b) {

    int tmp;
    
    tmp  = *a;
    *a   = *b;
    *b   = tmp;
    
}


