#include <iostream>
#include <string>
#include "Riddle.h"

void CastleRiddle::Room(Game* game) {
  bool value = true;
  std::cout << "You Enter a Room with text on the wall that reads: \n" << '\n';
  while (value) {
    std::cout << "I am large as a castle, yet lighter than air.\n100 men and "
              << "their horses cannot move me. What am I?\n"
              << " (Type Answer in all Lower Case, with correct grammar)"
              << std::endl;
    std::getline(std::cin >> std::ws, choice);
    if (choice == "the castle's shadow") {
      value = false;
      } else {
        std::cout << '\n';
        std::cout << "That is not the answer to the Riddle!" << '\n' << '\n';
      }
    }
    std::cout << '\n';
    posIndex = 3;
    changeRooms(posIndex, game);
}

void BeachRiddle::Room(Game* game) {
  std::cout << "You Enter a Room with text on the wall that reads: \n" << '\n';
  while (choice != "the beach") {
    std::cout << "You might get to one by airplane, "
              << "or you might prefer to go by boat \n"
              << "As its surrounded by water, "
              << "but it's not a castle with a moat. \n"
              << " (Type Answer in all Lower Case)"
              << '\n';
    std::getline(std::cin >> std::ws, choice);
    if (choice != "the beach") {
        std::cout << '\n';
        std::cout << "That is not the answer to the Riddle!" << '\n';
      }
  }
  std::cout << '\n';
  posIndex = 6;
  changeRooms(posIndex, game);
}

void SandRiddle::Room(Game* game) {
  std::cout << "You Enter a Room with text on the wall that reads: \n" << '\n';
  while (choice != "the sand") {
    std::cout << "I build up castles. \n"
              << "I tear down mountains. \n"
              << "I make some men blind, \n"
              << "I help others to see. What am I? \n"
              << " (Type Answer in all Lower Case)"
              << '\n';
    std::getline(std::cin >> std::ws, choice);
    if (choice != "the sand") {
        std::cout << '\n';
        std::cout << "That is not the answer to the Riddle!" << '\n';
      }
  }
  std::cout << '\n';
  posIndex = 10;
  changeRooms(posIndex, game);
}

void EggRiddle::Room(Game* game) {
  std::cout << "You Enter a Room with text on the wall that reads: \n" << '\n';
  while (choice != "an egg") {
    std::cout << "On the outside, beige walls surround a castle of the "
              << "purest white, \n"
              << "and a tressure of liquid gold hides in the center. \n"
              << "What is it? \n"
              << " (Type Answer in all Lower Case)"
              << '\n';
    std::getline(std::cin >> std::ws, choice);
    if (choice != "an egg") {
        std::cout << '\n';
        std::cout << "That is not the answer to the Riddle!" << '\n';
      }
  }
  std::cout << '\n';
  posIndex = 11;
  changeRooms(posIndex, game);
}
