#include "Cell.h"
#include "Item.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

Cell::Cell() {
  npc = new Guard();
  value = true;
}

void Cell::Room(Game* g) {
  g->clearPlayerItems(g);
  std::cout << "Welcome to Escape The Lost Keep."
            << '\n' << "You find yourself in a jail cell with no memory of "
            << "how you got there.\n";
      choices();
  while (value) {
    if (choice == 1) {
      std::cout << "The cell is extremely dirty and cold, you look around\nAnd "
                << "find nothing but a blanket and 4 stone walls" << '\n'
                << '\n';
      choices();
    } else if (choice == 2) {
      value = false;
    } else if (choice == 0) {
      help();
    } else {
      std::cout << "That is not a valid option" << '\n';
      choices();
    }
  }
  npc->talk(g);
  choice = 0;
  value = true;
  while (value) {
    std::cout << "[1] Search Guard" << '\n';
    std::cin >> choice;
    std:: cout << '\n' << '\n';

    if (choice == 1) {
      std::cout << "--------------NEW ITEM--------------" << '\n';
      g->getPlayer()->getPlayerItems()->addItem("Cell Keys");
      //AddItem to player's inventory.
      std::cout << '\n'
                << "--------------NEW ITEM--------------" << '\n';
      g->getPlayer()->getPlayerItems()->addItem("Matches");
      //AddItem to player's inventory.
      std::cout << '\n';
      value = false;
    } else if (choice == 0) {
      help();
    } else {
        std::cout << "That is not a valid option" << '\n';
    }
  }

  std::cout << "You take the Guards keys, Unlock your cell and head for the"
            << " exit." << '\n' << '\n' << '\n';
  posIndex = 1;
  changeRooms(posIndex, g);
}

void Cell::choices() {
  std::cout << "\n[0] Help\n"
            << "[1] Examine Room" << '\n'
            << "[2] Bang on Cell Doors" << '\n';
  std::cin >> choice;
}

void Cell::help() {
  std::cout << "\t\t\t ------HELP------\n"
            << "The objective of the game is to escape the lost keep\n"
            << "Use the numbers 1, 2, 3, and 0 when interacting with your"
            << " surroundings and npc's\n"
            << "- The number you see next to an option is the number you\n"
            << "  enter to choose that option\n"
            << "When providing your answer to the riddle questions type it\n"
            << "out in all lower case using correct grammar and spelling\n"
            << "- ex: \"an egg\"\n"
            << "HINT: it is a good idea to examine each and every room";
    choices();
}

Cell::~Cell() {
  delete npc;
}
