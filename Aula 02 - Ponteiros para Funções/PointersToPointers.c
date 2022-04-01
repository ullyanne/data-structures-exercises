/* 

Faça um programa no qual você crie quatro variáveis: Um inteiro n com um valor aleatório, um ponteiro(*) que aponta para n, 
um ponteiro que aponta para o ponteiro(**) criado anteriormente, e um terceiro ponteiro que aponte para o último ponteiro criado (***).
Em seguida, mostre: 

- O valor armazenado pela variável (int)
- O endereço da variável que armazena o inteiro 

- O endereço armazenado pelo ponteiro (*)
- O conteúdo da variável int (através da referência do ponteiro 1)
- O próprio endereço do ponteiro 

- O endereço armazenado pelo ponteiro (**) 
- O conteúdo da variável int (através da referência do ponteiro 2)
- O próprio endereço do ponteiro 

- O endereço armazenado pelo ponteiro (***)
- O conteúdo da variável int (através da referência do ponteiro 3)
- O próprio endereço do ponteiro

Perceba como estão relacionados. 

*/ 

#include <stdio.h> 

int main() {

    int n = 10; 
    int *p1 = &n; 
    int **p2 = &p1; 
    int ***p3 = &p2; 

    printf("Valor armazenado pela variavel n: %d\nO endereco da variavel que armazena o inteiro: %p", n, &n); 
    printf("\n--------------------------------------\n");
    printf("O endereco apontado pelo ponteiro 1: %p\nConteudo de n atraves do ponteiro 1: %d\nO endereco do ponteiro 1: %p", p1, *p1, &p1); 
    printf("\n--------------------------------------\n");
    printf("O endereco apontado pelo ponteiro 2: %p\nConteudo de n atraves do ponteiro 2: %d\nO endereco do ponteiro 2: %p", p2, **p2, &p2); 
    printf("\n--------------------------------------\n");
    printf("O endereco apontado pelo ponteiro 3: %p\nConteudo de n atraves do ponteiro 3: %d\nO endereco do ponteiro 3: %p", p3, ***p3, &p3);   

    return 0;
}