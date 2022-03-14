#include <string>
#include "Game.h"
#include "Rooms.h"

/**
* Implementation of the Tower, This room will contain one npc (the wizard). Each choice will lead to a diffrent option or ending depending on the choice. These choices can lead to
* an end condition.
* This room inherates from the class room.
**/
class Tower : public Rooms {
 public:
 /**
  * Implementation for virtual Room.
  * Displays the content of Kitchen and performs player interactions
  *@param[in] Game Pointer
  **/
  Tower();
 /**
* Tower Deconstructor
**/
  virtual ~Tower();
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
  * Implementation for virtual Room.
  * Displays the content of Tower and performs player interactions
  *@param[in] Game Pointer
  **/
  void Room(Game* g);
  /**
  * Called when player asks for help
  **/
  void help();


 private:
  int choice, choice1, choice2;
  bool value, value2;
};
