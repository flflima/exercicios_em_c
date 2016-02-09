/* Receber do teclado uma mensagem e imprimir quantas letras A, E, I, O, U tem esta mensagem. Considerar minúscula e maiúscula. 
*
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	printf("Digite uma mensagem: ");
	char mensagem[100];
	fgets(mensagem, 100, stdin);

	int contadorLetrasA = 0;
	int contadorLetrasE = 0;
	int contadorLetrasI = 0;
	int contadorLetrasO = 0;
	int contadorLetrasU = 0;

	int i;

	for(i = 0; mensagem[i] != '\n'; i++)
	{
		char letra = mensagem[i];

		switch(letra)
		{
			case 'a':
			case 'A':
				contadorLetrasA++;
				break;
			case 'e':
			case 'E':
				contadorLetrasE++;
				break;
			case 'i':
			case 'I':
				contadorLetrasI++;
				break;
			case 'o':
			case 'O':
				contadorLetrasO++;
				break;
			case 'u':
			case 'U':
				contadorLetrasU++;
				break;
		}
	}

	printf("Total de letras A: %d.\n", contadorLetrasA);
	printf("Total de letras E: %d.\n", contadorLetrasE);
	printf("Total de letras I: %d.\n", contadorLetrasI);
	printf("Total de letras O: %d.\n", contadorLetrasO);
	printf("Total de letras U: %d.\n", contadorLetrasU);

	printf("\n");
	return 0;
}
