#include <stdio.h>

int i, j, p;
int N = 20;
int A[] = { 32, 72, 48, 64, 16, 24, 86, 36, 56, 94, 12, 42, 54, 76, 86, 28, 96, 48, 8, 66 };

void InsertionSort(int *A, int N);

int main(void) {
    printf("*******Insertion Sorting*******\n");

    InsertionSort(A, N);

    printf("Sorted Array:\n");
    for (j = 0; j < N; j++) {
        printf("%d\n", A[j]);
    }

    return 0; 
}

void InsertionSort(int *A, int N) { 
    int tmp; 
    
    for (p = 1; p < N; p++) {
        tmp = A[p];
        j = p - 1;

        while ((j >= 0) && (tmp < A[j])) {
            A[j + 1] = A[j];
            j--;
        }

        A[j + 1] = tmp;
    } 
}

