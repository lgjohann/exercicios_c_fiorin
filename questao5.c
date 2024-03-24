/*
Elabore um programa que leia dois valores e apresente os resultados das quatro operações aritméticas
básicas realizadas entre eles. Exemplo:

*/


#include <stdio.h>

void main(){
    int n1, n2;

    

    printf("\nInsira o primeiro número inteiro: ");
    scanf("%d", &n1);
    
    printf("\nInsira o segundo número inteiro: ");
    scanf("%d", &n2);


    printf("\n%d + %d = %d", n1, n2, n1+n2);
    printf("\n%d - %d = %d", n1, n2, n1-n2);
    printf("\n%d * %d = %d", n1, n2, n1*n2);
    printf("\n%d / %d = %d", n1, n2, n1/n2);

}