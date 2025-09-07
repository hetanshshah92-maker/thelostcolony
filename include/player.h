#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <string>

struct Player {
    int health;
    int food;
    int warmth;
    int sanity;
    std::vector<std::string> inventory;
};

void showStats(const Player &player);

#endif
