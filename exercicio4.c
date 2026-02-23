#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	// váriaveis 
	float base, altura, area;
	// entrada
	printf("digite o valor da base:  ");
	scanf("%f", &base);
	printf("digite o valor da altura:  ");
	scanf("%f", &altura);
	// calculo
	area = altura * base;
	// saída
	printf("a área do retângulo é de %.2f. \n", area);
	
	return 0;
}
