/* 
1 - O ARRAY É UM PONTEIRO?
2 - Faça um programa no qual você cria e imprime um array tanto da forma usual quanto por aritmética de ponteiros. 
*/ 

#include <stdio.h>

int main() {

    int array[3] = {1, 2, 3};

    for (int i = 0; i < 3; i++)
        printf("%d ", array[i]);

    printf("\n");

    for (int i = 0; i < 3; i++)
        printf("%d ", *(array + i));

    printf("\n");

    return 0;
}
