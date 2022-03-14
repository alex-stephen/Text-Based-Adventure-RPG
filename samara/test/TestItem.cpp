#include "Item.h"
#include <string>
#include "gtest/gtest.h"

TEST(TestItem, AddItemTest) {
  Item* a1 = new Item();
  std::string s1 = "Sword";

  a1->addItem(s1);

  EXPECT_TRUE(a1->findItem(s1));

  delete a1;
}

TEST(TestItem, DropItemTest) {
  Item* a1 = new Item();

  std::string s1 = "sword";

  a1->addItem(s1);

  a1->dropItem(s1);

  EXPECT_FALSE(a1->findItem(s1));

  delete a1;
}

TEST(TestItem, clearItemsTest) {
  Item* a1 = new Item();

  a1->addItem("Knife");
  a1->addItem("Spoon");
  a1->addItem("Fork");
  a1->addItem("Butter Knife");
  a1->addItem("Dessert Spoon");
  a1->addItem("Wine Glass");
  a1->addItem("Spork");

  EXPECT_TRUE(a1->findItem("Knife"));
  EXPECT_TRUE(a1->findItem("Wine Glass"));

  a1->clearItems();

  EXPECT_FALSE(a1->findItem("Knife"));
  EXPECT_FALSE(a1->findItem("Spoon"));
  EXPECT_FALSE(a1->findItem("Fork"));
  EXPECT_FALSE(a1->findItem("Butter Knife"));
  EXPECT_FALSE(a1->findItem("Dessert Spoon"));
  EXPECT_FALSE(a1->findItem("Wine Glass"));
  EXPECT_FALSE(a1->findItem("Spork"));

  delete a1;
}
