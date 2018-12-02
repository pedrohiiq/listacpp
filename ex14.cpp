#include <stdio.h>
int pegarInt( char * );

int main() {
	char msg1[] = "insira a largura do quadro\n";
	int width = pegarInt(msg1);
	char msg2[] = "insira a altura do quadro\n";
	int height = pegarInt(msg2);	
	printf("\n");
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (i == 0 || i == height - 1) {
				printf("x");
			}
			else {
				if (j == 0 || j == width - 1) {
					printf("x");
				} else {
					printf(" ");
				}
			}
		}
		printf("\n");
	}
      return 0;
}
 
int pegarInt( char *msg ) {
      int n;
      printf("%s", msg);
      scanf("%d", &n);
      return n;
}
