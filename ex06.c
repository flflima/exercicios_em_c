/*
*
*/
#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main()
{
	printf("Informe o nome: ");
	char nome[20];
	fgets(nome, 20, stdin);

	printf("Informe o sexo (M/F): ");
	char sexo;
	scanf("%c", &sexo);

	printf("Informe a idade: ");
	int idade;
	scanf("%d", &idade);

	if ((sexo == 'F' || sexo == 'f') && idade < 25)
	{
		removeQuebraLinhaString(nome);

		printf("%s - ACEITA\n", nome);
	}
	else
	{
		printf("NÃO ACEITA\n");
	}

	return 0;
}
