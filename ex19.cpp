#include <stdio.h>
#include <locale.h>

int pegarInt( char * );
int * multiplicarLinhaMatriz( int, int, int m[3][3], int v[3] );

int main()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português

      int m[3][3];
      for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                  printf("insira um valor na l.%d e c.%d da matriz.\n", i+1, j+1);
                  scanf("%d", &m[i][j]);
            }
      }
      int r[3];

      char nMsg[] = "Insira o numero multiplicador\n";
      int n = pegarInt(nMsg);
      char linhaMsg[] = "Insira a linha que deseja multiplicar (0, 1, 2)\n";
      int l = pegarInt(linhaMsg);

      multiplicarLinhaMatriz( n, l, m, r);

      printf("\nresultado foi {%d, %d, %d}\n", r[0], r[1], r[2]);

      return 0;
}

int * multiplicarLinhaMatriz( int n, int l, int m[3][3], int v[3] ) {
      //n: multiplicando; l: coluna multiplicada; m: matriz; v: vetor resultado;
      for (int i = 0; i < 3; i++) {
            v[i] = m[l][i];
      }
      return v;
}

int pegarInt( char *msg ) {
	int n;
	printf("%s", msg);
	scanf("%d", &n);
	return n;
}
