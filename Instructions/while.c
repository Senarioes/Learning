#include <stdio.h>

int main(){

    int compteur = 10;

    while (compteur != 0)
    {
        printf("%d\n", compteur);
        compteur--;
    }
    printf("%d\n", compteur);
    return 0;
}