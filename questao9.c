/*
Faça um algoritmo que solicite a idade de 4 pessoas. O algoritmo deve calcular a média aritmética das
idades e apresentar o resultado na tela
*/

#include <stdio.h>

void main(){
    int idade1, idade2, idade3, idade4;

    printf("Informe a idade da primeira pessoa: ");
    scanf("%d", &idade1);
    
    printf("\nInforme a idade da segunda pessoa: ");
    scanf("%d", &idade2);

    printf("\nInforme a idade da terceira pessoa: ");
    scanf("%d", &idade3);

    printf("\nInforme a idade da quarta pessoa: ");
    scanf("%d", &idade4);
    
    float media = (idade1 + idade2 + idade3 + idade4) / 4;

    printf("\nA média aritmética das idades é: %f", media); 

}