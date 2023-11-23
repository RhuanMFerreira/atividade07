#include <stdio.h>

main()
{

    int variedade, quantidade;
    float total = 0.0;

    while (1)
    {
        printf("\n Cardapio de Frutas:\n");
        printf("\n 1 => abacaixi - 5.00 a unidade\n");
        printf("\n 2 => maca - 1,00 a unidade \n  ");
        printf("\n 3 => pera - 4,00 a unidade \n");
        printf("\n 0 => Finalizar compra \n");
        printf("\nNumeros de frutas desejadas ( ou 0 para finalizar a compra):\n");
        scanf("\n%d", &variedade);

        if (variedade == 0)
        {
            break;
        }

        switch (variedade)
        {
        case 1:
            printf("\nQuantidade de abacaxai que queres: \n");
            break;

        case 2:
            printf("\n Quantidade de maca que queres: \n");
            break;

        case 3:
            printf("\n Quantidade de pera que queres: \n");
            break;
        default:
            printf("\nTente outra vez:\n");
            continue;
        }

        scanf("\n%d", &quantidade);

        switch (variedade)
        {
        case 1:
            total += quantidade * 5.00;
            break;

        case 2:
            total += quantidade * 1.00;
            break;

        case 3:
            total += quantidade * 4.00;
            break;
        }
    }

    printf("\n Total da Compra e : %2f\n", total);
}