#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    // Creação de variaveis
    float numero1, numero2 = 0;
    float soma, subtracao, multiplica, divisa, potencia, radiciacao = 0;
    int escolha = 0;

    // Criacao do Menu
    printf("\tCalculdora inteligente\n");
    printf("1.Adição\n");
    printf("2.Subtração\n");
    printf("3.multilicação\n");
    printf("4.divisão\n");
    printf("5.Potenciação\n");
    printf("6.Radiciação\n");
    printf("0.Sair\n");
    printf("Escolha aqui: ");
    scanf("%d", &escolha);

    return (0);
}
