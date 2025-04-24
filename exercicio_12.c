#include <stdio.h>
int main() {
	char letra;
	char texto[6]; // define o limite de 5 letras +1 o '\0'
	printf("Digite no maximo 5 letras: ");
	scanf("%5s", texto); // le no mC!ximo 5 caracteres
	printf("Voce digitou: %s\n", texto);
}