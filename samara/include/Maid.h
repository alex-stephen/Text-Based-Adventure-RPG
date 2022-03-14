#include <string>
#include "Npc.h"
#include "Game.h"

/**
* Implementation of the maid npcs class, this class inherates from the npcs class.
* The maid npc is set to be freindly until provoked in which the maid can hurt the player.
* The maid gives an item to help the player solve one of the puzzles.
**/
class Maid : public Npc {
 public:
/**
* Maid Constructor
**/
  Maid() : name("Ill looking maid") {}
  /**
  * Maid Dialouge options,
  * Displays the Dialouge from maid
  **/
  void talk(Game* g);
  /**
  * Maid Dialouge options
  * Displays the Dialouge from maid
  **/
  void talk2(Game* g);
  /**
  * Interaction between the maid npc and the player
  * Prompts the Player to choose an option to respond to the maid.
  * Updates the choice used to select Dialouge. 
  */
  void choices();
 private:
  std::string name;
};
