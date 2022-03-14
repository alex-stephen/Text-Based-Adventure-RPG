#include "Rooms.h"
#include "Cell.h"
#include "Hallway.h"
#include "Riddle.h"
#include "Kitchen.h"
#include "Brewery.h"
#include "GreatHall.h"
#include "Gatehouse.h"
#include "Chaple.h"
#include "Tower.h"

Rooms::Rooms() {
  posIndex = 0;
}

void Rooms::changeRooms(int pos, Game* game) {
  switch (pos) {
    case 0: {
      posIndex = pos;
      Cell* cell = new Cell();
      cell->Room(game);
      break;
    }
    case 1: {
      posIndex = pos;
      Hallway* hall = new Hallway();
      hall->Room(game);
      break;
    }
    case 2: {
      posIndex = pos;
      CastleRiddle* castle = new CastleRiddle();
      castle->Room(game);
      break;
    }
    case 3: {
      posIndex = pos;
      Kitchen* kitchen = new Kitchen();
      kitchen->Room(game);
      break;
    }
    case 4: {
      posIndex = pos;
      Brewery* brew = new Brewery();
      brew->Room(game);
      break;
    }
    case 5: {
      posIndex = pos;
      BeachRiddle* br = new BeachRiddle();
      br->Room(game);
    }
    case 6: {
      posIndex = pos;
      GreatHall* gh = new GreatHall();
      gh->Room(game);
    }
    case 7: {
      posIndex = pos;
      Chaple* ch = new Chaple();
      ch->Room(game);
    }
    case 8: {
      posIndex = pos;
      SandRiddle* s = new SandRiddle();
      s->Room(game);
    }
    case 9: {
      posIndex = pos;
      EggRiddle* e = new EggRiddle();
      e->Room(game);
    }
    case 10: {
      posIndex = pos;
      Tower* t = new Tower();
      t->Room(game);
    }
    case 11: {
      posIndex = pos;
      Gatehouse* gh = new Gatehouse();
      gh->Room(game);
    }
  }
}
