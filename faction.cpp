//
// Created by Cristian Gutierrez on 1/26/24.
//

#include "faction.h"
#include <string>
#include <vector>

Faction::Faction(std::string name, int cohesion, int ego_conflicts,
                 int comraderie, int time_together, int number_of_members,
                 std::vector<Wrestler*> members)
    : name(name), cohesion(cohesion), ego_conflicts(ego_conflicts),
      comraderie(comraderie), time_together(time_together),
      number_of_members(number_of_members), members(members) {
          std::cout << "New Faction, " << name << ", found!\n" << std::endl;
      }

Faction::~Faction() {
  std::cout << name << " no longer a faction.\n" << std::endl;
}
