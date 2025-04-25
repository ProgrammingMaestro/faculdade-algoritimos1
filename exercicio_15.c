/*
Esse algoritimo pede para o usuario três números inteiros, depois ele soma esses numeros,
e imprime o valor da soma deles e, também, o valor da média deles.
*/
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Escolha Tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);
    int soma = a + b + c;
    printf("soma de a + b + c = %d\n", soma);
    printf("media de a, b e c = %.2f\n", (soma/3.0));
}