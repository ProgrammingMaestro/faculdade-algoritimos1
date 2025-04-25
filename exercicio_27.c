/*
Esse algoritimo pede um numero real para o usuario e ao imprimir de volta para o mesmo o algoritimo faz um cast para o tipo int e fala que é o numero inteiro.
*/
#include <stdio.h>
int main() {
    float a;
    printf("Digite um valor em float: ");
    scanf("%f", &a);
    printf("seu valor em inteiro eh: %d", (int)a);
}