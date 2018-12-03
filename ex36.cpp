#include <iostream>

int pegarInt();
void setInt( int * );
void printTabuada( int );

int main() {
	int n;
	setInt( &n );
	printTabuada( n );
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
