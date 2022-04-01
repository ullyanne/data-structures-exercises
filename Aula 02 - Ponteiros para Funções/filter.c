#include <stdio.h>
#include <stdlib.h>

void filter(int(*f)(int x), int n, int *array) {
    for(int i = 0; i < n; i++) {
        if(f(*(array+i)) != -1)  
            printf("%d ", *(array+i));
    }
}

int even(int x) {
    if(x % 2 == 0) 
        return x;
    else return -1; 
}

int odd(int x) {
    if(x % 2 != 0)
        return x;
    else return -1; 
}

int main() {
    int n, *array;
    printf("Digite o tamanho do array: \n");
    scanf("%d", &n); 
    array = (int*)malloc(n*sizeof(int));

    for(int i = 0; i < n; i++)
        scanf("%d", (array+i));

    printf("---------PAR-------------\n");
    filter(even, n, array);

    printf("\n---------IMPAR----------\n");
    filter(odd, n, array);

    free(array); 
    return 0;
}
