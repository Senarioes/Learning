#include <stdio.h>

int main(){

    int compteur = 10;

    do
    {
        printf("%d\n", compteur);
        compteur--;
    }while (compteur > 100);
    return 0;
}