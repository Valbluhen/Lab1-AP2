#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	// váriaveis
	float nota1, nota2, nota3, media;
	//entrada
	printf("digite o valor da primeira nota:  ");
	scanf("%f", &nota1);
	printf("digite o valor da segunda nota:  ");
	scanf("%f", &nota2);
	printf("digite o valor da terceira nota:  ");
	scanf("%f", &nota3);
	//cálculo
	media = (nota1 + nota2 + nota3) / 3;
	//saída
	printf("a média entre as notas é de %.2f. \n", media);
	
	return 0;
}
