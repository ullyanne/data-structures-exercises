#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void filter(bool(*f)(int x), int n, int i, int *array) {
    if(i < n) {
        if(f(*(array+i)) == true)  
            printf("%d ", *(array+i));
        i++; 
        filter(f, n, i, array);
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
    int n, *array;
    printf("Digite o tamanho do array: \n");
    scanf("%d", &n); 
    array = (int*)malloc(n*sizeof(int));

    for(int i = 0; i < n; i++)
        scanf("%d", (array+i));

    printf("---------PAR-------------\n");
    filter(even, n, 0, array);

    printf("\n---------IMPAR----------\n");
    filter(odd, n, 0, array);

    free(array); 
    return 0;
}
