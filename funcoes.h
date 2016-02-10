#include <string.h>

void removeQuebraLinhaString(char *palavra)
{
	// remove o '\n' da string
	int tamanho_string = strlen(palavra) - 1;
	if (palavra[tamanho_string] == '\n')
	{
		palavra[tamanho_string] = '\0';
	}
}
