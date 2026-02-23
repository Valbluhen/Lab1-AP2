#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	// váriaveis
	float salarioM, dolar, casas, valor_em_real, custo_casa, quantidade_casa;
	// entrada
	printf("Digite o valor do salário mínimo:  ");
	scanf("%f", &salarioM);
	printf("Digite o valor do dolar (diário):  ");
	scanf("%f", &dolar);
	// cálculo
	valor_em_real = 10000000 * dolar;
	custo_casa = salarioM * 150;
	
	quantidade_casa = valor_em_real / custo_casa;
	// saída
	printf("Quantidade de casas possíveis de construir: %.f. \n", quantidade_casa);
	
	return 0;

}
	
	
	
	
