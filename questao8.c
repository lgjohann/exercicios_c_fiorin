/*
Escreva um algoritmo que peça para o usuário informar a sua idade e, em seguida, calcule e apresente o
dobro e o triplo da idade informada.
*/

#include <stdio.h>

void main(){
    int idade;

    printf("Informe a sua idade: ");
    scanf("%d", &idade);

    int dobro =  idade*2;
    int triplo = idade*3;

    printf("\nO dobro da sua idade é: %d", dobro);
    printf("\nO triplo da sua idade é: %d", triplo);
}