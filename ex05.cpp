#include <stdio.h>
#include <locale.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
      
      float custoFabrica, custoDistribuidor, impostos, precoConsumo;
      int taxaDistribuidor = 28;
      int taxaImpostos = 45;

      printf( "Insira o custo de fabrica do carro:\n" );
      scanf( "%f", &custoFabrica );

      custoDistribuidor = custoFabrica * ( (float)taxaDistribuidor / 100 );
      impostos = custoFabrica * ( (float)taxaImpostos / 100 );
      precoConsumo = custoFabrica + impostos + custoDistribuidor;

      printf( "Com custo de fabrica de %.2f, impostos de %d%%\ne taxa do distribuidor de %d%%, o preco de consumo desse veiculo e de %.2f\n", custoFabrica, taxaImpostos, taxaDistribuidor, precoConsumo );

      return 0;
}
