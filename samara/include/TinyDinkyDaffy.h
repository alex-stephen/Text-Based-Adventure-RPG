#ifndef TINYDINKYDAFFY_H
#define TINYDINKYDAFFY_H

#include <string>
#include "Npc.h"
#include "Game.h"

/**
* Implementation of the TinyDinkDaffy is a attackable npcs who can harm the player and or lead to an end condition. 
**/
class TinyDinkyDaffy : public Npc {
 public:
/**
* TinyDinkDaffy Constructor
**/
  TinyDinkyDaffy();
/**
  * TinyDinkDaffy Dialouge options,
  * Displays the Dialouge from TinyDinkDaffy
  **/
  void talk(Game* g);
/**
  * Interaction between the TinyDinkDaffy npc and the player
  * Prompts the Player to choose an option to respond.
  * Updates the choice used to select Dialouge. 
**/
  void choices();
/**
  * Npcs TinyDinkDaffy takes damage from the player. 
  * @param[in] int taken damage to npc 
**/ 
  TinyDinkyDaffy* takeDamage(int taken, TinyDinkyDaffy* t);
/**
  * Check how much health is left on npcs TinyDinkDaffy
  * @param[In] pointer TinyDinkDaffy to determine if npc still has health left
  * return dead nps if health is below 0
**/ 
  bool checkStatus(TinyDinkyDaffy* t);
/**
  * Npcs TinyDinkDaffy takes damage from the player. 
  * @return damage
**/ 
  int getDamage();

 private:
  std::string name;
  int health;
  int damage;
  int choice;
};
#endif
