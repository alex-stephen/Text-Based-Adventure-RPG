#include "Player.h"
#include "Item.h"
#include <string>
#include <vector>
#include <iostream>

Player::Player() {
  health = 100;
  damage = 5;
  inv = new Item();
}

Item* Player::getPlayerItems() {
  return inv;
}

void Player::listInventory() {
  std::cout << "Player Inventory:" << std::endl;
  for (int i = 0; i < inv->getItem().size(); i++) {
    std::cout << "[" << i + 1 << "] " << inv->getItem()[i]
              << std::endl << '\n';
  }
}

Player* Player::takeDamage(int taken, Player* p) {
  health = health - taken;
  return p;
}

Player* Player::updateDamage(Player* p) {
  if (getPlayerItems()->findItem("Knife")) {
    damage = 60;
    return p;
  }
  return p;
}

bool Player::checkStatus(Player* p) {
  if (health <= 0) {
    return true;
  } else {
    return false;
  }
}

int Player::getDamage() {
  return damage;
}

Player::~Player() {
  delete inv;
}
