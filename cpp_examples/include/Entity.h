#pragma once

#include <string>
#include <iostream>

class Entity {  
protected:
    std::string name;
    int health;

public:
    Entity(std::string name, int health);
    virtual ~Entity();

    virtual void attack(Entity& target) = 0;
    virtual void takeDamage(int amount);

    bool isAlive() const;
    std::string getName() const;
    int getHealth() const;
};