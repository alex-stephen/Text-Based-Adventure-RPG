#ifndef FILLEROOMS_H
#define FILLEROOMS_H

#include "Rooms.h"
#include <iostream>
#include <string>
#include <vector>
#include "Game.h"
/**
* Implementation of FillerRooms
*This room inherates from the class room.
**/
class FillerRooms : public Rooms {
 public:
  /**
  * Pure Virtual Room function implementated in Riddle
  *@param[in] Game Pointer game
  **/
  virtual void Room(Game* game) = 0;
 protected:
  std::string choice = "";
};
#endif
