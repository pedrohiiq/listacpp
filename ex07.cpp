#include <stdio.h>
#include <locale.h>

int pegarInt() {
      int entrada;
      printf( "Insira um n. inteiro\n" );
      scanf( "%d", &entrada );
      return entrada;
}

int main() {
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
      int a, b;

      a = pegarInt();
      b = pegarInt();
      if ( ( a % b == 0 ) || ( b % a == 0 ) ) {
            printf( "\nSao multiplos\n" );
      }
      else {
            printf( "\nNao sao multiplos\n" );
      }

      return 0;
}
