/*
Esse algoritimo pede por um comprimento, uma largura e uma altura, as três dimensões de um objeto no espaço 3D. 
Depois ele apenas imprime esses dados de volta para o usuario.
*/
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