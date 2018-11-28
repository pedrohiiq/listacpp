#include <stdio.h>
#include <cmath>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
    int a, b, c, r, s, d;

    printf("Insira um numero inteiro:\n");
    scanf("%d", &a);
    printf("Insira um segundo numero inteiro:\n");
    scanf("%d", &b);
    printf("Insira um terceiro numero inteiro:\n");
    scanf("%d", &c);

    r = pow( (a + b), 2);
    s = pow( (b + c), 2);
    d = (r + s) / 2;

    printf("\n(%d + %d)^2 + (%d + %d)^2 / 2 = %d\n", a, b, b, c, d);

    //r = (a + b) ^ 2
    //s = (b + c) ^ 2
    //d = (r + s) / 2 =>
    //d = (pow(a + b, 2) + pow(b + c, 2)) / 2
    //a expressao dada na lista.

    return 0;
}

