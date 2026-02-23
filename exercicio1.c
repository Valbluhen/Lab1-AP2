#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	// variáveis
	float salarioM, salarioB, quantidade;
	// entrada
	printf("Digite o valor do salario minimo:  ");
	scanf("%f", &salarioM);
	printf("Digite o valor do salario bruto:  ");
	scanf("%f", &salarioB);
	// cálculo
	quantidade = salarioB/salarioM;
	// saída
	printf("O valor total do salario é %.2f salarios minimos. \n", quantidade);
	
	return 0;
	
}
