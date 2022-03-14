#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <string>
#include "Item.h"

/**
* Implementation of the player class, this class will determine what room the user is actively using.
* This class will determine what choices are being made within each room and will store the list of inventory the player
* currently has and will get new items from the item class when available.
* Player class will also determine the health of the player and any damage that occurs.
**/
class Player {
 public:
  /**
  * Player Constructor
  **/
  Player();
  /**
  * Player Destructor
  **/
  ~Player();
  /**
  * Returns a pointer to the Inventory
  * @return Item Pointer.
  **/
  Item* getPlayerItems();
  /**
  * Displays the contents of the player's Inventory.
  **/
  void listInventory();

  Player* takeDamage(int, Player* p);

  Player* updateDamage(Player* p);

  int getDamage();

  bool checkStatus(Player* p);

 private:
  int choice;
  int health;
  int damage;
  Item* inv;
};
#endif
