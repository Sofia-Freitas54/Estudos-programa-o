/*
    Escreva um programa que recebe 3 valores e escreve qual dos valores é o maior e qual o menor
*/


#include <stdio.h>
int main(){
    int valor1, valor2, valor3;
    int maior, menor;
    printf("Digite 3 valores inteiros");
    scanf("%d %d %d", &valor1, &valor2, &valor3);
    
    maior = valor1;
    
    if(valor2 > maior){
        maior = valor2;
    }
    
    if(valor3 > maior){
        maior = valor3;
    }
    
    menor = valor1;
    
    if(valor2 < menor){
        menor = valor2;
    }
    
    if(valor3 < menor){
        menor = valor3;
    }
    
    printf("o valor menor é %d", menor);
    printf("o valor maior é %d", maior);
    
    return 0;
}