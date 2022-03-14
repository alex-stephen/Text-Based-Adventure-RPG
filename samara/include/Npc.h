#ifndef NPC_H
#define NPC_H

#include <vector>
#include <string>
#include "Game.h"

/**
* Implementation of the npcs class, this class wil control and the npcs thoughout the game. (Maid and Guard)
* This class is a default class that contains all possible actions an npc can do. Npcs will also be able to give items
* to the player, talk and attack.
**/
class Npc {
 public:
/**
* Npc Constructor
*/
  Npc();
/**
* Pure Virtual talk Function used for Npcs
*@param[in] Game Pointer g
*/
  virtual void talk(Game* g) = 0;
 protected:
  bool value;
  int choice;
};
#endif
