/*

  ==  est égal à
  >   est supérieur à
  <   est inférieure à
  <=  est supéreieur ou égal à
  >=  est inférieure ou égal à
  != est différent de 


    &&  ET
  ||  OU
  !   NON
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int age = 6;
  
    if (age >= 18) // Si l'âge est supérieur ou égal à 18
    {
    printf ("Vous etes majeur !");
    }
    else if ( age > 4 ) // Sinon, si l'âge est au moins supérieur à 4 
    {
    printf ("Bon t'es pas trop jeune quand meme...");
    }
    else // Sinon...
    {
    printf ("Aga gaa aga gaaa"); // Langage bébé, vous pouvez pas comprendre
    }
}