//Heap Sorting Algorithm....
//******************//
#include<stdio.h>

int N = 10;
int A[] = {12, 56, 72, 48, 64, 36, 24, 86, 32, 76};

void desc_filter(int *A, int i, int N);
void heapSwap(int *A, int i, int j);

int main(void) {
    // Build the heap
    for (int i = N / 2 - 1; i >= 0; i--) {
        desc_filter(A, i, N);
    }

    // Heap sort
    for (int i = N - 1; i > 0; i--) {
        heapSwap(A, 0, i);
        desc_filter(A, 0, i);
    }

    // Print sorted array
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}

void desc_filter(int *A, int i, int n) {
    int tmp = A[i];
    int child = 2 * i + 1; // left child

    while (child < n) {
        // If right child exists and is greater
        if (child + 1 < n && A[child + 1] > A[child]) {
            child++;
        }

        if (A[child] > tmp) {
            A[i] = A[child];
            i = child;
            child = 2 * i + 1;
            
        } else {
        
            break;
        }
    }

    A[i] = tmp;
}
//Swapping function. 
void heapSwap(int *A, int i, int j) {

    int tmp = A[i];
    A[i] = A[j];
    A[j] = tmp;
    
}
