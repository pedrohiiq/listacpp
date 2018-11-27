// ConsoleApplication12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>


int main()
{
	int a, b, c, r, s, d;
	printf_s("Insira um numero inteiro:\n");
	scanf_s("%d", &a);
	printf_s("Insira um segundo numero inteiro:\n");
	scanf_s("%d", &b);
	printf_s("Insira um terceiro numero inteiro:\n");
	scanf_s("%d", &c);
	r = pow( (a + b), 2);
	s = pow( (b + c), 2);
	d = (r + s) / 2;
	printf_s("(%d + %d)^2 + (%d + %d)^2 / 2 = %d", a, b, b, c, d);
	
	return 0;
}

