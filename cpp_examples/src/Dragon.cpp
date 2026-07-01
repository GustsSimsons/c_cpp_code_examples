#include "Dragon.h"

Dragon::Dragon() : Enemy("Dragon", 80) {}

void Dragon::attack(Entity& target) {
    std::cout << name << " breathes fire on " << target.getName() << " for 20 dmg\n";
    target.takeDamage(20);
}