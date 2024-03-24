/*
Desenvolva um algoritmo para calcular a quantidade de litros de combustível que um automóvel que faz
média de 12Km/L precisa para uma viagem. O usuário deve informar a distância do trajeto e o algoritmo
deve calcular a quantidade de litros através da seguinte fórmula: LitrosUsados = distância / 12
*/

#include <stdio.h>

void main(){
    float distancia, litrosUsados;

    printf("Informe a distância do trajeto: ");
    scanf("%f", &distancia);

    litrosUsados = distancia / 12;

    printf("\nA quantidade de litros de combustível necessária para o trajeto é: %f", litrosUsados);

}