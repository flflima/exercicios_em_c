/* Digite um nome, calcule e mostre quantas letras tem.
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
	int totalDeLetras = 0;

	for(i = 0; nome[i] != '\n'; i++)
	{
		if(nome[i] != ' ' && nome[i] != '\n')
		{
			totalDeLetras += 1;
		}
	}

	printf("Total de letras no nome: %d.\n", totalDeLetras);

	return 0;
}
