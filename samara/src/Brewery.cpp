#include "Brewery.h"
#include "Item.h"
#include "Player.h"
#include "Rooms.h"
#include "Game.h"
#include <iostream>
#include <string>


void Brewery::Room(Game* game) {
  std::cout << "As you step into the Brewery you hear the scurrying of rats"
            << " back\ninto their holes.\n";

  choices();

  value = true;
  while (value) {
    if (choice == 1) {
      std::cout << "Many barrels of ale are packed into the room.\n";
      if (game->getPlayer()->getPlayerItems()->findItem("Knife")) {
        std::cout << "With your Knife,"
                  << " it would be possible to break the seals on\n"
                  << "The barrels and take a drink.\n"
                  << "[1] \"Just one drink...\"\n"
                  << "[2] Go back to the Kitchen\n";
        std::cin >> choice;
        if (choice == 1) {
          std::cout << "You take one drink.\n\n\n"
                    << "Then another.\n\n"
                    << "And another....\n"
                    << "You pass out face down in a puddle of ale.\n"
                    << "You have indulged in the sin of gluttony.\n\n"
                    << "--------------YOU DIED--------------\n\n";
          posIndex = 0;
          changeRooms(posIndex, game);
        } else {
          posIndex = 3;
          changeRooms(posIndex, game);
        }
      }
    } else if (choice == 2) {
      posIndex = 3;
      changeRooms(posIndex, game);
    } else if (choice == 0) {
      help();
    } else {
      std::cout << "Not a valid response.\n";
    }
    choices();
  }
}

void Brewery::choices() {
  std::cout << "\n[0] Help\n"
            << "[1] Examine Room\n[2] Go Back\n";
  std::cin >> choice;
}

void Brewery::help() {
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
