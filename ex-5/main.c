#include <stdlib.h>
#include <stdio.h>

int main()
{
	char symbol;
	int number;
	int count = 0;
	printf("Veuillez choisir soit le '-'(descendant)  soit le '+'(montant).\n");
	scanf(" %c", &symbol);

	while(symbol != '-' && symbol != '+' )
	{
		printf("Le symbole n'est pas reconnu, veuillez choisir soit le '-' (descendant) soit le '+' (montant).\n");
		scanf(" %c", &symbol);
	}
	printf("Veuillez saisir un nombre entier différent de 0: \n");
	scanf("%d", &number);

	while(number ==  0)
	{
		printf("Le nombre saisi est incorrect.\n");
		scanf("%d", &number);
	}
	
	if(symbol == '+') 
	{
		count = 0;
		while(count <= number)
		{
			printf("%d\n", count);
			count = count + 1;
		}
	}
	
	else if(symbol == '-' )
	{
		count = number;
		while(count >= 0)
		{
			printf("%d\n", count);
			count = count - 1;
		}
	}
	return 0;
}
