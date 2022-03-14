#include "Kitchen.h"
#include "Item.h"
#include "Rooms.h"
#include <iostream>
#include <string>

Kitchen::Kitchen() {
  candle = true;
}

void Kitchen::Room(Game* g) {
  if (g->getPlayer()->getPlayerItems()->findItem("Candle")) {
    candle = false;
  }
  std::cout << "You enter the Kitchen.\nThere's a soft glow coming from\n"
            << "one corner of the room.\n"
            << " A faint smell of rot hangs in the air.\n";

  choices();

  value = true;
  while (value) {
    if (choice == 1) {
      std::cout << "At first glance there's not much to see.\n"
                << "You spy a drawer of cutlery half open.\n";
      if (!(g->getPlayer()->getPlayerItems()->findItem("Knife"))) {
        std::cout << "Grabbing a half-melted candle, you inspect the"
                  << " drawer and "
                  << "wrench it open.\nInside it reveals a"
                  << " sharp butcher's knife.\n"
                  << '\n' << '\n'
                  << "--------------NEW ITEM--------------" << '\n';
        g->getPlayer()->getPlayerItems()->addItem("Knife");
        //AddItem to player's inventory.
        std::cout << '\n';
      }
    } else if (choice == 2) {
      std::cout << "You head towards the Brewery in the room nearby.\n";
      posIndex = 4;
      changeRooms(posIndex, g);
    } else if (choice == 3) {
      std::cout << "You head towards the doorway headed to the Great Hall.\n";
      posIndex = 5;
      changeRooms(posIndex, g);
    } else if (choice == 4 && candle == true) {
      std::cout << "--------------NEW ITEM--------------" << '\n';
      g->getPlayer()->getPlayerItems()->addItem("Candle");
      //AddItem to player's inventory.
      std::cout << '\n';
      candle = false;
    } else if (choice == 0) {
      help();
    } else {
      std::cout << "Not a valid respone.\n";
    }
    choices();
    }
  }

void Kitchen::choices() {
  std::cout << "\n[0] Help\n"
            << "[1] Examine Room\n"
            << "[2] Go to Brewery\n[3] Go to Great Hall\n";
  if (candle) {
    std::cout << "[4] Take Candle\n";
  }
  std::cin >> choice;
}

void Kitchen::help() {
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
