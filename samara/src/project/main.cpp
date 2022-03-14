#include "Player.h"
#include "Rooms.h"
#include "Npc.h"
#include "Item.h"
#include "Game.h"
#include "Chaple.h"
#include "GreatHall.h"
#include "Tower.h"
#include "FillerRooms.h"
#include "Gatehouse.h"

int main() {
  Game* g = new Game();
  g->StartGame(g);

  return 0;
}
