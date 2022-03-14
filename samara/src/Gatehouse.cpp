#include "Gatehouse.h"
#include "TinyDinkyDaffy.h"
#include <iostream>
#include <iomanip>

Gatehouse::Gatehouse() {
  npc = new TinyDinkyDaffy();
  value = true;
  value1 = true;
  value2 = true;
}

void Gatehouse::Room(Game* g) {
  std::cout << "As you walk into the open air of a courtyard,\nyou can "
            << "see the Gatehouse, and with it comes the taste of freedom.\n\n"
            << "A lone guard stands in your way.\n";

  while (value) {
    choices();
    if (choice == 1) {
      std::cout << "No time to examine the scenery.\n"
                << "The guard looks fierce.\n";
    } else if (choice == 0) {
      help();
    } else if (choice == 2) {
      battle(g);
    } else if (choice == 3) {
      std::cout << "You flee.\n";
      posIndex = 6;
      changeRooms(posIndex, g);
    } else {
      std::cout << "Not a valid input.\n";
    }
  }
}

void Gatehouse::help() {
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

void Gatehouse::choices() {
  std::cout << std::setfill('-')
            << "\nYou think to yourself that a"
            <<" weapon would be a good thing to have.\n"
            << "[0] Help\n"
            << "[1] Examine\n"
            << "[2] ESCAPE\n"
            << "[3] Go back\n"
            << std::setfill('-') << std::endl;
  std::cin >> choice;
  std::cout << std::setfill('-') << std::endl;
}

void Gatehouse::choices1() {
  std::cout << "Would you like to play again?\n"
            << "[1] Again!\n"
            << "[2] Exit\n";
  std::cin >> choice;
}

void Gatehouse::battle(Game* g) {
  npc->talk(g);
  g->getPlayer()->updateDamage(g->getPlayer());
  pDamage = g->getPlayer()->getDamage();
  tDamage = npc->getDamage();
  while (value1) {
    std::cout << "Tiny Dinky Daffy attacks!\n";
    g->getPlayer()->takeDamage(tDamage, g->getPlayer());
    if (g->getPlayer()->checkStatus(g->getPlayer())) {
      value1 = false;
    }
    std::cout << "You attack!\n";
    npc->takeDamage(pDamage, npc);
    if (npc->checkStatus(npc)) {
      value1 = false;
    }
  }
  std::cout << "A decisive blow has struck!\n";
  if (npc->checkStatus(npc)) {
    std::cout << "\n\nWounded, but alive, you flee through the gatehouse\n"
              << "And into the woods beyond. Survival is still in question,\n"
              << "But without a doubt you have....\n\n\n"
              << "ESCAPED THE LOST KEEP!\n\n";
    while (value) {
      choices1();
      if (choice == 1) {
        posIndex = 0;
        changeRooms(posIndex, g);
      } else if (choice == 2) {
        exit(0);
      } else {
        std::cout << "Invalid Entry";
      }
    }
  } else if (g->getPlayer()->checkStatus(g->getPlayer())) {
    std::cout << "\n\nWithout a weapon in hand, you lose to Tiny Dinky Daffy.\n"
              << "You have succumbed to the sin of pride.\n\n"
              << "--------------YOU DIED--------------\n\n";
    posIndex = 0;
    changeRooms(posIndex, g);
  }
}

Gatehouse::~Gatehouse() {
  delete npc;
}
