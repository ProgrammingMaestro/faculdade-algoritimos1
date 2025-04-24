#include <stdio.h>
int main() {
    int idade;
    char sexo, nacionalidade, deficiencia;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu sexo (M/F): ");
    scanf(" %c", &sexo);

    printf("Voce eh brasileiro? (Y/N): ");
    scanf(" %c", &nacionalidade);

    printf("Possui alguma deficiencia grave? (Y/N): ");
    scanf(" %c", &deficiencia);

    if ((idade >= 18 && idade <= 45) && (sexo == 'M' || sexo == 'm') && (deficiencia == 'N' || deficiencia == 'n') && (nacionalidade == 'Y' || nacionalidade == 'y')) {
        printf("Voce esta apto ao alistamento militar obrigatorio.\n");
    } else {
        printf("Voce NAO esta apto ao alistamento militar obrigatorio.\n");
    }
}