#include "Entity.h"
#include <iostream>

Entity::Entity(std::string name, int health) {
    this->name = name;
    this->health = health;
}

Entity::~Entity() {}

void Entity::takeDamage(int amount) {
    health -= amount;
}

bool Entity::isAlive() const {
    return health > 0;
}

std::string Entity::getName() const {
    return name;
}

int Entity::getHealth() const {
    return health;
}