#include <stdlib.h>
#include <stdio.h>

int main()
{
	printf("Informe seu primeiro nome: ");
	
	char nome[25];
	fgets(nome, 25, stdin);

	int i = 0;
	for(i = 0; i < 10; i++)
	{
		printf("%s\n", nome);
	}

	return 0;
}
