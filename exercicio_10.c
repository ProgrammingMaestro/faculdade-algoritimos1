/*
Esse algoritimo inicialmente imprime um cardapio com algumas opções de pratos executivos (poderia ser qualquer comida eu escolhi pratos executivos)
Então ele pede ao usuario para escolher alguma das 5 opções, ele verifica se o numero que o usuario está nos limites de 1 até 5 e se estiver entra num 
switch case que vai falar uma mensagem agradecendo o usuario e depois o programa acaba. Porém caso o input do usuario não estiver entre 1 e 5 ele imprime
um aviso e depois chama a função main() novamente para "reiniciar" o programa.
*/
#include <stdio.h>
int main() {
	int escolha = 0;
	printf("########## Cardapio legal ##########\n");
	printf("Opcoes:\n");
	printf("1. Frango a Milanesa\n2. Tilapia Empanada\n3. Bife a Cavala\n4. Steak de Filet Mingnon\n5. Fraldinha com Batata\n\n");
	printf("Escolha alguma das opcoes acima (1-5)\n");
	scanf("%d", &escolha);
	if (escolha <= 5 && escolha >= 1) {
		switch (escolha) {
		case 1:
			printf("Obrigado por escolher o Frango a Milanesa, seu pedido estara pronto em breve\n");
			break;

		case 2:
			printf("Obrigado por escolher a Tilapia Empanada, seu pedido estara pronto em breve\n");
			break;

		case 3:
			printf("Obrigado por escolher o Bife a Cavala, seu pedido estara pronto em breve\n");
			break;

		case 4:
			printf("Obrigado por escolher o Steak de Filet Mingnon, seu pedido estara pronto em breve\n");
			break;

		case 5:
			printf("Obrigado por escolher a Fraldinha com Batata, seu pedido estara pronto em breve\n");
			break;

		default:
			break;
		}
	} else {
		printf("Desculpe, nao entendi o que voce pediu poderia pedir novamente? (digite qualquer numero para recomecar)\n");
		scanf("%d");
		main();
	}
}