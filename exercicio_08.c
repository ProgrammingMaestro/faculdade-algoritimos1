/*
Esse algoritimo pede pelo nome, genero, idade e altura do usuario depois imprime os dados que o usuario digitou.
*/
#include <stdio.h>
int main() {
	char nome[50], genero[50];
	int idade;
	float altura;
	printf("Qual o seu nome:\n");
	scanf("%s", &nome);
	printf("Qual o seu genero (M | F):\n");
	scanf("%s", &genero);
	printf("Qual a sua idade:\n");
	scanf("%d", &idade);
	printf("Qual a sua altura (em metros):\n");
	scanf("%f", &altura);
	printf("Voce se chama %s, voce eh do genero %s, tem %d anos e %.2fm de altura\n", nome, genero, idade, altura);
}