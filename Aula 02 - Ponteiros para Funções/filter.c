#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// atualizar: realocar toda vez que adicionar na funcao

void filter(bool(*f)(int x), int n, int i, int newsize, int *array, int *array_f) {
    if(i < n) {
        if(f(*(array+i)) == true)  {
            array_f[newsize] = array[i];
            newsize++; 
        }
        i++; 
        filter(f, n, i, newsize, array, array_f);
    } else {
        for(i = 0; i < newsize; i++) 
            printf("%d ", *(array_f+i));
    }
}

bool even(int x) {
    if(x % 2 == 0) 
        return 1;
    return 0; 
}

bool odd(int x) {
    if(x % 2 != 0)
        return 1;
    return 0; 
}

int main() {
    int n, i, *array, *array_f;
    printf("Digite o tamanho do array: \n");
    scanf("%d", &n); 
    array = (int*)malloc(n*sizeof(int));
    array_f = (int*)malloc(n*sizeof(int));

    for(i = 0; i < n; i++)
        scanf("%d", (array+i));

    printf("---------PAR-------------\n");
    filter(even, n, 0, 0, array, array_f); 

    printf("\n---------IMPAR----------\n");
    filter(odd, n, 0, 0, array, array_f); 

    free(array); 
    free(array_f);
    return 0;
}
