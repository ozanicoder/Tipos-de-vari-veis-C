#include<stdio.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL,"portuguese");
	float n;
	printf("Digite um número décimal de ponto flutuante:\n");
	scanf("%f",&n);
	printf("O seu número escolhido é %.2f",n);
}