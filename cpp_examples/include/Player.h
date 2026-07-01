#pragma once

#include "Entity.h"

class Player : public Entity {
public:
    Player(std::string name, int health);
    void attack(Entity& target) override;
};