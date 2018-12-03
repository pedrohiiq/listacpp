#include <stdio.h>
//aqui eu me rendo e resolvo esse problema usando structs.

struct matriz {
      int l;
      int c;
      int * m;
};

void matrizInit( matriz *, int*, int, int );
int pegarInt( char * );
int calcularIndex( int, int, int );
void mudarMat( matriz *, int, int, int );
void preencherMatriz( matriz * );
void mostrarMatriz( matriz );
bool eMatrizQuadrada( matriz );
void mostrarMatrizTransposta( matriz );

int main() {
      char msg1[] = "Quantas linhas e colunas tera a matriz\n";
      int l = pegarInt(msg1);
      int c = l;
      int m[l][c];
      matriz m1;
      matrizInit( &m1, *m, l, c );
      preencherMatriz( &m1 );
      printf("matriz dada\n");
      mostrarMatriz( m1 );
      if (eMatrizQuadrada( m1 )) {      
            printf("matriz transposta\n");
            mostrarMatrizTransposta( m1 );
      } else {
	    printf("a matriz tem que ser quadrada!");
      }
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

void preencherMatriz( matriz * container ) {
      int tmp;
      for (int i = 0; i < container -> l; i++) {
            for (int j = 0; j < container -> c; j++) {
			printf("insira o n. na l. %d, c. %d\n", i + 1, j + 1);
                  scanf("%d", &tmp);
                  mudarMat( container, i, j, tmp );
            }
      }
}

void mostrarMatriz( matriz container ) {
      printf("\n");
      for (int i = 0; i < container.l; i++) {
            for (int j = 0; j < container.c; j++) {
                  printf("%3d", container.m[calcularIndex(i, j, container.c)]);
                  if (j != container.c -1) {
                        printf(", ");
                  } else {
                        printf("\n");
                  }
            }
      }
      printf("\n");
}

void matrizInit( matriz *container, int *m, int L, int C ) {
      container -> l = L;
      container -> c = C;
      container -> m = m;
}

bool eMatrizQuadrada( matriz container ) {
      return (container.l == container.c);
}

void mostrarMatrizTransposta( matriz container ) {
      printf("\n");
	  for (int i = 0; i < container.l; i++) {
            for (int j = 0; j < container.c; j++) {
                  printf("%3d", container.m[calcularIndex(j, i, container.c)]);
                  if (j != container.c -1) {
                        printf(", ");
                  } else {
                        printf("\n");
                  }
            }
      }
}

void mudarMat( matriz * container, int l, int c, int n ) {
      container -> m[calcularIndex(l, c, container -> c)] = n;
}

//--i -> pre decremento (reduz o valor antes, retorna depois).
//i-- -> pos decremento retorna primeiro, reduz depois.
