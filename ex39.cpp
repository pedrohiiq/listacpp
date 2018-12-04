#include <iostream>
#include <string>

/*isso ainda nao roda, falta pensar, e executar
 *a logica de lista encadeada, alem do tal do
 *calculo IMC */

struct node {
	Pessoa pp;
	node *next;
};

struct Pessoa {
	char nome[60];
	char cpf[12];
	char sexo;
	float altura;
	float peso;
};

int pegarInt();
void setInt( int * );
void printTabuada( int );
void coletarNome( Pessoa );
void coletarCpf( Pessoa * );
void coletarSexo( Pessoa * );
void coletarAltura( Pessoa * );
void coletarPeso( Pessoa * );
void PessoaInit( Pessoa * );

int main() {
	
	do {
		node nodeAtual
		PessoaInit( *nodeAtual.pp )
		
		std::cout << "Deseja continuar preenchendo dados? (y/n)" << std::endl;
		std::cin >> resposta;
		if ( resposta == 'y' ) {
			continuar = true;
		} else { //se nao quiser mais adicionar dados, esse sera o fim da lista.
			nodeAtual.next = NULL;
			continuar = false;
		}
		
	} while ( continuar );
	*/
}

int pegarInt() {
	int n;
	std::cout << "Insira um numero inteiro" << std::endl;
	std::cin >> n;
	return n;
}

void setInt( int * n ) {
	std::cout << "Insira um numero inteiro" << std::endl;
	std::cin >> *n;
}

void printTabuada( int n ) {
	for (int i = 1; i <= n; i++) {
		std::cout << n << " * " << i << " = " << n * i << std::endl;
	}
}

void coletarNome( Pessoa *pp ) {
	std::cout << "Insira o nome desse cidadao" << std::endl;
	gets( pp -> nome );
	std::cout << pp -> nome;
}

void coletarCpf( Pessoa *pp ) {
	std::cout << "Insira o cpf desse cidadao" << std::endl;
	std::cin >> pp -> cpf;
}

void coletarSexo( Pessoa *pp ) {
	std::cout << "Insira o sexo (m/f)" << std::endl;
	std::cin >> pp -> sexo;
}
void coletarAltura( Pessoa *pp ) {
	std::cout << "Insira a altura desse cidadao" << std::endl;
	std::cin >> pp -> altura;
}

void coletarPeso( Pessoa *pp ) {
	std::cout << "Insira o peso desse cidadao" << std::endl;
	std::cin >> pp -> peso;
}

void PessoaInit( Pessoa *pp ) {
	coletarNome( pp );
	coletarCpf( pp );
	coletarSexo( pp );
	coletarAltura( pp );
	coletarPeso( pp );
}

bool eqArrays( int *arr1, int *arr2, int size ) {
	for (int i = 0; i < size; i++) {
		if (arr1[i] != arr2[i]) {
			return false;
		}
	}
	return true;
}
