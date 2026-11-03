#include <stdlib.h>
#include <stdio.h>

int main()
{
	int number;
	scanf("%d", &number);

	if(number>42)
	{
	printf("Votre chiffre est supérieur à 42\n");

	}
	else if(number < 42)
	{
	printf("Votre chiffre est en dessous de 42\n");

	}

	else
	{	
	printf("Votre chiffre est égal à 42\n");
	exit(0);

	}
}
