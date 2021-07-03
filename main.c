#include <stdio.h>

int main() {
	char input;
	printf("Programa iniciado por favor entre com um comando: ");
	do {
		scanf("%c", &input);
		switch (input) {
			case 'Q':
				printf("Entrou com Q\n");
				break;
			case 'U':
				printf("Entrou com U\n");
				break;
			case 'P':
				printf("Entrou com P\n");
				break;
			case 'T':
				printf("Entrou com T\n");
				break;
		}
	} while (input != 'T');

	printf("Finalizando o programa...");
}