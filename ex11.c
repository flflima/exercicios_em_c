/* Criar um algoritmo que entre com uma palavra e imprima conforme exemplo a seguir:
* Exemplo: SONHO
* Como a palavra SONHO tem 5 letras a impressão ficaria assim:
* SONHO 
* SONHO SONHO 
* SONHO SONHO SONHO 
* SONHO SONHO SONHO SONHO 
* SONHO SONHO SONHO SONHO SONHO 
* Repare que foram impressos 5 vezes na horizontal e 5 na vertical.
*/

#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main()
{
	printf("Escreva uma palavra: ");
	char palavra[15];
	fgets(palavra, 15, stdin);

	removeQuebraLinhaString(palavra);

	int tamanhoPalavra = strlen(palavra);
	int i;

	for(i = tamanhoPalavra; i > 0; i--)
	{
		int j;
		for(j = 0; j < (tamanhoPalavra - i + 1); j++)
		{
			printf("%s ", palavra);
		}
		printf("\n");
	}	
	printf("\n");

	return 0;
}
