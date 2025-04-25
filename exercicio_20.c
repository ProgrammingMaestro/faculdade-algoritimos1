/*
Esse algoritimo pede por três letras ao usuario, depois utilizando da propiedade do ASCII onde, 
a letra 'a' aparece antes de "b" que aparece antes de c e assim sucessivamente, dando à "a" um valor
em inteiro menor que "b" e "b" um valor inteiro menor que "c". Para exemplificar, vamos atribuir as variaveis
como a = 's', b = 't', c = 'f'
s > t não pois o s vem antes de t então s permanece no mesmo lugar
s > f sim, s vem depois de f, então, trocamos o valor das variaveis usando uma variavel temporaria para guardar o valor
de alguma das variaveis enquanto substituimos o valor da outra, então, atribuindo o valor salvo para a segunda variavel.
por fim.
o check b > c agora vai levar em conta que nossa variavel c não é mais 'f' e sim, 's', então:
t > s sim, t é maior que s pois vem depois então vamos trocar-las de lugar.
Depois disso imprimimos as letras em ordem a,b e c e elas estarão em ordem alfabetica.
*/
#include <stdio.h>
int main() {
    char a, b, c, temp;

    printf("Digite tres letras: ");
    scanf(" %c %c %c", &a, &b, &c);

    // Ordenação simples
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }

    printf("Letras em ordem alfabetica: %c %c %c\n", a, b, c);
}