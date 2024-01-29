//
// Created by Cristian Gutierrez on 1/26/24.
//

#include "manager.h"
#include <iostream>
#include <string>

Manager::Manager(std::string name, int mic_skills, int charisma,
                 int involvement, manager_persona persona, int popularity)
    : name(name), mic_skills(mic_skills), charisma(charisma),
      involvement(involvement), persona(persona), popularity(popularity) {}

Manager::~Manager() {
  std::cout << name << " is no longer manager.\n" << std::endl;
}
