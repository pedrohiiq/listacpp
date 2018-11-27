#include <locale.h>
#include <stdio.h>
#include <iostream>



void desenharCopa( int folhasCopa, int distanciaCanto, int folhasPorCamada )
{
      //cada camada aumenta a quantidade de folhas em 2,
      //dividindo por 2, sabemos quantas camadas a copa tem
      //temos que adicionar mais uma camada, pois o topo e uma
      //folha unica, que nao faz parte desse padrao.
      int camadasCopa = folhasCopa / folhasPorCamada + 1;
      char desenho[ camadasCopa ];
      int espacos, folhas, i, j;
      for ( int i = 0; i <= camadasCopa; i++ )
      {
            espacos = camadasCopa - i + distanciaCanto;
            folhas = i * folhasPorCamada + 1;
            for ( j = 0; j < espacos; j++ )
            {
                  printf( " " );
                  //desenho[ j ] = " ";
            }
            for ( ; j < espacos + folhas; j++ )
            {
                  printf( "#" );
                  //desenho[ j ] = "#";
            }
            std::cout << std::endl;
      }
}

void desenharTronco( int folhasCopa )
{
      int i, j;
      int larguraTronco = folhasCopa / 3;
      int alturaTronco = folhasCopa / 4;
      int espacos = folhasCopa / 2;
      for ( i = 0; i < alturaTronco; i++ )
      {
            for ( j = 0; j < espacos; j++ )
            {
                  printf( " " );
            }
            for ( ; j < espacos + larguraTronco; j++ )
            {
                  printf( "|" );
            }
            printf( "\n" );
      }
}

void desenharBase( int folhasCopa )
{
      return;
}


void desenharArvore()
{
      int folhasCopa = 9; int distanciaCanto = 1; int folhasPorCamada = 2;
      desenharCopa( folhasCopa, distanciaCanto, folhasPorCamada );
      desenharTronco( folhasCopa );
}
int main()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português

      desenharArvore();
      return 0;
}


/*
        # -> distancia = (folhasporcamada / 2) * (camadaAtual -1) + distanciaCanto;
       ###
      #####
     #######
    #########
   ###########
  #############
 ###############
#################

      d = 1 * 3 + 0 = 3 # calculo de baixo pra cima, precisamos do de cima pra baixo
*/

