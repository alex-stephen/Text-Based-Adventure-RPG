#include "Hallway.h"
#include <iostream>

void Hallway::Room(Game* game) {
  std::cout << "You enter a dimly lit hallway.\n";

  choices();

  value = true;
  while (value) {
    if (choice == 2) {
      value = false;
      std::cout << "Your footsteps echo ominously as"
                << " you travel to the next room.\n" << '\n' << '\n';
      posIndex = 2;
      changeRooms(posIndex, game);
    } else if (choice == 1) {
      std::cout << "The hallway is well adorned, but in a state of decay.\n"
                << "A thick layer of dust covers nearly everything. \n"
                << "The wall paper is starting to slough off.\n"
                << "There is nothing of note here.\n";
      choices();
    } else if (choice == 0) {
      help();
    } else {
      std::cout << "Not a valid response. Try again.\n";
    }
  }
}

void Hallway::choices() {
  std::cout << "\n[0] Help\n"
            << "[1] Examine Room" << '\n'
            << "[2] Traverse Hallway\n";
  std::cin >> choice;
}

void Hallway::help() {
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
