#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	char lp;
	printf("Insira a sua letra preferida:\n");
	scanf("%c",&lp);
	printf("A sua letra preferida é %c \n", lp);
}