#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *a = (int*) malloc(sizeof(int));

    *a = 10;

    printf("%d\n", *a);

    a = (int*) calloc(3, sizeof(int));
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;

    printf("%d %d %d\n", a[0], a[1], a[2]);

    return 0;
}

//1 - Onde, no código acima, está ocorrendo vazamento de memória?
//2 - Por que ele está ocorrendo?
//3 - Use a ferramenta valgrind para verificar suas respostas acima
//4 - Conserte o código
//5 - Rode o valgrind para verificar se os erros foram consertados