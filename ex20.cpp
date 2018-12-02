#include <stdio.h>

int pegarInt( char *msg );
int calcularIndex( int, int, int ); //matriz
void mudarM( int m[][3], int, int, int );
void mudarMat(int, int, int, int *);
void preencherMatriz( int *m, int L, int C );
void mostrarMatriz( int *, int, int );

int main() {
      int linhas = 3, colunas = 3;
      int m[linhas][colunas];
      preencherMatriz(*m, linhas, colunas);
	return 0;
}

int pegarInt( char *msg ) {
	int n;
	printf("%s", msg);
	scanf("%d", &n);
	return n;
}

int calcularIndex( int r, int c, int C ) {
      //calcula a posicao dos indexes da matriz quando ela esta
      //na forma de vetor, usando as informacoes linha (l), coluna (c)
      //(da posicao desejada) e colunas (C) contidas na matriz.
	return (r * C) + c;
}

void preencherMatriz( int *m, int L, int C ) {
      int tmp;
      for (int i = 0; i < L; i++) {
            for (int j = 0; j < L; j++) {
			printf("insira o n. na l. %i, c. %i\n", i + 1, j + 1);
                  scanf("%d", &tmp);
                  m[calcularIndex(i, j, C)] = --tmp; //pre decremento (retorna depois)
            }
      }
}

void mostrarMatriz( int *m, int L, int C ) {
      for (int i = 0; i < L; i++) {
            for (int j = 0; j < L; j++) {
                  printf("%d", m[calcularIndex(i, j, C)]);
                  if (i != C -1) {
                        printf(", ");
                  } else {
                        printf("\n");
                  }
            }
      }
}

void mudarMat( int n, int r, int c, int* m ) {
	m[calcularIndex(r, c, 3)] = n;
}

//--i -> pre decremento (reduz o valor antes, retorna depois).
//i-- -> pos decremento retorna primeiro, reduz depois.
