#ifndef GAME_H
#define GAME_H

#include <vector>
#include <string>
#include "Player.h"

/**
* Implementation of the game
**/
class Game {
 public:
/**
* Game Constructor
**/
  Game();
/**
* Game Decontructor
**/
  ~Game();
/**
* Get Player to start the game
* @return Player Pointer
**/
  Player* getPlayer();
/**
* Start the game
* @param game to start the game sequence
* @return game
**/
  void StartGame(Game* game);
  void clearPlayerItems(Game* g);
  void ExitGame();

 private:
  int start = 0;
  Player* playerOne;
};
#endif
