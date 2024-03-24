/* 
Escreva um algoritmo para ler dos valores para as variáveis A e B. O algoritmo deve efetuar a troca dos
valores, de forma que a variável A passe a possuir o valor de B e a variável B passe a possuir o valor de
A. O algoritmo deve apresentar os valores ao usuário, antes e depois da troca.
*/

#include <stdio.h>

void main(){
    int a, b;

    printf("Informe um valor inteiro: ");
    scanf("%d", &a);

    printf("Informe outro valor inteiro: ");
    scanf("%d", &b);

    printf("os valores antes da troca são A = %d e B = %d", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("\nos valores depois da troca são A = %d e B = %d", a, temp);
}