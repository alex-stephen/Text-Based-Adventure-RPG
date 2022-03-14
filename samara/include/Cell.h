#ifndef CELL_H
#define CELL_H

#include <string>
#include "Rooms.h"
#include "Npc.h"
#include "Guard.h"
#include "Item.h"
#include "Game.h"
/**
* Implementation of Cell
*This room inherates from the class room.
**/
class Cell : public Rooms {
 public:
  /**
  * Cell Constructor
  **/
  Cell();
  /**
  * Implementation for virtual Room.
  * Displays the content of Cell and performs player interactions
  *@param[in] Game Pointer
  **/
  void Room(Game* game);
  /**
  * Displays the available choices to the player and prompts the user for input
  **/
  void choices();
  /**
  * Called when player asks for help
  **/
  void help();
  /**
  * Cell Deconstructor
  **/
  virtual ~Cell();

 private:
  int choice;
  bool value;
  Guard* npc;
};
#endif
