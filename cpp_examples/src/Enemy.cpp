#include "Enemy.h"

Enemy::Enemy(std::string name, int health) : Entity(name, health) {}

void Enemy::attack(Entity& target) {
    std::cout << name << " attacks " << target.getName() << " for 5 damage!\n";
    target.takeDamage(5);
}