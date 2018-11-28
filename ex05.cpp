#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
      
      float custoFabrica, custoDistribuidor, impostos, precoConsumo;
      int taxaDistribuidor = 28;
      int taxaImpostos = 45;

      printf( "Insira o custo de fabrica do carro:\n" );
      scanf( "%f", &custoFabrica );

      custoDistribuidor = custoFabrica * ( (float)taxaDistribuidor / 100 );
      impostos = custoFabrica * ( (float)taxaImpostos / 100 );
      precoConsumo = custoFabrica + impostos + custoDistribuidor;

      printf( "\nCom custo de fabrica de %.2f, impostos de %d%%\ne taxa do distribuidor de %d%%, o preco de consumo desse veiculo fica em %.2f\n", custoFabrica, taxaImpostos, taxaDistribuidor, precoConsumo );

      //calculo: pCon = cFab + tDist(cFab) + tImp(cFab)
      //onde pCon = preco de consumo, cFab = custo de Fabrica,
      //tDis = taxa do distribuidor, e tImp , taxa de impostos.
      //tendo em mente que as taxas sao porcentagens.
      //
      //da pra fatorar p/ simplificar isso, mas num apliquei no codigo.
      //substituindo os nomes p/ facilitar nesse calculo :|
      //
      //    pc = cf + td * cf + ti + cf =>
      //    pc = cf + cf( td + ti ) =>
      //
      //da pra fatorar mais isso? :thinking:
      //
      // cf( 1 + td + ti) ou cf( 1 + (td + ti) )
      //
      //acho que assim ._.

      return 0;
}
