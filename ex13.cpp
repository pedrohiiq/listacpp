#include <stdio.h>
#include <locale.h>

int pegarInt( char * );

int main() {
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	char msg[] = "Insira um numero inteiro positivo\n";
	int n = pegarInt(msg);
	int nImpressos = 0;

      printf("\n");
      if (n > 0) {
            int i = 1;
            while (nImpressos < n) {
                  if (i % 2 == 1) {
                        printf("%i", i);
                        nImpressos++;
                        if (nImpressos < n) {
                              printf(",");
                        }
                        else {
                              printf(".\n");
                        }
                  }
                  i++;
            }
      } else {
            printf("O numero entrado nao e positivo.\n");
      }

	return 0;
}

int pegarInt( char *msg ) {
	int n;
	printf("%s", msg);
	scanf("%d", &n);
	return n;
}
