#ifndef CHAPLE_H
#define CHAPLE_H

#include <string>
#include "Rooms.h"
#include "Item.h"
#include "Player.h"
#include "Game.h"
/**
* Implementation of Chaple
*This room inherates from the class room.
**/
class Chaple : public Rooms {
 public:
  /**
  * Chaple Constructor
  **/
  Chaple();
  /**
  * Implementation for virtual Room.
  * Displays the content of Chaple and performs player interactions
  *@param[in] Game Pointer
  **/
  void Room(Game* game);
  /**
  * Displays the available choices to the player and prompts the user for input
  **/
  void choices();
  /**
  * Displays the available choices to the player and prompts the user for input
  **/
  void choices1();
  /**
  * Displays the available choices to the player and prompts the user for input
  **/
  void choices2();
  /**
  * Displays the available choices to the player and prompts the user for input
  **/
  void choices3();
  /**
  * Called when player asks for help
  **/
  void help();

 private:
  int choice, noCandle, nestedChoice, nestedChoice2;
  bool value, value2, value3;
};
#endif
