/*
Esse algoritimo pede ao usuario por sua idade, sexo, se ele é brasileiro (nacionalidade) e se ele possui alguma deficiencia grave.
então faz o check se (a idade for maior ou igual a 18 e menor ou igual a 45 anos) E (a variavel sexo for 'M' OU 'm') E (a variavel deficiencia for 'N' OU 'n') E (a variavel nacionalidade for 'Y' OU 'y')
Se tudo isso for verdadeiro o individuio está apto ao alistamento militar obrigatorio.
Caso essas condições resultarem em falso o individuo não é apto ao alistamento obrigatorio
*/
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