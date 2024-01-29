#include "faction.h"
#include "manager.h"
#include "wrestler.h"
#include <iostream>
#include <random>
#include <vector>

// void random_selection();

int main() {
  Wrestler *john = new Wrestler("John Cena", 73, 251, 9, 7, 8, 7,
                                wrestler_persona::Face, 90);
  std::cout << john->name << " weighing " << john->weight
            << " pounds and measuring " << john->height << " inches!"
            << std::endl;

  Wrestler *omega = new Wrestler("Kenny Omega", 72, 218, 8, 8, 10, 9,
                                 wrestler_persona::Face, 90);
  std::cout << omega->name << " weighing " << omega->weight
            << " pounds and measuring " << omega->height << " inches!"
            << std::endl;

  std::vector<Wrestler *> all_stars_members{john, omega};
  Faction *all_stars = new Faction("All Stars", 8, 2, 7, 3,
                                   static_cast<int>(all_stars_members.size()),
                                   all_stars_members);

  delete john;
  delete omega;
  delete all_stars;

  Manager *heyman = new Manager("Heyman", 10, 9, 6, manager_persona::Heel, 95);
  std::cout << heyman->name << " is a charismatic manager we love to hate!"
            << std::endl;
  delete heyman;

  std::cout << "This is a test" << std::endl;
  return 0;
}

/*void random_selection() {
  std::vector<int> trial{8, 90, 50, 22, 46};

  std::random_device r;
  std::default_random_engine e1(r());
  std::uniform_int_distribution<int> uniform_dist(
      1, static_cast<int>(trial.size() - 1));

  int element_index = uniform_dist(e1);
  int element_choice = trial[element_index];
  std::cout << "Randomly-chosen element: " << element_choice
            << ".\nAt index: " << element_index << std::endl;
}*/
