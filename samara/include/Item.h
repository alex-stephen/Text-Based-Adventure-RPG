#ifndef ITEM_H
#define ITEM_H

#include <vector>
#include <string>

/**
* Implementation of the Item class, Items will be added, removed, and searched for here.
* Items will be stored in the inventory list and can be searched for using true and false.
**/
class Item {
 public:
/**
* Item Constructor
**/
  Item();
/**
* Find an item from the inventory
* @return true if the item is in the inventory
* @return false if the item is not in inventory
**/
  bool findItem(std::string s);
/**
* Adding the item to the inventory
* @param[in] item from npc or room
* @return ithem has been added to the inventory
**/
  void addItem(std::string s);
/**
* Removing the item to the inventory
* @return item has been removed from inventory
**/
  void dropItem(std::string s);
/**
* Return the item
* @return item
**/
  std::vector<std::string> getItem();
/*
  Clears the private vector items
*/
  void clearItems();

 private:
  std::vector<std::string> items;
};
#endif
