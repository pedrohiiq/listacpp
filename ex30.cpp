#include <stdio.h>
#include <locale.h>
#include <string.h>

//isso nao está pronto!!!!
int pegarInt();
bool eTriangulo (float, float, float);

int main() {
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
    int quantiX, quantiN;
	int n = pegarInt();
    if (n < 2 || n > 20) {
    	printf("numero entrado invalido! adeus mundo cruel!\n");
    	return 0;
	}
	quantiX = 0;
	for (int i = n; i > 0; i--) {
		for (int j = 0; j < quantiX; j++) {
			printf("x");
		}
		for (int j = 0; j < i; j++) {
			printf("%d", j+1);
		}
		printf("\n");
		quantiX++;
	}
	return 0;
}

int pegarInt() {
    int n;
    printf("Insira um valor inteiro entre 2 e 20\n");
    scanf("%d", &n);
    return n;
}

bool eTriangulo(float x, float y, float z) {
	return ((x < (y + z)) && (y < (x + z)) && (z < (x + y)));
}
