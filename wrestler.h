//
// Created by Cristian Gutierrez on 1/26/24.
//

#ifndef WRESTLING_JOURNEY_WRESTLER_H
#define WRESTLING_JOURNEY_WRESTLER_H

#include <string>

enum class wrestler_persona {
  Heel,
  Face,
};

class Wrestler {
 private:
  int strength;
  int speed;
  int iq;
  int technical_ability;
  // strength, speed, iq, and technical abilities number out of 10
  struct record {
    int wins;
    int losses;
  };
  wrestler_persona persona;
  int popularity;

 public:
  std::string name;
  int weight;  // pounds
  int height;  // inches

  Wrestler(std::string name, int height, int weight, int strength, int speed,
           int iq, int technical_ability, wrestler_persona persona,
           int popularity);

  ~Wrestler();
};

#endif // WRESTLING_JOURNEY_WRESTLER_H
