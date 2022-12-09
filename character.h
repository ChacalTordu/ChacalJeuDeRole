struct Character
{
  int magic;
  int presence;
  int health;
  int attack;
  int defense;

  // Fonction membre "setter" pour la caractéristique "magic"
  void setMagic(int value)
  {
    magic = value;
  }

  // Fonction membre "getter" pour la caractéristique "magic"
  int getMagic() const
  {
    return magic;
  }

  // Fonction membre "setter" pour la caractéristique "presence"
  void setPresence(int value)
  {
    presence = value;
  }

  // Fonction membre "getter" pour la caractéristique "presence"
  int getPresence() const
  {
    return presence;
  }

  // Fonction membre "setter" pour la caractéristique "health"
  void setHealth(int value)
  {
    health = value;
  }

  // Fonction membre "getter" pour la caractéristique "health"
  int getHealth() const
  {
    return health;
  }

  // Fonction membre "setter" pour la caractéristique "attack"
  void setAttack(int value)
  {
    attack = value;
  }

  // Fonction membre "getter" pour la caractéristique "attack"
  int getAttack() const
  {
    return attack;
  }

  // Fonction membre "setter" pour la caractéristique "defense"
  void setDefense(int value)
  {
    defense = value;
  }

  // Fonction membre "getter" pour la caractéristique "defense"
  int getDefense() const
  {
    return defense;
  }
};
