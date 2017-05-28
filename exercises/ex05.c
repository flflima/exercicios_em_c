#include <stdlib.h>
#include <stdio.h>

int main()
{
	printf("Informe o nome: ");

	char nome[25];
	fgets(nome, 25, stdin);

	printf("Informe o endereço: ");
	
	char endereco[50];
	fgets(endereco, 50, stdin);

	printf("Informe o telefone: ");

	char telefone[20];
	fgets(telefone, 20, stdin);

	printf("Nome: %s\nEndereço: %s\nTelefone: %s\n", nome, endereco, telefone);

	return 0;
}
