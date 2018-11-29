#include <stdio.h>
#include <iostream>
#include <string.h>
#include <locale.h>

int pegarInt( char* );

int main() {
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português

	char msg[] = "Digite a idade do nadador\n\0";

	int idade = pegarInt(msg); //msg entra sem problemas aqui, pois e um vetor (ponteiro)
	int idadeValida = 1; //partimos assumindo que e valido, caso realmente nao seja,
      //trocaremos o valor dessa variavel.
	char categoria[20];

	if (idade >=5 && idade < 8) {
		strcpy(categoria, "Infantil A\0");
	}
	else if (idade >= 8 && idade < 11) {
		strcpy(categoria, "Infantil B\0");
	}
	else if (idade >= 11 && idade < 14) {
		strcpy(categoria, "Juvenil A\0");
	}
	else if (idade >= 14 && idade < 18) {
		strcpy(categoria, "Juvenil B\0");
	}
	else if (idade >= 18 && idade < 130) {
		strcpy(categoria, "Adulto\0");
	}
	else {
		idadeValida = 0; //assim estamos considerando valido qualquer idade
            //em [5,130[ (intervalo que vai de 5 a 130, incluindo 5 e excluindo 130)
	}
	if (idadeValida) {
		printf("\nA categoria desse nadador e %s\n", categoria);		
	}
	else {
		printf("\nIdade invalida\n");
	}
	return 0;
}

int pegarInt( char* msg ) {
	int n;
	printf("%s", msg);
	scanf("%i", &n);
	return n;
}

      //problemas e questoes de curiosidade. (desorganizado)
	//problemas em definir char msg[20] = "abcbdbdbad"; e depois passar como parametro p/ funcao.
	//char msg2[] = "hello world how are you doin"; //num e um ponteiro? :o
	//char* msg2 = "hellow world..." //compilador diz que isso e ultrapassado.
	//printf("sizeof msg[30] -> %i\nsizeof char msg2[] -> %i\n", sizeof msg, sizeof &msg2);
