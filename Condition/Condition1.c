/*

  ==  est égal à
  >   est supérieur à
  <   est inférieure à
  <=  est supéreieur ou égal à
  >=  est inférieure ou égal à
  !=  est différent de 


  &&  ET
  ||  OU
  !   NON
*/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int age = 20;
  
    if (age >= 18) // Si l'âge est supérieur ou égal à 18
    {
      printf ("Vous etes majeur !\n"); // Good boy, t'es majeur
    }
    else{
        printf("AH c'est bete, vous etes mineur !"); // Looser t'es mineur
    }
    return 0;
}