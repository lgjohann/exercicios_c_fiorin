/*
Escreva um algoritmo que receba um valor em Real e a cotação do Dólar, calcule a conversão do valor e,
como saída, apresente o valor a ser convertido (R$), a cotação do Dólar e o valor da conversão ($).

Exemplo:

Entrada:
Informe a cotação do Dólar: 3,81
Informe a quantidade de Reais a ser convertida: 15

Saída:
Cotação do Dólar: R$ 3,81
Valor em Real: R$ 15,00
Valor em Dólar: $ 3,93
*/

#include <stdio.h>

void main(){
    float quantReal, cotacaoDolar;

    printf("Informe a cotação do Dólar: ");
    scanf("%f", &cotacaoDolar);

    printf("\nInforme a quantidade de Reais a ser convertida: ");
    scanf("%f", &quantReal);

    float conversaoDolar = quantReal / cotacaoDolar;

    printf("\nCotação do Dólar: R$ %f", cotacaoDolar);
    printf("\nValor em Real: R$ %f", quantReal);
    printf("\nValor em Dólar: $ %f", conversaoDolar);


}