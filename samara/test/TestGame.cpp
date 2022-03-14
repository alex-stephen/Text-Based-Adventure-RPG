#include "Game.h"
#include <string>
#include <vector>
#include <iostream>
#include "gtest/gtest.h"

TEST(TestGame, clearPlayerItemsTest) {
  Game* g = new Game();
  std::string s1 = "sword of destiny";
  std::string s2 = "oathbringer";
  std::string s3 = "dungeon key";
  std::string s4 = "candle";

  g->getPlayer()->getPlayerItems()->addItem(s1);
  g->getPlayer()->getPlayerItems()->addItem(s2);
  g->getPlayer()->getPlayerItems()->addItem(s3);
  g->getPlayer()->getPlayerItems()->addItem(s4);

  g->clearPlayerItems(g);


  EXPECT_TRUE(g->getPlayer()->getPlayerItems()->getItem().empty());

  delete g;
}
