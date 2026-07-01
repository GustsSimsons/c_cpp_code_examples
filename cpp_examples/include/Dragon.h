#pragma once
#include "Enemy.h"

class Dragon : public Enemy {
public:
    Dragon();
    void attack(Entity& target) override;
};