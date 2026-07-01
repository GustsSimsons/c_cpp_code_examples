#include <Player.h>

Player::Player(std::string name, int health) : Entity(name, health) {}

void Player::attack(Entity& target) {
    std::cout << name << " attacks " << target.getName() << " for 10 dmg\n";
    target.takeDamage(10);
}