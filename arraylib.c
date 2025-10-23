
#include <stdio.h>
#include "arraylib.h"

int findMaxIndex(int arr[], int size) {
    if (size <= 0) return -1;
    int idx = 0;
    for (int i = 1; i < size; ++i)
        if (arr[i] > arr[idx]) idx = i;
    return idx;
}

int findMinIndex(int arr[], int size) {
    if (size <= 0) return -1;
    int idx = 0;
    for (int i = 1; i < size; ++i)
        if (arr[i] < arr[idx]) idx = i;
    return idx;
}

float findAverage(int arr[], int size) {
    if (size <= 0) return 0.0f;
    long sum = 0;
    for (int i = 0; i < size; ++i) sum += arr[i];
    return (float)sum / (float)size;
}

void displayArray(int arr[], int size) {
    printf("[");
    for (int i = 0; i < size; ++i) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");
}

void reverseArray(int arr[], int size) {
    for (int i = 0, j = size - 1; i < j; ++i, --j) {
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
}

/* simple bubble sort ascending */
void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i)
        for (int j = 0; j < size - i - 1; ++j)
            if (arr[j] > arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
}

int linearSearch(int arr[], int size, int value) {
    for (int i = 0; i < size; ++i)
        if (arr[i] == value) return i;
    return -1;
}

