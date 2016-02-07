#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
		int tamanho_string = strlen(nome) - 1;
		if (nome[tamanho_string] == '\n')
		{
			printf("%d\n\n",tamanho_string);
			printf("%c\n\n",nome[tamanho_string]);

			nome[tamanho_string] = '\0';
		}

		printf("%s - ACEITA\n", nome);
	}
	else
	{
		printf("NÃO ACEITA\n");
	}

	return 0;
}
