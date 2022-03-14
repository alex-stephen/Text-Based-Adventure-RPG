#include "TinyDinkyDaffy.h"
#include <iostream>
#include <iomanip>

TinyDinkyDaffy::TinyDinkyDaffy() {
  // I think he has dice in his pocket
  name = "Tiny Dinky Daffy";
  health = 120;
  damage = 45;
}

void TinyDinkyDaffy::talk(Game* g) {
  std::cout << "You talk to " << name << '\n';
  std::cout << "\"Who goes there?\"" << '\n'
            << "If you wish to pass you must go through me!\n"
            << "I am the keeper of these gates, and have been for decades.\n";
  while (value) {
    choices();
    if (choice == 1) {
      value = false;
    } else if (choice == 2) {
      std::cout << "Aren't you supposed to be in a fight?\n";
    } else {
      std::cout << "Invalid input.\n";
    }
  }
}

void TinyDinkyDaffy::choices() {
  std::cout << std::setfill('-')
            << "\n[1] Attack" << '\n'
            << "[2] Talk?\n"
            << std::setfill('-') << "\n";
  std::cin >> choice;
  std::cout << '\n' << std::setfill('-') << '\n';
}

TinyDinkyDaffy* TinyDinkyDaffy::takeDamage(int taken, TinyDinkyDaffy* t) {
  health = health - taken;
  return t;
}

bool TinyDinkyDaffy::checkStatus(TinyDinkyDaffy* t) {
  if (health <= 0) {
    return true;
  } else {
    return false;
  }
}

int TinyDinkyDaffy::getDamage() {
  return damage;
}
