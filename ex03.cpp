// ConsoleApplication13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	int dadoRecebido, tmp, anos, meses, dias;
	printf_s("Insira sua idade em dias\n");
	scanf_s("%d", &dadoRecebido);
	tmp = dadoRecebido;
	anos = tmp / 365;
	tmp = tmp % 365;
	meses = tmp / 30;
	tmp = tmp % 30;
	dias = tmp;
	printf_s("Com %d dias de idade, você tem %d ano(s), %d mes(es) e %d dia(s) de idade.", tmp, anos, meses, dias);
	
	return 0;
}

