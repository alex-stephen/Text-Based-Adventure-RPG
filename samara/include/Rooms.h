#ifndef ROOMS_H
#define ROOMS_H

#include <vector>
#include <string>
#include "Game.h"
//#include "Player.h"

/**
* Implementation of each room generated. This file contains each room and the basic mechanics of how
* the player class will interact with each room in the game. This will also determine which items and npcs will
* appear in the generated room.
*/

/**
* Room Constructor Class Room.h
**/
class Rooms {
 public:
   /**
   * Room Constructor
   **/
  Rooms();
  /**
  * Changes the room the player is currently in to countinue into the next room when has moved
  * To determine the players location the position index with locate the player along with the possible movements that
  * that are available
  * @param[in] int posIndex, Determine what room you travel to.
  * @param[in] Game Pointer.
  **/
  void changeRooms(int posIndex, Game* game);
  /**
  * Pure Virtual Room Function.
  *@param[in] Game Pointer
  **/
  virtual void Room(Game* game) = 0;
 protected:
  int posIndex;
};
#endif
