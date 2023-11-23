#include <stdio.h>

main()
{

    int n;

    printf("\n----------Responda----------\n");

    printf("\nUm numero inteiro:\n");
    scanf("\n%d", &n);

    int impar = 1;
    int contar = 0;

    printf("\n----------Resultado----------\n");

    while (contar < n)
    {
        printf("\n%d", impar);
        impar += 2;
        contar++;
    }
}