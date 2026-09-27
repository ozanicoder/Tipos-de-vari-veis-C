#include<stdio.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL,"portuguese");
	int n;
	printf("Digite o seu número preferido nº:\n");
	scanf("%d",&n);
	printf("O seu número preferido é %d",n);
}