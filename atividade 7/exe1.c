#include <stdio.h>

main()
{
    int n, i;

    printf("\n----------Responda----------\n");

    printf(" \nUm numero inteiro positivo: ");
    scanf("\n%d", &n);

    printf("\n----------Resultado----------\n");

    if (n < 0)
    {
        printf("\nO número digitado não é positivo.\n");
        return 1;
    }

    i = 0;

    while (i <= n)
    {
        printf("\n%d ", i);
        i++;
    }
}