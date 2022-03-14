#include "Maid.h"
#include "Game.h"
#include <iostream>
#include <string>

void Maid::talk(Game* g) {
  std::cout << "\n\nYou see an " << name << " staring at an empty wall, she"
            << " scurries over to you \n"
            << name << ": Why hello there!\nIt appears our first guest has"
            << "arrived\nMy name is Matilda,\n"
            << "I have been caring for this castle for "
            << "over 30 years...\nI'm in the process of redecorating the Grand"
            << " Hall, what do you think of it?\n\n";
  while (value) {
    choices();

    if (choice == 1) {
      std::cout << "She smiles and clasps her hands together \n"
                << name << ": Why thank you! I cannot wait to see the finished "
                << "product,\nHowever, my work will not be done until I find"
                << " the missing painting I made of a fedora with safari flaps"
                << "\n";
      value = false;
    } else if (choice == 2) {
      std::cout << "She looks at you in disgust,\n"
                << name << ": How dare you insult my creative vision,\n"
                <<"YOU MONSTER!\n"
                << "First my painting of a fedora with safari flaps disappears"
                << "\n"
                << "And now a common crook insults the Great Hall\nI worked so"
                << " hard to redecorate.\n"
                << "She pulls out a knife and stabs you in the gut\n"
                << "You fell victim to the sin of wrath\n"
                << "--------------YOU DIED--------------\n\n";
                g->StartGame(g);
    } else {
      std::cout << "Not a valid response. \n";
    }
  }
}

void Maid::talk2(Game* g) {
  std::cout << name << ": You found it!? Where did you find it?\nOh it doesn't"
            << " matter\n"
            << "Now I'm not going to lose my job!\nThank you, thank you\n"
            << "She reaches into her pocket and pulls out a key\n"
            << name << ": I actually found this key while cleaning the castle\n"
            << "I dont't know what it unlocks, maybe it will be of some value"
            << " to you";
}

void Maid::choices() {
  std::cout << "[1] \"It's beautiful, whoever decorated this room has an eye"
            << " for detail!\" \n"
            << "[2] \"You've gotta figure out what it is you do,"
            << " you had all these years to figure it out\" \n";
  std::cin >> choice;
}
