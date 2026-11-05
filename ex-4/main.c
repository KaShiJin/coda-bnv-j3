#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int number;
	int count = 0;
	printf("Choisir un nombre différent de 0:\n");
	scanf("%d", &number);
	if(number != 0)
	{
		while(count < number+1)
		{
			printf("%d\n", count);
			count = count + 1;
		}
	}
	else
	{
		while(number == 0)
		{
			printf("Choisir un nombre différent de 0:");
			scanf("%d", &number);
			if(number !=0)
			{
				while(count < number +1)
				{
					printf("%d\n", count);
					count = count + 1;
				}
			}
		}
	}
}
