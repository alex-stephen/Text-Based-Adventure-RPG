#include "Rooms.h"
#include "Cell.h"
#include "Game.h"
#include "Item.h"
#include "Player.h"
#include <vector>

Game::Game() {
  playerOne = new Player();
}

Player* Game::getPlayer() {
  return playerOne;
}

void Game::StartGame(Game* game) {
  Cell* c = new Cell();
  c->Room(game);
}

void Game::clearPlayerItems(Game* g) {
  g->getPlayer()->getPlayerItems()->clearItems();
}

Game::~Game() {
  delete playerOne;
}
