#include <iostream>
#include "character.h"
#include "character.cpp"

int main()
{
  // Création d'un personnage en demandant les caractéristiques à l'utilisateur
  Character myCharacter = createCharacter();

  // Affichage des caractéristiques du personnage
  printCharacter(myCharacter);

  return 0;
}
