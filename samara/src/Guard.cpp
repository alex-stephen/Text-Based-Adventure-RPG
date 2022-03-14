#include <iostream>
#include <string>
#include "Guard.h"

void Guard::talk(Game* g) {
  std::cout << "The " << name << " appoaches your cell."
            << '\n'
            << name << ": KEEP QUIET YOU!" << '\n';

  while (value) {
    choices();

    if (choice == 1) {
      std::cout << "The Guard walks closer to your cell" << '\n';
      std::cout << "You grab the Guard's vest and pull his face into the"
                << " cell bars\nKnocking him unconcious." << '\n';
      value = false;
    } else if (choice == 2) {
        std::cout << "The Guard walks back to his post after some time."
                  << '\n';
        choices();
    } else {
        std::cout << "This is not a valid option" << '\n';
    }
  }
}

void Guard::choices() {
  std::cout << "[1] \"Why don't you make me?\"" << '\n'
            << "[2] Stay Quiet" << '\n';
  std::cin >> choice;
}
