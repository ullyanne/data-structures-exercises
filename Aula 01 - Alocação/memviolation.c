#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, *a;

    a = (int * ) calloc ( 10, sizeof(int) );

    for (i = 0; i <= 10; i++) {
        a[i] = i;
    }

    return 0;
}

//1 - Onde, no código acima, está ocorrendo violação de memória?
//2 - Por que ela está ocorrendo?
//3 - Use a ferramenta valgrind para verificar suas respostas acima
//4 - Conserte o código
//5 - Rode o valgrind para verificar se os erros foram consertados