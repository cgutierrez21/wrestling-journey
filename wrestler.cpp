//
// Created by Cristian Gutierrez on 1/26/24.
//

#include "wrestler.h"
#include <iostream>
#include <string>

Wrestler::Wrestler(std::string name, int height, int weight, int strength,
                   int speed, int iq, int technical_ability,
                   wrestler_persona persona, int popularity)
    : name(name), height(height), weight(weight), strength(strength),
      speed(speed), iq(iq), technical_ability(technical_ability),
      persona(persona), popularity(popularity) {
  level = get_level();
}

Wrestler::~Wrestler() {
  std::cout << "End of the line for " << name << ".\n" << std::endl;
}

double Wrestler::get_level() {
  double level_sum;
  level_sum = strength + speed + iq + technical_ability;
  return level_sum / 4;
}

