/*
Escreva um programa para ler o ano de nascimento de uma pessoa e escrever uma mensagem que 
diga se ela poderá ou não votar este ano (não é necessário considerar o mês em que ela nasceu)
 */
#include <stdio.h>

int main(){
    int anoN;
    int anoA;
    int idade;

    printf("Digite o ano de seu nascimento: ");
    scanf("%d", &anoN);

    printf("Digite o ano em que estamos atualmente: ");
    scanf("%d", &anoA);

    idade = anoA - anoN;

    if(idade >= 18){
        printf("Voce pode votar.\n");
    } else{
        printf("Voce ainda nao tem idade para votar.\n");
    }

    return 0;
    
}