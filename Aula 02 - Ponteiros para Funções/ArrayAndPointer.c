/* O ARRAY É UM PONTEIRO?

Faça um programa no qual você cria e imprime um array tanto da forma usual quanto por aritmética de ponteiros. Em seguida, faça uma função 
do tipo void que recebe o array criado e um inteiro n que multiplica cada elemento do array. Imprima a função novamente. 

*/ 

#include <stdio.h>

void multiply(int array[]) {
    for (int i = 0; i < 3; i++) 
        array[i] = array[i] * 2; 
}

int main() {
    
    int array[3] = {1, 2, 3};
    
    for(int i = 0; i < 3; i++) 
        printf("%d ", array[i]);
        
    printf("\n");
    
    for(int i = 0; i < 3; i++) 
        printf("%d ", *(array + i));
        
    printf("\n");
    
    // chame a função para mudar os valores do array
    multiply(array);
    
    for(int i = 0; i < 3; i++)
        printf("%d ", *(array + i));

    // os elementos foram alterados na main

/* R: Não. Internamente, funcionam como ponteiros (quando você faz array[i] está fazendo *(array + i), no entanto, é importante lembrar 
que o array é uma estrutura de dados homogênea e um ponteiro é uma variável que armazena o endereço de uma variável. Embora muitas vezes
possam agir de forma relacionada, formalmente não são a mesma coisa. */

return 0;
}