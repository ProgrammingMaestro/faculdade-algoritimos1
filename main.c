#include <stdio.h>
#include <math.h>

//3-Considere um algoritmo que tenha como entrada 3 números inteiros chamados a, b, c
void exercicio03(int a, int b, int c) {
    printf("%d %d %d", a ,b ,c);
}

//4- faça um algoritmo que receba duas datas em anos cuja a primeira entrada tenha um valor inteiro menor que o segundo valor, o algoritmo deve mostrar os anos bissextos dentro do intervalo das duas entradas
void exercicio04() {
    int dia1, dia2, mes1, mes2, ano1, ano2;
    scanf("%d", &dia1);
    scanf("%d", &dia2);
    scanf("%d", &mes1);
    scanf("%d", &mes2);
    scanf("%d", &ano1);
    scanf("%d", &ano2);
}

//5- faça um algoritmo que receba a entrada de valores a, b, c que calcule a fórmula de bhaskara
void exercicio05(){
    float a, b, c, x1, x2, delta;
    printf("Bhaskara- Entre os valores para a, b, c:\n");
    scanf("%f %f %f", &a, &b, &c);
    delta = b * b - 4 * a * c;
    if (delta < 0) {
        printf("Raizes nao reais\n");
    } else if (delta == 0) {
        x1 =  (-b + sqrt(delta))/(2 * a);
        printf("Unica Raiz: %f\n", x1);
    } else {
        x1 = (-b + sqrt(delta))/(2 * a);
        x2 = (-b - sqrt(delta))/(2 * a);
        printf("Raizes: {%f, %f}", x1, x2);
    }
    scanf("%s");
}

//6- algoritmo que tenha entrada dois números inteiros que some e depois mostre o resultado
void exercicio06(int a, int b) {
    printf("O resultado eh: %d e %d\n", a, b);
}

//7- faça um código onde receba dois números inteiros e somar estes dois números após isso escrever mais dois números e somar eles e dividir o priemeiro resultado pelo segundo
void exercicio07() {
    int a, b, c, d;
    printf("Digite os primeiros dois numeros inteiros");
    scanf("%d %d", &a, &b);
    printf("Digite mais dois numeros inteiros");
    scanf("%d %d", &c, &d);
    int soma1 = a + b;
    int soma2 = c + d;
    printf("A divisao entre o resultado da soma dos pares eh: %d", (soma1/soma2));
}

//8- escreva um algoritmo que peça o nome idade gênero e altura do usuário
void exercicio08() {
    char nome[50], genero[50];
    int idade;
    float altura;
    printf("Qual o seu nome?\n");
    scanf("%s", &nome);
    printf("Qual o seu genero? (Masculino | Feminino | Outro)\n");
    scanf("%s", &genero);
    printf("Qual a sua idade? (em anos)\n");
    scanf("%d", &idade);
    printf("Qual a sua altura? (em metros)\n");
    scanf("%f", &altura);
    printf("Voce se chama %s, voce eh do genero %s, tem %d anos e %.2fm de altura\n", nome, genero, idade, altura);
}

//9- desenvolva um algoritmo que receba um número inteiro e informe se ele é par ou ímpar
void exercicio09() {
    int numero = 0;
    printf("Digite um numero inteiro e eu direi se ele eh par ou impar\n");
    scanf("%d", &numero);
    if (numero % 2 == 0) {
        printf("%d eh Par\n", numero);
    } else {
        printf("%d eh Impar\n", numero);
    }
}

//10- faça um cardápio que apareça no terminal por meio do printf com no mínimo 5 escolhas, e faça a opção de escolha das opções
void exercicio10() {
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
        exercicio10();
    }    
}

//11- faça um algoritmo que insira dois números e que a divisão deles de um resultado que seja obrigatóriamente um número inteiro
void exercicio11(){
    int numero1, numero2;
    printf("Escolha dois numeros\n");
    scanf("%d %d", &numero1, &numero2);
    printf("os numeros sao %d e %d a divisao entre eles eh igual a %d", numero1, numero2, (numero1/numero2));
}
//12- faça um algoritmo com uma variável tipo char e defina o número de letras que a pessoa pode escrever
void exercicio12() {
    char letra;
    printf("voce pode escrever uma letra na variavel char, escolha sabiamente:\n");
    scanf("%c", &letra);
    printf("Voce escreveu a `letra` %c", letra);
}
//15- crie um algoritmo que some 3 números inteiro e depois calcule a média
void exercicio15(int a, int b, int c) {
    int soma = a + b + c;
    printf("soma de a + b + c = %d\n", soma);
    printf("media de a, b e c = %d\n",  soma/3);
    }

//21 crie um algoritmo que receba 2 números inteiros e realize um divisão. Em seguida informe se o resto dessa divisão é ímpar e imprima isso na tela.
void exercicio21(int a, int b) {
    printf("%d\n", (a/b));
    if ((a/b)%2 != 0) {
        printf("a divisao eh IMPAR\n");
    }
    else {
        printf("a divisao eh PAR\n");
    }
}

//28- faça um algoritmo que tenha como entrada um valor real
void exercicio28(float numero) {
    printf("%f\n", numero);
    }

int main() {
    exercicio12();
    return 0;
}