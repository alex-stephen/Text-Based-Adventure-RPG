#include <iostream>
#include "Chaple.h"
#include "Item.h"
#include "Player.h"

Chaple::Chaple() {
  value = true;
  value2 = true;
}

void Chaple::Room(Game* g) {
  std::cout << "You enter a pitch black room.\nThe only thing you can make out"
            << " is that every noise you make echos through the space."
            << '\n';

  while (value) {
    if (g->getPlayer()->getPlayerItems()->findItem("Candle")
        && g->getPlayer()->getPlayerItems()->findItem("Matches"))
      choices1();
    else
      choices();

    if (choice == 1) {
      std::cout << "All you see is black. If only you had something to see."
                << '\n' << '\n';
    } else if (choice == 0) {
      help();
    } else if (choice == 2 && noCandle == 0) {
        std::cout << "You don't have the items required. You should search the "
                  << "kitchen." << '\n';
        std::cout << "[1] Go to the Kitchen" << '\n';
        std::cin >> nestedChoice;
          if (nestedChoice == 1) {
            posIndex = 3;
            changeRooms(posIndex, g);
          }

    } else if (choice == 2 && noCandle == 1) {
        std::cout << "You place the Candle on table and see that you are "
                  << "standing in a large empty Chaple." << '\n'
                  << "\n--------------LOST ITEM--------------\n";
        g->getPlayer()->getPlayerItems()->dropItem("Candle");
        std::cout << "\n--------------LOST ITEM--------------\n";
        g->getPlayer()->getPlayerItems()->dropItem("Matches");
        choices2();
        while (value2) {
        if (nestedChoice == 1) {
          std::cout << "--------------NEW ITEM------------" << '\n';
          g->getPlayer()->getPlayerItems()->addItem("Painting");
          std::cout << "*You take a Painting that is quite peculiar.\n"
                    << "You notice the subject is a Fedora.*" << '\n'
                    << "You recall the mention of a Fedora and recognize "
                    << "it may be of value to you."
                    << '\n';
          value2 = false;
        } else if (nestedChoice == 2) {
          g->getPlayer()->listInventory();
          choices2();
        } else if (nestedChoice == 3) {
          std::cout << "You go back to the Great Hall.\n";
          posIndex = 6;
          changeRooms(posIndex, g);
        } else if (nestedChoice == 0) {
          help();
        } else {
            std::cout << "This is not a valid input." << '\n' << '\n';
            choices2();
          }
        }
        choices3();
        while (value3) {
          if (nestedChoice2 == 1) {
            posIndex = 8;
            changeRooms(posIndex, g);
            value3 = false;
          } else if (nestedChoice2 == 2) {
            std::cout << "You go back to the Great Hall.\n";
            posIndex = 6;
            changeRooms(posIndex, g);
            value3 = false;
          } else if (nestedChoice2 == 0) {
            help();
          } else {
              std::cout << "This is not a valid input." << '\n' << '\n';
              choices3();
          }
        }
        value = false;
    } else if (choice == 3 && noCandle == 0) {
        g->getPlayer()->listInventory();
        choices();
    } else if (choice == 3 && noCandle == 1) {
        g->getPlayer()->listInventory();
        choices1();
    } else if (choice == 4) {
      std::cout << "You go back to the Great Hall.\n";
      posIndex = 6;
      changeRooms(posIndex, g);
    } else if (choice == 0) {
      help();
    } else {
      std::cout << "That is not a Valid input." << '\n';
    }
  }
}

void Chaple::choices() {
  std::cout << "\n[0] Help\n"
            << "[1] Examine." << '\n'
            << "[2] Hint" << '\n'
            << "[3] View Inventory\n"
            << "[4] Go back to Great Hall"
            << '\n';
  std::cin >> choice;
  noCandle = 0;
}

void Chaple::choices1() {
  std::cout << "\n[0] Help\n"
            << "[1] Examine." << '\n'
            << "[2] Light Candle." << '\n'
            << "[3] View Inventory.\n"
            << "[4] Go back to Great Hall"
            << '\n';
  std::cin >> choice;
  noCandle = 1;
}


void Chaple::choices2() {
  std::cout << "[1] Search the Chaple." << '\n'
            << "[2] View Inventory." << '\n'
            << "[3] Go back to Great Hall."
            << '\n';
  std::cin >> nestedChoice;
}

void Chaple::choices3() {
  std::cout << "\n[0] Help\n"
            << "[1] Continue to the next Room" << '\n'
            << "[2] Go back to Great Hall."
            << '\n';
  std::cin >> nestedChoice2;
}

void Chaple::help() {
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
  if (noCandle == 0) {
    choices();
  } else if (noCandle == 1) {
    choices1();
  } else if (nestedChoice == 2) {
    choices2();
  } else {
    choices3();
  }
}
