#include <stdlib.h>
#include <stdio.h>

int main()
{
    char symbol;
    int number;
    int count = 0;

    // 1. Saisie et validation du symbole
    printf("Veuillez choisir soit le '-'(descendant) soit le '+'(montant).\n");
    scanf(" %c", &symbol);

    while (symbol != '-' && symbol != '+')
    {
        printf("Le symbole n'est pas reconnu, veuillez choisir soit le '-' (descendant) soit le '+' (montant).\n");
        scanf(" %c", &symbol); // Espace ajouté avant %c pour ignorer les retours à la ligne
    }

    // 2. Saisie et validation du nombre
    printf("Veuillez saisir un nombre entier différent de 0: \n");
    scanf("%d", &number);

    while (number == 0)
    {
        printf("Le nombre saisi est incorrect (doit être différent de 0).\n");
        scanf("%d", &number);
    }

    // 3. Traitement selon le symbole choisi
    if (symbol == '+')
    {
        // Compteur montant (de 0 jusqu'à number)
        count = 0;
        while (count <= number)
        {
            printf("%d\n", count);
            count = count + 1;
        }
    }
    else if (symbol == '-')
    {
        // Compteur descendant (de number jusqu'à 0)
        count = number;
        while (count >= 0)
        {
            printf("%d\n", count);
            count = count - 1;
        }
    }

    return 0;
}
