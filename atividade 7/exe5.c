#include <stdio.h>

main()
{
    int contar = 0;
    int dobrar = 2;
    int soma = 0;

    printf("\n----------Resultado---------- \n");

    while (contar < 50)
    {
        soma += dobrar;
        dobrar += 2;
        contar++;
    }

    printf("\nA soma dos 50 numeros pares:%d\n", soma);
}