
#include "Goblin.h"
#include "Dragon.h"
#include "Player.h"
#include <vector>


int main() {
    Player player("Hero", 100);

    std::vector<Enemy*> enemies;
    enemies.push_back(new Goblin());
    enemies.push_back(new Dragon());

    for (Enemy* enemy : enemies) {
        std::cout << "--- " << player.getName() << " vs " << enemy->getName() << " ---\n";

        while (player.isAlive() && enemy->isAlive()) {
            player.attack(*enemy);
            if (enemy->isAlive()) {
                enemy->attack(player);
            }
        }

        std::cout << (player.isAlive() ? player.getName() : enemy->getName()) << " wins!\n\n";
    }

    for (Enemy* enemy : enemies) {
        delete enemy;
    }

    return 0;
}