#include "Player.h"
#include "Item.h"
#include <string>
#include "gtest/gtest.h"

TEST(TestPlayer, listInventoryTest) {
  std::string s1 = "sword of destiny";
  std::string s2 = "oathbringer";
  std::string s3 = "dungeon key";
  std::string s4 = "candle";

  Item* inv = new Item();

  inv->addItem(s1);
  inv->addItem(s2);
  inv->addItem(s3);
  inv->addItem(s4);

  Player* p1 = new Player();

  p1->listInventory();

  delete p1;
  delete inv;
}

TEST(TestPlayer, takeDamageLiveTest) {
  Player* p1 = new Player();

  p1->takeDamage(90, p1);

  EXPECT_FALSE(p1->checkStatus(p1));

  delete p1;
}

TEST(TestPlayer, takeDamageDieTest) {
  Player* p1 = new Player();

  p1->takeDamage(101, p1);

  EXPECT_TRUE(p1->checkStatus(p1));

  delete p1;
}

TEST(TestPlayer, updateDamageNoKnifeTest) {
  Player* p1 = new Player();

  p1->updateDamage(p1);

  EXPECT_EQ(p1->getDamage(), 5);

  delete p1;
}

TEST(TestPlayer, updateDamageKnifeTest) {
  Player* p1 = new Player();

  p1->getPlayerItems()->addItem("Knife");
  p1->updateDamage(p1);

  EXPECT_EQ(p1->getDamage(), 60);

  delete p1;
}
