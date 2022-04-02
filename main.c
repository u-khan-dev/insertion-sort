//INSERTION-SORT(A)
//for j ← 1 to length(A) - 1
//do key ← A[j]
//i ← j – 1
//
//while i >= 0 and A[i] > key
//do A[i + 1] ← A[i]
//i ← i – 1
//
//A[i + 1] ← key

#include <stdio.h>

void insertionSort(int arr[], int n) {
    int key, i;

    for (int j = 1; j < n; j++) {
        key = arr[j];
        i = j - 1;

        while (i >= 0 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i = i - 1;
        }

        arr[i + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main(void) {
    int arr[] = { 12, 11, 13, 5, 6, 5, 6, 19, 21, 100, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    printArray(arr, n);
}