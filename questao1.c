/* 
Faça um algoritmo para calcular o volume de uma lata cilíndrica através da seguinte fórmula:
Vol = 3,14. r². h. O algoritmo deve receber o valor do raio (r) e da altura (h) e, após calcular o volume,
mostrar o resultado ao usuário. Procure empregar o conceito de constantes e variáveis neste problema.
*/

#include <stdio.h>

void main() {
    float r, h, vol;

    printf("Insira o valor do raio: ");
    scanf("%f", &r);

    printf("\nInsira o valor de altura: ", &h);
    scanf("%f", &h);

    vol = 3.14 * (r*r) * h;


    printf("\nO volume é: %f", vol);

}

