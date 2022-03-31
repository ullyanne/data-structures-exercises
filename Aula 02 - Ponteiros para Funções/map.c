//É para ocultar toda a função map ou apenas parcialmente?

#include <stdio.h>
#include <stdlib.h>

void map(int(*function)(int), int* array, int* newarray, int len)
{
    if(len > 0)
    {
        *newarray = function(*array);
        printf("%d ", *newarray);

        return(map(function, array+1, newarray+1, len-1));
    }
}

int factorial(int num)
{
    if(num == 0)
        return 1;
    return(num * factorial(num-1));
}

int square(int num)
{
    return(num * num);
}

int main()
{
    int len, i;

    printf("Insira o tamanho do array.\n");
    scanf("%d", &len);

    int *array = (int*) malloc(len * sizeof(int));
    int *newarray = (int*) malloc(len * sizeof(int));
    
    printf("Digite os elementos do array.\n");

    for(i = 0; i < len; i++)
        scanf("%d", array+i);
    
    printf("FACTORIAL:\n");
    map(factorial, array, newarray, len);

    printf("\nSQUARE:\n");
    map(square, array, newarray, len);
    printf("\n");

    free(array);
    free(newarray);
    return 0;
}