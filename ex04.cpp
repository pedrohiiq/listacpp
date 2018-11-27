// ConsoleApplication14.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <locale.h>

float pegarNota()
{
	float nota;
	printf("Insira uma das notas do aluno:\n");
	scanf("%f", &nota);
      return nota;
}
int pegarPeso()
{
	int peso;
	printf("Insira o respectivo peso da nota:\n");
	scanf("%d", &peso);
      return peso;
}

int main()
{
      setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português

      float nota1, nota2, nota3, media;
      int peso1, peso2, peso3;

      nota1 = pegarNota();
      peso1 = pegarPeso();
      nota2 = pegarNota();
      peso2 = pegarPeso();
      nota3 = pegarNota();
      peso3 = pegarPeso();

      int somaPesos = peso1 + peso2 + peso3;
      
      //calculo de nota = notaM * pesoM + notaN * pesoN + notaO * pesoO
      
      media = ( nota1 * peso1 + nota2 * peso2 + nota3 * peso3 ) / somaPesos;

      printf( "considerando as notas e seus pesos, o aluno tem media de %.2f\n", media );

      return 0;


}

