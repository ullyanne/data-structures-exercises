#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  
void swap(long int* a, long int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
  
void bubbleSort(long int a[], long int n)
{
    for (long int i = 0; i < n - 1; i++) {
        for (long int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}
  
void insertionSort(long int arr[], long int n)
{
    long int i, key, j;
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

void merge(long int arr[], int l, int m, int r)
{
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
        }
        else {
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
  
void mergeSort(long int arr[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
  
        merge(arr, l, m, r);
    }
}

int main()
{
    long int n = 10000;
    int it = 0;

    double tim1[10], tim2[10], tim3[10];
  
    printf("A_size, Bubble, Insertion, Merge\n");
  
    while (it++ < 10) {
        long int a[n], b[n], c[n];
  
        for (int i = 0; i < n; i++) {
            long int no = rand() % n + 1;
            a[i] = no;
            b[i] = no;
            c[i] = no;
        }
  
        // using clock_t to store time
        clock_t start, end;
  
        // Bubble sort
        start = clock();
        bubbleSort(a, n);
        end = clock();
  
        tim1[it] = ((double)(end - start));
  
        // Insertion sort
        start = clock();
        insertionSort(b, n);
        end = clock();
  
        tim2[it] = ((double)(end - start));

        // Merge sort
        start = clock();
        mergeSort(c, 0, n);
        end = clock();
  
        tim3[it] = ((double)(end - start));
  
        // type conversion to long int
        // for plotting graph with integer values
        printf("%li, %li, %li, %li\n",
               n,
               (long int)tim1[it],
               (long int)tim2[it],
               (long int)tim3[it]);
  
        // increases the size of array by 10000
        n += 10000;
    }
  
    return 0;
}