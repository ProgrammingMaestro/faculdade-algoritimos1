#include <stdio.h>
int main() {
    char a, b, c, temp;

    printf("Digite tres letras: ");
    scanf(" %c %c %c", &a, &b, &c);

    // Ordenação simples
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }

    printf("Letras em ordem alfabetica: %c %c %c\n", a, b, c);
}