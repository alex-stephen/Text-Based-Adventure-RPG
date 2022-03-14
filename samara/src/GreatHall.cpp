#include "GreatHall.h"
#include "Item.h"
#include <iostream>

GreatHall::GreatHall() {
  npc = new Maid();
  postPainting = false;
}

GreatHall::~GreatHall() {
  delete npc;
}

void GreatHall::Room(Game* g) {
  std::cout << "You enter a large abandoned room, \n"
            << "there is an array of tables covered in cobwebs and dirt\n";
  value = true;
  while (value) {
    if (g->getPlayer()->getPlayerItems()->findItem("Painting")) {
      choices1();
    } else if (postPainting == true) {
      choices2();
      if (choice == 1) {
        posIndex = 9;
        changeRooms(posIndex, g);
      }
      } else {
      choices();
    }
    if (choice == 1 && hasPainting == 0 && postPainting == false) {
      std::cout << "The pointed windows have shattered glass\n"
                << "what had once been a vibrant painting of stained glass\n"
                << "is now the shattered remains of what this keep had once "
                << "been \n"
                << "\n"
                << "it is clear no one has been inside this room in years\n"
                << "the dining tables have rusted silverware on display\n"
                << "as though this room was waiting for its next party\n";
        npc->talk(g);
      } else if (choice == 2 && hasPainting == 0 && postPainting == false) {
        std::cout << "\nYou travel towards the next room.\n";
        posIndex = 7;
        changeRooms(posIndex, g);
      } else if (choice == 2 && hasPainting == 1 && postPainting == false) {
        std::cout << "\nYou travel towards the next room.\n";
        posIndex = 9;
        changeRooms(posIndex, g);
      } else if (choice == 3 && hasPainting == 1 && postPainting == false) {
        npc->talk2(g);
        std::cout << "\n--------------LOST ITEM--------------\n";
        g->getPlayer()->getPlayerItems()->dropItem("Painting");
        postPainting = true;
        std::cout << "\n--------------NEW ITEM--------------\n";
        g->getPlayer()->getPlayerItems()->addItem("Mysterious Key");
        std::cout << "\n";
      } else if (choice == 0) {
        help();
      } else if (postPainting == true) {
        std::cout << "Invalid choice.\n";
      } else {
        std::cout << "Invalid choice\n";
      }
  }
}

void GreatHall::choices() {
  std::cout << "\n[0] Help\n"
            << "[1] Examine Room\n"
            << "[2] Go to next room\n";
  std::cin >> choice;
  hasPainting = 0;
}

void GreatHall::choices1() {
  std::cout << "\n[0] Help\n"
            << "[1] Examine Room\n"
            << "[2] Go to next room\n"
            << "[3] Give painting to maid\n";
  std::cin >> choice;
  hasPainting = 1;
}

void GreatHall::choices2() {
  std::cout << "\n[0] Help\n"
            << "[1] Use the Mysterious Key\n";
  std::cin >> choice;
}

void GreatHall::help() {
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
  if (hasPainting == 0) {
    choices();
  } else if (hasPainting == 1) {
    choices1();
  } else {
    choices2();
  }
}
