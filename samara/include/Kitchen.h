#ifndef KITCHEN_H
#define KITCHEN_H

#include <string>
#include "Rooms.h"
#include "Item.h"
#include "Game.h"

/**
* Implementation of the Kitchen Room, The kitchen contains an item and this room cna be examined for further detail.
This room inherates from the class room.
**/
class Kitchen : public Rooms {
 public:
   /*
   Initializes candle each time
   */
  Kitchen();
  /**
  * Implementation for virtual Room.
  * Displays the content of Kitchen and performs player interactions
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

 private:
  int choice;
  bool value, candle;
};
#endif
