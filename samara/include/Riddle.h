#include <string>
#include "FillerRooms.h"
#include "Game.h"

/**
* Implementation of Riddle, consists of adding player solvable riddle that will be included into
* the generated room. The player must complete the riddle with a string input to complete it.
* Inherates from FillerRooms.
**/

class Riddle : public FillerRooms {
 public:
/**
* Constructor Riddle
**/
  void Room(Game* game);
};
/**
* Implementation of the Castle riddle, player must correctly guess the answer to
* continue moving to the next room.
*@param[in] Game Pointer
**/
class CastleRiddle : public FillerRooms {
 public:
  void Room(Game* game);
};
/**
* Implementation of the Beach riddle, player must correctly guess the answer to
* continue moving to the next room.
*@param[in] Game Pointer
**/
class BeachRiddle : public FillerRooms {
 public:
  void Room(Game* game);
};
/**
* Implementation of the Sand Riddle, player must correctly guess the answer to
* continue moving to the next room.
*@param[in] Game Pointer
**/
class SandRiddle : public FillerRooms {
 public:
  void Room(Game* game);
};
/**
* Implementation of the Egg Riddle, player must correctly guess the answer to
* continue moving to the next room.
*@param[in] Game Pointer
**/
class EggRiddle : public FillerRooms {
 public:
  void Room(Game* game);
};
