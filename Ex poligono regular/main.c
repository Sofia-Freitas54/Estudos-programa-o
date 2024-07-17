/*
7.   Escreva um programa para ler o número de lados de um polígono regular e a medida do lado (em 
cm). Calcular e imprimir o seguinte: 
− Se o número de lados for igual a 3 escrever TRIÂNGULO e o valor da área 
− Se o número de lados for igual a 4 escrever QUADRADO e o valor da sua área. 
− Se o número de lados for igual a 5 escrever PENTÁGONO. 
8.  Acrescente as seguintes mensagens à solução do exercício anterior conforme o caso. 
− Caso o número de lados seja inferior a 3 escrever NÃO É UM POLÍGONO. 
− Caso o número de lados seja superior a 5 escrever POLÍGONO NÃO IDENTIFICADO. 

*/
#include <stdio.h>
#include <math.h>

int lados;
int area;

int main(){

    printf("Escreva o numero de lados de algum poligono: \n");
    scanf("%d", &lados);

    if(lados == 3){
        int base, altura;
        printf("Este poligono é um triangulo! \n");
        printf("Digite o valor da base e a altura deste triangulo: \n");
        scanf("%d %d", &base, &altura);
        area = base * altura/2;
        printf("O valor da area é: %d", area);
    }
    if(lados == 4){
        int Qlados;
        printf("Este poligono é um quadrado! \n");
        printf("Digite o valor em cm dos lados: \n");
        scanf("%d", &Qlados);
        area = Qlados*Qlados;
         printf("O valor da area é: %d", area);
    }
}