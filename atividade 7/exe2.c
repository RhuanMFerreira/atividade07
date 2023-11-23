#include <stdio.h>

int main()
{
    int N, i;

    printf("\n----------Responda----------\n");

    printf("\nUm numero inteiro positivo:\n ");
    scanf("\n%d", &N);

    printf("\n----------Resultado----------\n");

    if (N < 0)
    {
        printf("\nO numero digitado nao e positivo.\n");
        return 1;
    }

    i = N;

    while (i >= 0)
    {
        printf("\n%d ", i);
        i--;
    }

    printf("\n");
}