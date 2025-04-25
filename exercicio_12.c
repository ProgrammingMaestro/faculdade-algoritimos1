/*
Esse algoritmo define uma variavel com o limite de 5 letras, o vetor deve ter espaço para 6 já que nossa string precisa de 
um caracter terminador \0 (um byte com apenas zeros) para indicar que terminou. Então, ele pede um input de no maximo 5 letras
para o usuario e depois imprime o texto.
*/
#include <stdio.h>
int main() {
	char letra;
	char texto[6]; // define o limite de 5 letras +1 o '\0'
	printf("Digite no maximo 5 letras: ");
	scanf("%5s", texto); // le no mC!ximo 5 caracteres
	printf("Voce digitou: %s\n", texto);
}