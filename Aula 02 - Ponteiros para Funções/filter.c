#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void filter(bool(*f)(int x), int n, int i, int newSize, int *array, int *newArray) {
    if(i < n) {
        if(f(*(array+i)) == true)  {
            newArray = realloc(newArray, (newSize+1)*sizeof(int));
            newArray[newSize] = array[i];
            newSize++; 
        }
        i++; 
        filter(f, n, i, newSize, array, newArray);
    } else {
        printf("Tamanho do array: %d\n", newSize);
        for(i = 0; i < newSize; i++) 
            printf("%d ", *(newArray+i));
    }
}

bool even(int x) {
    if(x % 2 == 0) 
        return 1;
    else return 0; 
}

bool odd(int x) {
    if(x % 2 != 0)
        return 1;
    else return 0; 
}

int main() {
    int n, i, *array, *newArray;
    printf("Digite o tamanho do array: \n");
    scanf("%d", &n); 
    array = malloc(n*sizeof(int));
    newArray = NULL; 

    for(i = 0; i < n; i++)
        scanf("%d", (array+i));

    printf("---------PAR-------------\n");
    filter(even, n, 0, 0, array, newArray); 

    printf("\n---------IMPAR----------\n");
    filter(odd, n, 0, 0, array, newArray); 

    free(array); 
    free(newArray);
    return 0;
}
