#include "TinyDinkyDaffy.h"
#include "gtest/gtest.h"

TEST(TestTinyDinkyDaffy, checkStatusTest) {
  TinyDinkyDaffy* tdd = new TinyDinkyDaffy();
  int damage = 121;

  EXPECT_FALSE(tdd->checkStatus(tdd));

  tdd->takeDamage(damage, tdd);

  EXPECT_TRUE(tdd->checkStatus(tdd));

  delete tdd;
}

TEST(TestTinyDinkyDaffy, getDamageTest) {
  TinyDinkyDaffy* tdd = new TinyDinkyDaffy();
  int damage = 45;

  EXPECT_EQ(damage, tdd->getDamage());

  delete tdd;
}
