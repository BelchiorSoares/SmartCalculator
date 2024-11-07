#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// metodos de tratamento de informação
void inforError(void);

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

    // Tratamento de entrada de dados
    if (escolha == 1)
    {
        printf("Informe a Primeira parcela: ");
        scanf("%f", &numero1);
        printf("Informe a segunda parcela: ");
        scanf("%f", &numero2);
    }
    else if (escolha == 2)
    {
        printf("Informe o Minuindo: ");
        scanf("%f", &numero1);
        printf("Informe o subtraindo: ");
        scanf("%f", &numero2);
    }
    else if (escolha == 3)
    {
        printf("Informe o primeiro factor: ");
        scanf("%f", &numero1);
        printf("Informe o segundo factor: ");
        scanf("%f", &numero2);
    }
    else if (escolha == 4)
    {
        printf("Informe o dividendo: ");
        scanf("%f", &numero1);
        printf("Informe o divisor: ");
        scanf("%f", &numero2);     
    }
    else if (escolha == 5)
    {
        printf("Informe a base: ");
        scanf("%f", &numero1);
        printf("Informe o expoente: ");
        scanf("%f", &numero2);
    }
    else if (escolha == 6)
    {
        printf("Informe o radicando: ");
        scanf("%f", &numero1);
    }
    else
        inforError();
    return (0);
}
