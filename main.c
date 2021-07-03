#include <stdio.h>

int main() {
	char input;
	printf("Programa iniciado por favor entre com um comando: ");
	do {
		scanf("%c", &input);
		switch (input) {
			case 'Q':
				printf("Executar processo\n");
				break;
			case 'U':
				printf("Desbloquear processo\n");
				break;
			case 'P':
				printf("Imprimi o estado atual\n");
				break;
			case 'T':
				printf("Reportar o tempo e finaliza o app\n");
				break;
		}
	} while (input != 'T');

	printf("Finalizando o programa...");
}