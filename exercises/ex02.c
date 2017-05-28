#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	printf("Informe um nome: ");
	
	char nome[100];
	fgets(nome, 100, stdin);

	int i = 0;
	for(i = 0; i <= strlen(nome); i++)
	{
		if((i + 1) % 2 != 0)
		{
			printf("%c ", nome[i]);
		}
	}

	printf("\n\n");

	return 0;
}
