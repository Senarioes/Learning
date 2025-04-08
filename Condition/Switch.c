#include <stdio.h>

int main (){

    int choixMenu;

    printf("=== Menu ===\n");
    printf("1. Royal Cheese\n");
    printf("2. Mc Delux\n");
    printf("3. Mc bacon\n");
    printf("4. Big Mac\n");
    printf("Votre choix ?");

    scanf("%d", choixMenu);

    switch(choixMenu)
    {

        case 1:
            printf("Vous avez choisi le Royal Cheese !\n");
            break;
        case 2:
            printf("Vous avez choisi le Mc Delux ! \n");
            break;
        case 3:
            printf("Vous avez choisi le Mc Bacon !\n");
            break;
        case 4:
            printf("Vous avez choisi le Big Mac !\n");
            break;
        default:
            printf("Vous n'avez pas rentre un nombre correct \n");
            break;
    }

    printf("\n");

    return 0;
}