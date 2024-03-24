/*
Desenvolva um algoritmo para um programa que leia três valores inteiros e apresente como resultado
o valor do quadrado da soma dos três valores lidos.
*/

#include <stdio.h>

void main(){
    int n1, n2, n3;

    printf("Insira o primeiro número: ");
    scanf("%d", &n1);
    
    printf("\nInsira o segundo número: ");
    scanf("%d", &n2);

    printf("\nInsira o terceiro número: ");
    scanf("%d", &n3);

    int soma = n1 + n2 + n3;

    int quadrado = soma*soma;
    
    printf("O quadrado da soma dos números inseridos é: %d", quadrado);


}