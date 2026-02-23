#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	// váriaveis
	int numero;
	// entrada
	printf("Digite um número inteiro:  ");
	scanf("%d", &numero);
	// saída
	if (numero % 5 == 0) {
		printf("O número %d é multiplo de 5. \n");
	} else {
		printf("O número %d não é multiplo de 5. \n");
	}
	
	return 0;
	
}

	
