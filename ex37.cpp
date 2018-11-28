#include <stdio.h>
#include <algorithm>

struct dma {
	int dia;
	int mes;
	int ano;
};

int pegarInt( char * );
int tradDias( int, int, int );
void dmaInit( dma * );
void printDmaP( dma * );
void printDma( dma );
int dmaDiff( dma, dma );

int main() {
	struct dma data1, data2;
	dmaInit( &data1 );
	dmaInit( &data2 );
	printf("\na diferenca entre as duas datas entradas é de %d dias\n", dmaDiff(data1, data2));
	return 0;
}

int pegarInt( char *msg ) {
	int tmp;
	printf("%s", msg);
	scanf("%d", &tmp);
	return tmp;
}

void dmaInit( dma * data ) {
	data -> dia = pegarInt("Insira um dia\n");
	data -> mes = pegarInt("Insira um mes\n");
	data -> ano = pegarInt("Insira um ano\n");
}

int tradDias( int dias, int meses, int anos ) {
	return dias + (meses * 30) + (anos * 365);
}

void printDmaP( dma * data ) {
	printf("dia %d, mes %d, ano %d\n", data -> dia, data -> mes, data -> ano);
}

//sem usar ponteiro (comfy af)
void printDma( dma data ) {
	printf("dia %d, mes %d, ano %d\n", data.dia, data.mes, data.ano);
}

int dmaDiff( dma data1, dma data2 ) {
	int anos, meses, dias;
	anos = std::max( data2.ano, data1.ano ) - std::min( data2.ano, data1.ano );
	meses = std::max( data2.mes, data1.mes ) - std::min( data2.mes, data1.mes );
	dias = std::max( data2.dia, data1.dia ) - std::min( data2.dia, data1.dia );
	// modo melhor de fazer ->
	return tradDias(dias, meses, anos);
}
