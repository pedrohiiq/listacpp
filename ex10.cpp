#include <stdio.h>
#include <locale.h>

int pegarInt( char * );
float pegarFloat( char * );

int main()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
      int validId = 1, opt;
      float pU, quanti;

      printf("Codigos disponiveis:\n\t987, 1101, 1324, 6548, 7623\n");
      char msg[] = "\nInsira um dos codigos acima:\n";
      opt = pegarInt(msg);
      switch (opt) {
            case 1001:
            case 987:
                  pU = 5.32;
                  break;
            case 1324:
            case 7623:
                  pU = 5.45;
                  break;
            case 6548:
                  pU = 2.37;
                  break;
            default:
                  validId = 0;
                  break;
      }
      if (validId) {
            char quantiMsg[] = "Insira a quantidade comprada\n";
            quanti = pegarFloat(quantiMsg);
            printf("\nO preco unitario do produto %d e de %.2f. %.2f unidades compradas resulta em R$%.2f.\n", opt, pU, quanti, pU * quanti );
      } else {
            printf("\nId de produto invalido. Fim do programa.\n");
      }

      return 0;
}

int pegarInt( char *msg ) {
      int n;
      printf("%s", msg);
      scanf("%d", &n);
      return n;
}
float pegarFloat( char *msg ) {
      float n;
      printf("%s", msg);
      scanf("%f", &n);
      return n;
}
