#include <stdio.h>
#include <locale.h>

int pegarInt();
void trocarValores( int *, int * );

int main() {
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
    int n = pegarInt();
    int m = pegarInt();
    printf("valores nas variáveis n: %d, m:%d\n", n, m);
    trocarValores(&n, &m);
    printf("valores nas variáveis n: %d, m:%d\n", n, m);
    return 0;
}

int pegarInt() {
    int n;
    printf("Insira um valor inteiro\n");
    scanf("%d", &n);
    return n;
}

void trocarValores( int *a, int *b ) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
