#include <stdio.h>
#include <locale.h>

int pegarInt();

int main() {
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
    int valor, troco100, troco10, troco1;
	  valor = pegarInt();
    troco100 = valor / 100;
    troco10 = (valor % 100) / 10;
    troco1 = (valor % 100) % 10;
    printf("o troco será %d notas de 100, %d de 10, e %d de 1\n", troco100, troco10, troco1);
	return 0;
}

int pegarInt() {
    int n;
    printf("Insira um valor inteiro\n");
    scanf("%d", &n);
    return n;
}
