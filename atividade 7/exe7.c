#include <stdio.h>

main()
{

    int genero, olhos, cabelos;
    int idade;
    float salario;

    int soma_de_habilidades = 0;
    int habitantes_femininos_castanhos_castanhos_18_35 = 0;

    while (1)
    {
        printf("\n Cadastro de Habitantes: %d\n ", soma_de_habilidades);

        printf("Genero (Masculino ou Feminino):");
        scanf("%c", &genero);

        if (genero == 'Feminina')
        {
            printf("Cor dos olhos (a (azuis), v (verdes), c (castanhos), p (pretos) ):");
            scanf("%c", &olhos);

            printf("Cor dos cabelos (l (loiros), c (castanhos), p (pretos), r (ruivos) ):");
            scanf("%c", &cabelos);

            printf("Idade (entre 10 e 100 anos):");
            scanf("%c", &idade);

            if (idade >= 18 && idade <= 35 && olhos == 'c' && cabelos == 'c')
            {
                habitantes_femininos_castanhos_castanhos_18_35++;
            }
        }

        printf("\n Salario (nao negativo):");
        scanf("%f", &salario);

        if (idade == -1)
        {
            break;
        }

        if ((genero == "Masculino" || genero == 'Feminino') && (olhos == 'a (azuis)' || olhos == 'v (verdes)' || olhos == 'c (castanhos)' || olhos == 'p (pretos)') && (cabelos == 'l (loiros)' || cabelos == 'c (castanhos)' || cabelos == 'p (pretos)' || cabelos == 'r (ruivos)') && idade >= 10 && idade <= 100 && salario >= 0)
        {
            soma_de_habilidades++;
        }
        else
        {
            printf("\nHabitantes nao contabilizados.\n");
        }
    }

    float porcentagem = ((float)habitantes_femininos_castanhos_castanhos_18_35 / soma_de_habilidades) * 100;

    printf("\n Porcentagem de mulheres com olhos e cabelos castanhos, entre 18 e 35 anos : %.2f%%\n", porcentagem);
}