#include "faction.h"
#include "manager.h"
#include "wrestler.h"
#include <iostream>
//#include <random>
#include <string>
#include <vector>

// void random_selection();

int main() {
  int wrestler_choice;
  std::string player_name;
  int player_height;
  int player_weight;
  int allegiance_choice;
  wrestler_persona player_allegiance;
  std::cout << "Which wrestler type do you want to be?" << std::endl;
  std::cout << "1. Strength" << std::endl;
  std::cout << "2. All-Around" << std::endl;
  std::cout << "3. Speed" << std::endl;
  std::cout << "Enter number: ";
  std::cin >> wrestler_choice;
  std::cout << "Enter your wrestler's name: ";
  std::cin >> player_name;
  std::cout << "Enter height in inches: ";
  std::cin >> player_height;
  std::cout << "Enter weight in lbs: ";
  std::cin >> player_weight;
  std::cout << "Will you be a Heel or face?\nEnter 1 for heel or 2 for face: ";
  std::cin >> allegiance_choice;
  if (allegiance_choice == 1) {
    player_allegiance = wrestler_persona::Heel;
  } else {
    player_allegiance = wrestler_persona::Face;
  }

  Wrestler *player;
  switch (wrestler_choice) {
  case 1:
    player = new Wrestler(player_name, player_height, player_weight, 90, 60,
                           60, 50, player_allegiance, 4);
    break;
  case 3:
    player = new Wrestler(player_name, player_height, player_weight, 60, 90,
                           60, 50, player_allegiance, 4);
    break;
  default:
    player = new Wrestler(player_name, player_height, player_weight, 75, 75,
                           60, 50, player_allegiance, 4);
  }
  std::cout << player->name << " weighing " << player->weight
            << " pounds and measuring " << player->height << " inches!"
            << std::endl;
  delete player;

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
