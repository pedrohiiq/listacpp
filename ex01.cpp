#include <stdio.h>
#include <cmath>
#include <iostream>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	int p1x, p1y, p2x, p2y;
	
	std::cout << "Insira a posicao x do ponto 1\n";
	scanf("%d", &p1x);
	std::cout << "Insira a posicao y do ponto 1\n";
	scanf("%d", &p1y);

	std::cout << "Insira a posicao x do ponto 2\n";
	scanf("%d", &p2x);
	std::cout << "Insira a posicao y do ponto 2\n";
	scanf("%d", &p2y);
	std::cout << std::endl;

	float resultado = std::sqrt( pow( (p2x - p1x), 2 ) + pow( (p2y - p1y), 2) );
	printf("a distancia entre os pontos (y=%d, x=%d) e (y=%d, x=%d) é de %f\n", p1y, p1x, p2y, p2x, resultado);

	//d = sqrt( (x2 - x1)**2 + (y2 - y1)**2 )
      //esse e o calculo pedido no exercicio.

    return 0;
}

