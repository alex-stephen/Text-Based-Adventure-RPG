#include <string>
#include "Npc.h"

/**
* Implementation of the guard npcs class, this class inherates from the npcs class.
* The guard npc is set to be hostile regardless of if its provoked in which the guard can hurt the player.
* The guards main intention is to kill or hurt the player.
**/
class Guard : public Npc {
 public:
   /**
  * Guard Constructor
  **/
  Guard() : name("Cell Guard") {}
  /**
  * Displays Guard Dialouge options,
  * Displays the Dialouge from Guard
  **/
  void talk(Game* g);
  /**
  * Displays the available choices to the player and prompts the user for input
  **/
  void choices();
 private:
  std::string name;
};
