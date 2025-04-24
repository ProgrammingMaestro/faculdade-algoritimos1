#include <stdio.h>
int main() {
    float comprimento, largura, altura;

    printf("Digite o comprimento (m):\n");
    scanf("%f", &comprimento);

    printf("Digite a largura (m):\n");
    scanf("%f", &largura);

    printf("Digite a altura (m):\n");
    scanf("%f", &altura);

    printf("Dimensões do objeto: %.2fm x %.2fm x %.2fm\n", comprimento, largura, altura);
}