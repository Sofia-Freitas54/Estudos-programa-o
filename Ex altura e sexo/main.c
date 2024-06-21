/*
Tendo como entrada a altura e o sexo (codificado da seguinte forma: 1:feminino 2:masculino) de uma 
pessoa,  construa  um  programa  que  calcule  e  imprima  seu  peso  ideal,  utilizando  as  seguintes 
Fórmulas: 
- para homens: (72.7 * Altura) – 58 
- para mulheres: (62.1 * Altura) – 44.7
*/
#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    int opcao;
    float peso;
    float altura;

    printf("Digite sua altura:\n");
    scanf("%f", &altura);
    printf("Digite um valor para calcular seu peso:\n 1 para mulheres\n 2 para homens\n");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
         peso = (62.1 *altura) - 44.7;
        break;
    case 2:
        peso = (72.7 *altura) - 58;
        break;
    default:
        printf("Valor invalido");
        break;
    }
    printf("O seu peso ideal para sua altura é: %f", peso);
    return 0;
}