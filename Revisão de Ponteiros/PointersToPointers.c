#include <stdio.h>

int main() {

    int n = 10;
    int *p1 = &n;
    int **p2 = &p1;
    int ***p3 = &p2;

    printf("Valor armazenado pela variável n: %d\nO endereco da variável que armazena o inteiro: %p", n, &n);
    printf("\n--------------------------------------\n");
    
    printf("O endereço apontado pelo ponteiro 1: %p\nConteúdo de n através do ponteiro 1: %d\nO endereco do ponteiro 1: %p", p1, *p1, &p1);
    printf("\n--------------------------------------\n");
    
    printf("O endereço apontado pelo ponteiro 2: %p\nConteúdo de n através do ponteiro 2: %d\nO endereço do ponteiro 2: %p", p2, **p2, &p2);
    printf("\n--------------------------------------\n");
    
    printf("O endereço apontado pelo ponteiro 3: %p\nConteúdo de n através do ponteiro 3: %d\nO endereço do ponteiro 3: %p", p3, ***p3, &p3);

    return 0;
}