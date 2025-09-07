#ifndef EVENTS_H
#define EVENTS_H

#include "player.h"

void explore(Player &player);
void fight(Player &player);
void defend(Player &player);
void rest(Player &player);
void scavenge(Player &player);
void nightEvent(Player &player);
bool checkGameOver(const Player &player);

#endif
