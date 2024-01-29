//
// Created by Cristian Gutierrez on 1/26/24.
//

#ifndef WRESTLING_JOURNEY_MANAGER_H
#define WRESTLING_JOURNEY_MANAGER_H

#include <string>
enum manager_persona { Heel, Face };

class Manager {
 private:
  int mic_skills;
  int charisma;
  int involvement;
  manager_persona persona;
  int popularity;

 public:
  std::string name;

  Manager(std::string name, int mic_skills, int charisma, int involvement,
          manager_persona persona, int popularity);

  ~Manager();
};

#endif // WRESTLING_JOURNEY_MANAGER_H
