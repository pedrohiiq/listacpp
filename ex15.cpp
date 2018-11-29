#include <stdio.h>
#include <locale.h>

int pegarInt( char * );

int main()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português

      char msg1[] = "Insira um numero inteiro\n";
      int x = pegarInt(msg1); //x: base.
      char msg2[] = "Insira agora um inteiro nao negativo\n";
      int n = pegarInt(msg2); //n: expoente.

      if (n >= 0) {

            int r = 1;
            for (int i = 0; i < n; i++) {
                  r *= x;
            }

            printf("\n%d^%d = %d\n", x, n, r);
      } else {
            printf("\nO segundo numero entrado nao atende o requisito.\n");
      }

      return 0;
}

int pegarInt( char *msg ) {
	int n;
	printf("%s", msg);
	scanf("%d", &n);
	return n;
}
