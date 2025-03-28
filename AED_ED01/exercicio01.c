/*
Exercicio01 - v0.0. - 20 / 02 / 2025
Author: Felipe Silva Barros
*/

#include <stdio.h>
#include <math.h>

void exercicio0111(void)
{
    int x = 0;
    int triplo = 0;
    int quadrado = 0;

    printf("%s", "\nDigite o valor que representa o lado do quadrado: ");
    scanf("%d", &x);
    getchar();

    triplo = (x * 3);
    quadrado = (triplo * triplo);

    printf("A area do quadrado correspondente ao triplo do valor digitado eh: %d \n", quadrado);

    printf("\n%s\n", "Apertar ENTER para continuar.");
    getchar();
}

void exercicio0112(void)
{
    int x = 0;
    float metade = 0.0;
    float perimetro = 0.0;
    float quadrado = 0.0;

    printf("%s", "\nDigite o valor que representa o lado do quadrado: ");
    scanf("%d", &x);
    getchar();

    metade = (x / 2);
    quadrado = (metade * metade);
    perimetro = (metade * 4);

    printf("A area do quadrado e seu perimetro correspondente com metade do valor digitado eh: %.2f, %.2f \n", quadrado, perimetro);

    printf("\n%s\n", "Apertar ENTER para continuar.");
    getchar();
}

void exercicio0113(void)
{
    int x = 0;
    int y = 0;
    float xx = 0.0;
    float yy = 0.0;
    float retangulo = 0.0;

    printf("%s", "\nDigite o valor que representa um lado de um retangulo: ");
    scanf("%d", &x);
    getchar();

    printf("%s", "\nDigite o valor que representa outro lado de um retangulo: ");
    scanf("%d", &y);
    getchar();

    xx = (x * 2);
    yy = (y * 2);
    retangulo = (xx * yy);

    printf("A area do retangulo aumentado em 2x o valor digitado eh: %.2f \n", retangulo);

    printf("\n%s\n", "Apertar ENTER para continuar.");
    getchar();
}

void exercicio0114(void)
{
    float x = 0.0; // Era para receber valores inteiros, porem precisei colocar real, pois nao estava aparacendo a parte decimal da divisao por 4 em números ímpares (que pussuem resto)
    float y = 0.0;
    float quartox = 0.0;
    float quartoy = 0.0;
    float retangulo = 0.0;
    float perimetro = 0.0;

    printf("%s", "\nDigite o valor que representa um lado de um retangulo: ");
    scanf("%f", &x);
    getchar();

    printf("%s", "\nDigite o valor que representa outro lado de um retangulo: ");
    scanf("%f", &y);
    getchar();

    quartox = (x / 4);
    quartoy = (y / 4);
    retangulo = (quartox * quartoy);
    perimetro = (quartox * 2 + quartoy * 2);

    printf("A area do retangulo e seu perimetro correspondente com um quarto do valor digitado eh: %0.2f, %0.2f\n ", retangulo, perimetro);

    printf("\n%s\n", "Apertar ENTER para continuar.");
    getchar();
}

void exercicio0115(void)
{
    float base = 0.0;
    float altura = 0.0;
    float dobro_altura = 0.0;
    float triangulo = 0.0;

    printf("%s", "\nDigite o valor que representa o base do triangulo: ");
    scanf("%f", &base);
    getchar();

    printf("%s", "\nDigite o valor que representa o altura do triangulo: ");
    scanf("%f", &altura);
    getchar();

    dobro_altura = (altura * 2);
    triangulo = ((base * dobro_altura) / 2);

    printf("A area do triangulo com o dobro do valor da altura digitada eh: %.2f\n ", triangulo);

    printf("\n%s\n", "Apertar ENTER para continuar.");
    getchar();
}

void exercicio0116(void)
{
    float lado = 0.0;
    float terco = 0.0;
    float altura = 0.0;
    float area = 0.0;
    float perimetro = 0.0;

    printf("%s", "\nDigite o valor que representa o lado do triangulo: ");
    scanf("%f", &lado);
    getchar();

    terco = (lado / 3);
    altura = (sqrt(3) / 2) * terco;
    area = (sqrt(3) / 4) * pow(terco, 2);
    perimetro = (3 * terco);

    printf("A altura, area e o perimetro do triangulo com um terco do valor do lado digitado eh: %.2f, %.2f, %.2f\n ", altura, area, perimetro);

    printf("\n%s\n", "Apertar ENTER para continuar.");
    getchar();
}

void exercicio0117(void)
{
    float lado = 0.0;
    float ladox4 = 0.0;
    float volume = 0.0;

    printf("%s", "\nDigite o valor que representa o lado do cubo: ");
    scanf("%f", &lado);
    getchar();

    ladox4 = (lado * 4);
    volume = pow(ladox4, 3);

    printf("O volume do cubo com 4x a medida digitada eh: %.2f\n ", volume);

    printf("\n%s\n", "Apertar ENTER para continuar.");
    getchar();
}

void exercicio0118(void)
{
    float comprimento = 0.0;
    float largura = 0.0;
    float altura = 0.0;
    float comprimentox5 = 0.0;
    float largurax5 = 0.0;
    float alturax5 = 0.0;
    float volume = 0.0;

    printf("%s", "\nDigite o valor que representa o comprimento do paralelepipedo: ");
    scanf("%f", &comprimento);
    getchar();

    printf("%s", "\nDigite o valor que representa a largura do paralelepipedo: ");
    scanf("%f", &largura);
    getchar();

    printf("%s", "\nDigite o valor que representa a altura do paralelepipedo: ");
    scanf("%f", &altura);
    getchar();

    comprimentox5 = (comprimento * 5);
    largurax5 = (largura * 5);
    alturax5 = (altura * 5);
    volume = (comprimentox5 * largurax5 * alturax5);

    printf("O volume do paralelepipdo com 5x os valores digitados eh: %.2f\n ", volume);

    printf("\n%s\n", "Apertar ENTER para continuar.");
    getchar();
}

void exercicio0119(void)
{
    float raio = 0.0;
    float raiox4 = 0.0;
    float area = 0.0;

    printf("%s", "\nDigite o valor que representa o raio do circulo: ");
    scanf("%f", &raio);
    getchar();

    raiox4 = (raio * 4);
    area = (M_PI * pow(raiox4, 2)) / 2;

    printf("A area do semicircuilo com 4x a medida digitada eh: %.2f\n ", area);

    printf("\n%s\n", "Apertar ENTER para continuar.");
    getchar();
}

void exercicio0120(void)
{
    float raio = 0.0;
    float raio_reduzido = 0.0;
    float volume = 0.0;

    printf("%s", "\nDigite o valor que representa o raio da esfera: ");
    scanf("%f", &raio);
    getchar();

    raio_reduzido = (5.0 / 8.0) * raio;
    volume = (4.0 / 3.0) * M_PI * pow(raio_reduzido, 3);

    printf("O volume da esfera com cinco oitavos do valor digitado eh: %.2f\n ", volume);

    printf("\n%s\n", "Apertar ENTER para continuar.");
    getchar();
}

int main(void)
{
    int opcao = 0;
    printf("%s\n", "Execicio01 - Programa = v0.0");
    printf("%s\n", "Autor: Felipe Silva Barros");
    printf("\n");

    do
    {
        printf("\n%s\n", "Opcoes:");
        printf("\n%s", "0 - Terminar");
        printf("\n%s", "1 - Exercicio0111");
        printf("\n%s", "2 - Exercicio0112");
        printf("\n%s", "3 - Exercicio0113");
        printf("\n%s", "4 - Exercicio0114");
        printf("\n%s", "5 - Exercicio0115");
        printf("\n%s", "6 - Exercicio0116");
        printf("\n%s", "7 - Exercicio0117");
        printf("\n%s", "8 - Exercicio0118");
        printf("\n%s", "9 - Exercicio0119");
        printf("\n%s", "10 - Exercicio0120");
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
            exercicio0111();
            break;
        case 2:
            exercicio0112();
            break;
        case 3:
            exercicio0113();
            break;
        case 4:
            exercicio0114();
            break;
        case 5:
            exercicio0115();
            break;
        case 6:
            exercicio0116();
            break;
        case 7:
            exercicio0117();
            break;
        case 8:
            exercicio0118();
            break;
        case 9:
            exercicio0119();
            break;
        case 10:
            exercicio0120();
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