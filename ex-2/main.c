#include <stdlib.h>
#include <stdio.h>

int main()
{
	char symbol;
	printf("Veuillez choisir un symbol entre '+', '-', '/', '*', '%%' ");
	scanf(" %c", &symbol);

	if(symbol == '+')
	{
	printf("Vous avez choisi l'addition\n");
	}
	else if(symbol == '-')
	{
	printf("Vous avez choisi la soustraction\n");
	}
	else if(symbol == '/')
	{
	printf("Vous avez choisi la divison\n");
	}
	else if(symbol == '*')
	{
	printf("Vous avez choisi la multiplication\n");
	}
	else if(symbol == '%')
	{
	printf("Vous avez choisi le modulo\n");
	exit(0);

	}
}
