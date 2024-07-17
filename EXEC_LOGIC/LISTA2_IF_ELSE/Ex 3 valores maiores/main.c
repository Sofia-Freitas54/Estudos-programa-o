/*
Escreva um programa para ler 3 valores inteiros e escrever o maior deles. 
Considere que o usuário não informará valores iguais.
*/
#include <stdio.h>

int main(){
    
    int a;
    int b;
    int c;

    printf("Digite 3 valores inteiros:\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b && a>c){
        printf("O maior deles é: %d",a);
    } else if(b>c && b>c){
            printf("O maior deles é: %d",b);
    } else{
        printf("O maior deles é: %d",c);
    }
}