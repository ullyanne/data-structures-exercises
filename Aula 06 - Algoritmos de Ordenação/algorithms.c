#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(unsigned long int arr[], unsigned long int n) {
    unsigned long int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void merge(unsigned long int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(unsigned long int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int main() {
    unsigned long int n = 10000;
    int it = 0;

    double tim1[10], tim2[10];

    printf("A_size, Insertion, Merge\n");

    while (it++ < 41) {
        unsigned long int a[n], b[n];

        for (int i = 0; i < n; i++) {
            unsigned long int no = rand() % n + 1;
            a[i] = no;
            b[i] = no;
        }

        // using clock_t to store time
        clock_t start, end;

        // Insertion sort
        start = clock();
        insertionSort(a, n);
        end = clock();

        tim1[it] = ((double)(end - start));

        // Merge sort
        start = clock();
        mergeSort(b, 0, n);
        end = clock();

        tim2[it] = ((double)(end - start));

        // type conversion to unsigned long int
        // for plotting graph with integer values
        printf("%lu, %lu, %lu\n",
            n,
            (unsigned long int) tim1[it],
            (unsigned long int) tim2[it]);

        // increases the size of array by 10000
        n += 10000;
    }

    return 0;
}