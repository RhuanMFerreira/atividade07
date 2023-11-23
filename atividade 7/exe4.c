#include <stdio.h>

main()
{
    int conta = 0;
    int numero = 3;

    printf("\n----------Resultado---------- \n");

    while (conta < 10)
    {
        printf("%d\n", numero);
        numero += 3;
        conta++;
    }
}