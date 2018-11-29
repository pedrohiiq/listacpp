#include <stdio.h>
#include <locale.h>
#include <math.h>

//faltou checar se media harmonica esta dando resultado correto.

int pegarInt( char* );
float pegarFloat( char* );
float mediaAritmetica( float, float, float );
float mediaPonderada( float, float, float, int, int, int );
float mediaHarmonica( float, float, float );

int main() {
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
      float nota1, nota2, nota3;
      char msg[] = "Insira uma nota (n. de 0 a 10)\n";
      int opt;

      nota1 = pegarFloat(msg);
      nota2 = pegarFloat(msg);
      nota3 = pegarFloat(msg);

      printf("\nopcao 1: media aritmetica\nopcao 2: media ponderada\nopcao 3: media harmonica\n");
      scanf("%d", &opt);
      switch(opt) {
            case 1:
                  printf("\nMedia aritmetica: %.1f\n", mediaAritmetica(nota1, nota2, nota3));
                  break;
            case 2:
                  {
                        int peso1, peso2, peso3;
                        char pesoMsg[] = "\ninsira um peso de nota\n";
                        peso1 = pegarInt(pesoMsg);
                        peso2 = pegarInt(pesoMsg);
                        peso3 = pegarInt(pesoMsg);
                        printf("\nMedia ponderada: %.1f\n", mediaPonderada(nota1, nota2, nota3, peso1, peso2, peso3));
                        break;
                  }
            case 3:
                  printf("\nMedia harmonica: %.1f\n", mediaHarmonica(nota1, nota2, nota3));
                  break;
            default:
                  printf("\nOpcao invalida. Programa terminado.\n");
                  break;
      }
      
      return 0;
}

int pegarInt( char* msg ) {
	int n;
	printf("%s", msg);
	scanf("%d", &n);
	return n;
}

float pegarFloat( char* msg ) {
	float n;
	printf("%s", msg);
	scanf("%f", &n);
	return n;
}

float mediaAritmetica( float n1, float n2, float n3 ) {
      return (n1 + n2 + n3) / 3;
      //calculo: (x1 + x2 + x3 + ... + xn) / n
}

float mediaPonderada( float n1, float n2, float n3 , int p1, int p2, int p3 ) {
      return (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);
      //calculo: (x1 * p1 + x2 * p2 + ... + xn * pn) / (p1 + p2 + ... + pn)
      //trata-se do famoso calculo de nota com peso...
}

float mediaHarmonica( float n1, float n2, float n3 ) {
      printf("deu %f", pow( (pow(n1, -1) + pow(n2, -1) + pow(n3, -1)) / 3, -1));
      return 1;
      //calculo: (x1**-1 + x2**-1 + ... + xn**-1) / n
      //que pode tambem ser representado como:
      //n / ((1/x1) + (1/x2) + ... + (1/xn))
      //inverso da media aritmetica do inverso dos numeros?
      //media aritmetica do inverso dos numeros?
      //fazer calculo no papel depois
}
