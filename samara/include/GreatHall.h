#include <string>
#include "Rooms.h"
#include "Npc.h"
#include "Maid.h"
#include "Item.h"
#include "Game.h"

/**
* Implementation of the GreatHall Room, The greathall contains an item and this room can be examined for further detail. This room contains the maid npc and a item when the maids
* puzzle is resolved.
* This room inherates from the class room.
**/
class GreatHall : public Rooms {
 public:
  /**
  * GreatHall Constructor
  **/
  GreatHall();
  /**
  * Implementation for virtual Room.
  * Displays the content of GreatHall and performs player interactions
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
  * Displays the available choices to the player and prompts the user for input
  **/
  void choices2();
  /**
  * Called when player asks for help
  **/
  void help();
  /**
  * GreatHall Decontructor
  **/

  virtual ~GreatHall();

 private:
  int choice, hasPainting;
  bool value, postPainting;
  Maid* npc;
};
