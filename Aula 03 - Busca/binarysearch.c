#include <stdio.h>

int binarySearch(int *v, int size, int element) {
    int begin = 0;
    int end = size - 1;
    int middle;
    int steps = 0;

    while (begin <= end) {
        middle = (begin + end) / 2;
        if (v[middle] < element) {
            begin = middle + 1;
        } else if (v[middle] > element) {
            end = middle - 1;
        } else {
            printf ("Número total de passos usando busca binária: %d\n", steps);
            return middle;
        }
        steps++;
    }
    return -1;
}

int linearSearch(int* v, int size, int element) {
    int steps = 0;

    for (int i = 0; i < size; i++) {
        if (v[i] == element) {
            printf ("Número total de passos usando busca linear: %d\n", steps);
            return i;
        }
        steps++;
    }
}

int main(){
    int v[] = {1, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59};
    int element;

    printf ("Qual elemento você deseja buscar?\n");
    scanf ("%d", &element);

    linearSearch (v, 17, element);
    binarySearch (v, 17, element);

    return 0;
}

