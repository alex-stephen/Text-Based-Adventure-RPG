#include "Item.h"
#include <string>
#include <vector>
#include <iostream>

Item::Item() {}

bool Item::findItem(std::string s) {
  for (int i = 0; i < items.size(); i++) {
    if (items[i] == s) {
      return true;
    }
  }
  return false;
}

void Item::dropItem(std::string s) {
  for (int i = 0; i < items.size(); i++) {
    if (items[i] == s) {
      items.erase(items.begin()+i);
      std::cout << s << " removed from your inventory!\n";
      break;
    }
  }
}

void Item::addItem(std::string s) {
  items.push_back(s);
  std::cout << s << " added to your inventory!\n";
}

std::vector<std::string> Item::getItem() {
  return items;
}

void Item::clearItems() {
  items.clear();
}
