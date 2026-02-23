#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	// váriaveis
	int horas, minutosP;
	// entrada
	printf("Que horas são?");
	scanf("%d", &horas);
	// calculo
	minutosP = horas * 60;
	//saída
	printf("Ja se passaram %d minutos desde o ínicio do dia. \n", minutosP);
	
	return 0;
}
	
