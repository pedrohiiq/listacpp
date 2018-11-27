#include <stdio.h>
#include <iostream>
#include <string.h>

void ex8();
void ex9();
void ex10();
void ex11();
void ex12();
void ex13();
void ex14();
void ex15();
void ex16();
void ex17();
void ex18();
void ex19();
void ex20();
void ex21();
void ex22();
void ex23();
void ex24();
void ex25();
void ex26();
void ex27();

int main() {
	ex20();
	return 0;
}

int pegarInt(char* msg) {
	int n;
	printf(msg);
	scanf("%i", &n);
	return n;
}

void ex8() {
	char msg[] = "Digite a idade do nadador\n\0"; //array
	//problemas em definir char msg[20] = "abcbdbdbad"; e depois passar como parametro p/ funcao.
	//char msg2[] = "hello world how are you doin"; //num e um ponteiro? :o
	//char* msg2 = "hellow world..." //compilador diz que isso e ultrapassado.
	//printf("sizeof msg[30] -> %i\nsizeof char msg2[] -> %i\n", sizeof msg, sizeof &msg2);
	int idade = pegarInt(msg);
	int idadeValida = 1;
	char categoria[20];
	if (idade >=5 && idade < 8) {
		strcpy(categoria, "Infantil A\0");
	}
	else if (idade >= 8 && idade < 11) {
		strcpy(categoria, "Infantil B\0");
	}
	else if (idade >= 11 && idade < 14) {
		strcpy(categoria, "Juvenil A\0");
	}
	else if (idade >= 14 && idade < 18) {
		strcpy(categoria, "Juvenil B\0");
	}
	else if (idade >= 18 && idade < 130) {
		strcpy(categoria, "Adulto\0");
	}
	else {
		printf("Idade invalida");
		idadeValida = 0;
	}
	if (idadeValida) {
		printf("A categoria desse nadador e %s", categoria);		
	}
	else {
		printf("Idade invalida");
	}
}

void ex13() {
	char msg[] = "Insere um inteiro ae\n";
	int n = pegarInt(msg);
	int nImpressos = 0;
	int i = 1;
	while (nImpressos < n) {
		if (i % 2 == 1) {
			printf("%i", i);
			nImpressos++;
			if (nImpressos < n) {
				printf(", ");
			}
			else {
				printf(".");
			}
		}
		i++;
	}
}

void ex14() {
	char msg1[] = "insira a largura do bloco\n";
	int width = pegarInt(msg1);
	char msg2[] = "insira a altura do bloco\n";
	int height = pegarInt(msg2);	
	printf("\n");
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (i == 0 || i == height - 1) {
				printf("x");
			}
			else {
				if (j == 0 || j == width - 1) {
					printf("x");
				} else {
					printf(" ");
				}
			}
		}
		printf("\n");
	}
}

void ex15() {
	char msg1[] = "Insere um inteiro ae\n";
	int x = pegarInt(msg1);
	char msg2[] = "Insere um inteiro nao negativo ae\n";
	int n = pegarInt(msg2);
	int r = 1;
	for (int i = 0; i < n; i++) {
		r *= x;
	}
	printf("%i^%i = %i", x, n, r);
}

void alterarMatriz(int *m[][], int l, int c) {
	
}

void ex20() {
	int linhas = 3; int colunas = 3;
	int m[linhas][colunas];
	for (int i = 0; i < linhas; i++) {
		for (int j = 0; j < colunas; j++) {
			printf("insira o n. na l. %i, c. %i\n", i + 1, j + 1);
			scanf("%i", &m[i][j]);
		}
	}
}
