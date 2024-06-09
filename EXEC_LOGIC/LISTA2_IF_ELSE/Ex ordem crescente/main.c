/*
Escreva  um  programa  para  ler  3  valores  inteiros  (considere  que  não  serão  lidos  valores  iguais)  e 
escrevê-los em ordem crescente.
*/
#include <stdio.h>

int main(){

    int val1, val2, val3;
    int aux;

    printf("Digite 3 valores inteiros");
    scanf("%d %d %d", &val1, &val2, &val3);

    if(val1 > val2){
        aux = val2;
        val2 = val1;
        val1 = aux;
    }
    if(val1 > val3){
        aux = val3;
        val3 = val1;
        val1 = aux;
    }
    if(val2 > val3){
        aux = val3;
        val2 = val3;
        val3 = aux;
    }
    printf("Valores em ordem crescente: %d, %d, %d", val1, val2, val3);
}
