/* Receber do teclado um nome e imprimir tantas vezes quantos forem seus caracteres.
*
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Informe um nome: ");
	char nome[25];
	fgets(nome, 25, stdin);

	int i;
	int totalDeCaracteres = 0;

	for(i = 0; nome[i] != '\n'; i++)
	{
		if(nome[i] != ' ' && nome[i] != '\n')
		{
			totalDeCaracteres += 1;
		}
	}

	for(i = 0; i < totalDeCaracteres;  i++)
	{
		printf("%d - %s", (i + 1), nome);
	}

	printf("\n\n");
	return 0;
}
