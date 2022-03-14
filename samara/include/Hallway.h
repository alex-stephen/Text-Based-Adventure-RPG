#ifndef HALLWAY_H
#define HALLWAY_H

#include "Rooms.h"
#include "Game.h"

/**
* Implementation of the Hallway, this is a space between rooms to let the player pass to another room.
* posIndex determines what room the player is moving to and from.
**/
class Hallway : public Rooms {
 public:
   /**
   * Implementation for virtual Room.
   * Displays the content of Hallway and performs player interactions
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
