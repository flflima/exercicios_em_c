
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf ("Informe um nome: ");
	char nome[100];
	fgets(nome, 100, stdin);

	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%c", nome[i]);
	}

	printf("\n\n");

	// printf(nome);
	return 0;
}
