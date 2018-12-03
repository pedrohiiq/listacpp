#include <stdio.h>
#include <locale.h>
#include <string.h>

float pegarLado();
bool eTriangulo (float, float, float);

int main() {
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
    float ladoA, ladoB, ladoC;
	ladoA = pegarLado();
    ladoB = pegarLado();
    ladoC = pegarLado();
	if ( !eTriangulo( ladoA, ladoB, ladoC ) ) {
    	printf("Os dados entregues não formam um triângulo válido!\n");
	} else {
		char t[20];
		if (ladoA == ladoB && ladoB == ladoC) {
			strcpy(t, "equilátero");
		} else if ( ladoA == ladoB || ladoA == ladoC || ladoB == ladoC) {
			strcpy(t, "isóscele");
		} else {
			strcpy(t, "escaleno");
		}
		printf("O triangulo é %s", t);
	}
	return 0;
}

float pegarLado() {
    float n;
    printf("Insira o comprimento de um lado do triangulo\n");
    scanf("%f", &n);
    return n;
}

bool eTriangulo(float x, float y, float z) {
	return ((x < (y + z)) && (y < (x + z)) && (z < (x + y)));
}
