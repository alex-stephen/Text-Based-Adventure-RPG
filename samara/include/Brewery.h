#ifndef BREWERY_H
#define BREWERY_H

#include <string>
#include "Rooms.h"
#include "Item.h"
#include "Game.h"
/**
* Implementation of Brewery, The brewery contains an item and this room cna be examined for further detail, as as lead to an end game condition depending on the players choices.
*This room inherates from the class room.
**/
class Brewery : public Rooms {
 public:
  /**
  * Implementation for virtual Room.
  * Displays the content of Brewery and performs player interactions
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
  bool value;
};
#endif
