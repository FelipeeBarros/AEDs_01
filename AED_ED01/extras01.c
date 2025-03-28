/*
Extra01 - v0.0. - 20 / 02 / 2025
Author: Felipe Silva Barros
*/

#include <stdio.h>
#include <math.h>

void extra01()
{
    float area = 0.0;
    float areax7 = 0.0;
    float raio = 0.0;

    printf("Digite o valor da area da circunferencia: ");
    scanf("%f", &area);
    getchar();

    areax7 = 7.0 * area;
    raio = sqrt(areax7 / M_PI);

    printf("O raio da circunferencia com sete vezes a area eh: %.2f\n", raio);

    printf("\n%s\n", "Apertar ENTER para continuar.");
    getchar();
}

void extra02()
{
    float volume = 0.0;
    float volume_reduzido = 0.0;
    float area = 0.0;
    float raio = 0.0;

    printf("Digite o valor do volume da esfera: ");
    scanf("%f", &volume);
    getchar();

    volume_reduzido = (3.0 / 5.0) * volume;
    raio = cbrt((3.0 * volume_reduzido) / (4.0 * M_PI));
    area = 4.0 * M_PI * pow(raio, 2);

    printf("O raio e a area da esfera com 3/5 do volume digitado eh: %.2f, %.2f\n", raio, area);

    printf("\n%s\n", "Apertar ENTER para continuar.");
    getchar();
}

int main()
{
    int opcao = 0;
    printf("%s\n", "Extra01 - Programa = v0.0");
    printf("%s\n", "Autor: Felipe Silva Barros");
    printf("\n");

    do
    {
        printf("\n%s\n", "Opcoes:");
        printf("\n%s", "0 - Terminar");
        printf("\n%s", "1 - extra_01");
        printf("\n%s", "2 - extra_02");
        printf("\n");
        printf("\n%s", "Opcao = ");
        scanf("%d", &opcao);
        getchar();
        printf("\n%s%d\n", "Opcao = ", opcao);

        switch (opcao)
        {
        case 0:
            break;
        case 1:
            extra01();
            break;
        case 2:
            extra02();
            break;
        default:
            printf("\nERRO: Opcao invalida.\n");
            break;
        }
    }

    while (opcao != 0);
    printf("\n\nApertar ENTER para terminar.");
    getchar();
    return (0);
}