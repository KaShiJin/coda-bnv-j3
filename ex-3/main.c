#include <stdlib.h>
#include <stdio.h>

int main()
{
	char str[50];
	int count = 0;
	printf("Insérez un mot à répéter\n");
	scanf(" %s", str);
	while(count < 5)
	{
		printf(" -%s\n", str);
		count = count + 1;
	}
	printf("La boucle est finie\n");
	exit(0);
}

