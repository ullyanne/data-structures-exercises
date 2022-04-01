//Preencha os trechos omitidos com #

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, max;
    int *ptr;

    printf("Insira o número máximo de elementos do array\n");
    scanf("%d", &max);

    ptr = (int*) malloc(max * sizeof(int));

    //Caso a memória não seja alocada
    if(ptr == NULL)
    {
        printf("A memória não foi alocada!\n");
        exit(0);
    }

    //Input
    printf("Insira %d inteiros\n", max);

    for(i = 0; i < max; i++)
        scanf("%d", (ptr + #));

    //Output
    printf("\nOs elementos do array são:\n");
    
    for(i = 0; i < max; i++)
        printf("%d ", #(ptr+#));
    
    printf("\n\nOs endereços dos elementos são:\n");

    for(i = 0; i < max; i++)
        printf("Inteiro: %d Endereço: %p\n", #(ptr+#), (ptr + #));
    
    //Liberar memória
    free(#);
    return 0;
}