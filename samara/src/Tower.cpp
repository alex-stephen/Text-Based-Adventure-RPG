#include "Tower.h"
#include "Item.h"
#include <iostream>

Tower::Tower() {
}

Tower::~Tower() {
}

void Tower::Room(Game* g) {
  value = true;
  while (value) {
    std::cout << "Behind a heavy door you find a tall stairwell \n"
              << "Curious, you decide to climb the stairs.\n"
              << "At the top of the stair well you see a wooden door \n"
              << "With a lions head carved into it.\n"
              << "\n You open the door \n"
              << "\n";
    choices();
    if (choice == 1) {
      std::cout << "There is a desk that is up against a pointed window \n"
                << "A man dressed in red sits at the desk\n"
                << "Wizard: Why hello there, I am currently in the process of "
                << "creating a love potion, however, I need to choose one of "
                << "these flowers\n Which should I choose?\n";
    choices2();
      std::cout << "You notice a ring with some rope tied around it. \n"
                << "You see a long rope running down the edge of the tower \n"
                << "This is your way out!\n"
                << "You could climb down the tower using this rope and escape\n"
                << "\nIt is time to escape the lost keep\n";

      if (choice2 == 1) {
                std::cout << "\nYou begin absailing down the Tower,\n"
                          << "It is a cloudy day.\n"
                          << "The castle is in the middle of nowhere,\n"
                          << "You see nothing but trees,\nNo kingdom or"
                          << " buildings. \n"
                          << "Nothing but trees.\n"
                          << "\"Where am I\" you wonder \n"
                          << "Suddenly the rope snaps \n"
                          << "You begin to fall\nAs you fall you know you"
                          << " have met your untimely demise\n"
                          << "You have fallen victim to the sin of lust\n"
                          << "Lust for freedom\n"
                          << "--------------YOU DIED--------------\n\n";
                  g->StartGame(g);
              } else {
                std::cout << "You begin absailing down the Tower,\n"
                          << "It is a sunny day.\n"
                          << "The castle is in the middle of nowhere,\n"
                          << "You see nothing but trees,\nNo kingdom or"
                          << " buildings. \n"
                          << "Nothing but trees.\n"
                          << "\"Where am I\" you wonder \n"
                          << "You still don't know how you got here\n"
                          << "But it no longer matters,\n"
                          << "Because you are on your"
                          << " way home now \n"
                          << "\n"
                          << "You have ESCAPED THE LOST KEEP! \n\n";
              while (value) {
                      choices1();
                      if (choice1 == 1) {
                        posIndex = 0;
                        changeRooms(posIndex, g);
                      } else if (choice1 == 2) {
                        exit(0);
                      } else {
                        std::cout << "Invalid Entry\n";
                      }
        }
      }
    } else if (choice == 0) {
      help();
    } else {
      std::cout << "Invalid Entry\n";
    }
  }
}

void Tower::choices() {
  std::cout << "\n[0] Help\n"
            << "[1] Examine Room\n";
  std::cin >> choice;
}

void Tower::choices1() {
  std::cout << "Would you like to play again?\n"
            << "[1] Again!\n"
            << "[2] Exit\n";
  std::cin >> choice1;
}

void Tower::choices2() {
  std::cout << "[1] Rose of lust\n"
            << "[2] Tulip of envy\n"
            << "[3] Daisy of greed\n"
            << "[4] Orchid of sloth\n";
  std::cin >> choice2;
}

void Tower::help() {
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
  if (choice == 1) {
    choices2();
  } else {
    choices();
  }
  }
