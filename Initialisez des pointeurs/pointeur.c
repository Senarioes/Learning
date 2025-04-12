#include <stdio.h>

int main(int argc, const char * argv()){

    int variable = 10;

    printf("La valeur de la variable est %d\n", variable); // Je fais un printf de la variable
    printf("L'adresse de la variable est %p\n", &variable); // Je fais un printf de l'adresse de la variable

    int *pointeur;
    pointeur = &variable; // Je fais pointer le pointeur sur la variable

    printf("L'adresse du pointeur est %p\n", pointeur); // Je fais un printf de l'adresse du pointeur
    printf("La valeur du pointeur est %d\n", *pointeur); // Je déréférence le pointeur

    return 0;
}