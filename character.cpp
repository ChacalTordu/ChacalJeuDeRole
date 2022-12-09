#include <iostream>
#include "character.h"

// Fonction pour créer un personnage en demandant les caractéristiques à l'utilisateur
Character createCharacter()
{
  // Création d'une instance de la structure Character
  Character character;

  // Demande des caractéristiques du personnage à l'utilisateur
  std::cout << "Enter character's magic: ";
  std::cin >> character.magic;
  std::cout << "Enter character's presence: ";
  std::cin >> character.presence;
  std::cout << "Enter character's health: ";
  std::cin >> character.health;
  std::cout << "Enter character's attack: ";
  std::cin >> character.attack;
  std::cout << "Enter character's defense: ";
  std::cin >> character.defense;

  // Renvoi du personnage créé
  return character;
}

// Fonction pour afficher les caractéristiques d'un personnage
void printCharacter(const Character& character)
{
  // Affichage des caractéristiques du personnage
  std::cout << "Magic: " << character.magic << std::endl;
  std::cout << "Presence: " << character.presence << std::endl;
  std::cout << "Health: " << character.health << std::endl;
  std::cout << "Attack: " << character.attack << std::endl;
  std::cout << "Defense: " << character.defense << std::endl;
}
