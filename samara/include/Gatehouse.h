#ifndef GATEHOUSE_H
#define GATEHOUSE_H

#include "Rooms.h"
#include "Game.h"
#include "Item.h"
#include "Npc.h"
#include "TinyDinkyDaffy.h"
#include <iomanip>

/**
* Implementation of the gatehouse, the gatehouse contains an npc (guard), an end condition and a win condition depending on the players choices.
*This room inherates from the class room.
**/
class Gatehouse : public Rooms {
 public:
 /**
  * GateHouse Constructor
  **/
  Gatehouse();
/**
  * Implementation for virtual Room.
  * Displays the content of Gatehouse and performs player interactions
  *@param[in] Game Pointer
  **/
  void Room(Game* g);
/**
  * Displays the available choices to the player and prompts the user for input
  **/
  void choices();
/**
  * Displays the available choices to the player and prompts the user for input
  **/

  void choices1();
/**
  * Starts in game battle with player and npc
**/
  void battle(Game* g);
/**
  * GateHouse Decontructor
**/
/**
* Called when player asks for help
**/
void help();

  virtual ~Gatehouse();

 private:
  int choice, hasKnife, pDamage, tDamage;
  bool value, value1, value2;
  TinyDinkyDaffy* npc;
};
#endif
