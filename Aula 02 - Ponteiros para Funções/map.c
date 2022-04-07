//Preencha os trechos omitidos com #

#include <stdio.h>
#include <stdlib.h>

void map(#, int * array, int len) {
    int result, i;

    for (int i = 0; i < len; i++) {
        result = #;
        printf ("%d ", result);
    }
}

int factorial(int num) {
    if (num == 0)
        return 1;
    return (num * factorial (num - 1));
}

int square(int num) {
    return (num * num);
}

int main() {
    int len, i;

    printf ("Insira o tamanho do array.\n");
    scanf ("%d", &len);

    int* array = (int *) malloc ( len * sizeof(int) );

    printf ("Digite os elementos do array.\n");

    for (i = 0; i < len; i++)
        scanf ("%d", array + i);

    printf ("\nFACTORIAL:\n");
    map (factorial, array, len);

    printf ("\nSQUARE:\n");
    map (square, array, len);
    printf ("\n");

    free (array);
    return 0;
}