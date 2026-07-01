#pragma once

#include "Entity.h"

class Enemy : public Entity {
public:
    Enemy(std::string name, int health);
    void attack(Entity& target) override;
};