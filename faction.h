//
// Created by Cristian Gutierrez on 1/26/24.
//

#ifndef WRESTLING_JOURNEY_FACTION_H
#define WRESTLING_JOURNEY_FACTION_H

#include "wrestler.h"
#include <iostream>
#include <string>
#include <vector>

class Faction {
private:
  int cohesion;
  int ego_conflicts;

public:
  std::string name;
  int comraderie;
  int time_together;
  int number_of_members;
  std::vector<Wrestler *> members;

  Faction(std::string name, int cohesion, int ego_conflicts, int comraderie,
          int time_together, int number_of_members,
          std::vector<Wrestler *> members);

  ~Faction();
};

#endif // WRESTLING_JOURNEY_FACTION_H
