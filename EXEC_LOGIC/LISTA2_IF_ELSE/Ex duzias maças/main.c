/*
As maçãs custam R$ 0,30 cada se forem compradas menos do que uma dúzia, e R$ 0,25 se forem 
compradas pelo menos doze. Escreva um programa que leia o número de maçãs compradas, calcule 
e escreva o valor total da compra
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");
    int qte;
    float valor;

    printf("Digite a quantidade de maçãs compradas:\n");
    scanf("%d", &qte);

    if(qte < 12){
        valor = qte * 0.30;
    } else{
        if(qte >= 12){
        valor = qte * 0.25;
        }

    }
    
    printf("O valor de suas maças é: %f", valor);

}