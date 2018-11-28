#include <stdio.h>

struct hm {
	int horas;
	int minutos;
};

hm transformarMinutosEmHM( int );

//typedef hm horaminuto;
//acima vai criar uma alias de hm chamada horaminuto
//testando alias! ignore a linha acima!

int main() {
	int m;
	printf("digita uma quantidade de minutos ae\n");
	scanf("%d", &m);
	hm r = transformarMinutosEmHM( m );
	printf("\ndeu %d hora(s) e %d minuto(s)\n", r.horas, r.minutos);
	
	return 0;
}

hm transformarMinutosEmHM( int minutosEntrados ) {
	int horas, minutos;
	horas = minutosEntrados / 60;
	minutos = minutosEntrados - (horas * 60);
	hm r;
	r.horas = horas;
	r.minutos = minutos;
	return r;
}