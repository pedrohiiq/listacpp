#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	int totalDias, tmp, anos, meses, dias;

	printf("Insira sua idade em dias\n");
	scanf("%d", &totalDias);
	tmp = totalDias;
	anos = tmp / 365;
	tmp = tmp % 365;
	meses = tmp / 30;
	tmp = tmp % 30;
	dias = tmp;
	printf("\nCom %d dias de idade, você tem %d ano(s), %d mes(es) e %d dia(s) de idade.\n", totalDias, anos, meses, dias);
	
	return 0;
}
