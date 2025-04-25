/*
Esse daqui é meio complicado, esse algoritimo calcula a sequencia de fibonacci utilizando memoizaçao. primeiro definimos um array de tipo long int
com 1000 espaços de memoria. depois temos duas funções de ajuda e a função principal onde o nosso programa começa pedindo ao usuario por um numero
de posição da sequencia, depois disso o algoritimo inicializa a memoria do array memo para ser preenchido por -1, isso é importante para verificar
se já temos um resultado na posição que a gente quer acessar. depois disso ele entra em um laço de repetição que vai rodar n vezes, sendo n o número
que o usuario escolheu, onde dentro de cada loop vai chamar a função fibonacci(i) com index i.
Agora por ultimo dentro da função fibonacci ele checa se n é menor ou igual a 1 e retorna n já que os primeiros dois numeros da sequencia sempre serão
0 e 1. Então ele checa se no nosso array a posição de numero n já existir, ou seja, for diferente de -1 e se isso for verdade retorna o valor dessa posição.
Então, se esse check falhar nos iremos atribuir um valor a essa possição, memo[n] é igual ao resultado da minha função fibonacci anterior ou seja n - 1 mais
o numero anterior ao anterior que seria n - 2. Aqui que o check se a memoria é -1 é importante porque ao inves de recursivamente chamar a função desde o 0
todas as vezes que ele quiser calcular o proximo número nossa função checa se naquele lugar da memoria tem um valor valido e apenas retorna esse valor, sem 
a necessidade de realizar o calculo novamente. E assim ele continua até chegar no resultado, porém. é possivel ocorrer um integer overflow ou um buffer overflow caso
os valores forem muito grandes então nesse caso como não alocamos memoria dinamicamente durante o programa é melhor permanecer dentro de numeros não tão grandes assim.
*/
#include <stdio.h>

long int memo[1000];
void inicializarMemoria() {
	for (int i = 0; i < 1000; i++) {
		memo[i] = -1;
	}
}

long int fibonacci(int n) {
	if (n <= 1) {
		return n;
	}

	if (memo[n] != -1) {
		return memo[n];
	}

	memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
	return memo[n];
}

int main() {
	int n;
	printf("Digite a posicao n da sequencia de Fibonacci: ");
	scanf("%d", &n);

	inicializarMemoria();
	for (int i = 0; i <= n; i++) {
		printf("Fibonacci(%d) = %ld\n", i, fibonacci(i));
	}
}