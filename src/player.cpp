#include <iostream>
#include "player.h"

using namespace std;

void showStats(const Player &player) {
    cout << "\n--- Player Stats ---\n";
    cout << "Health: " << player.health << endl;
    cout << "Food: " << player.food << endl;
    cout << "Warmth: " << player.warmth << endl;
    cout << "Sanity: " << player.sanity << endl;
    cout << "Inventory: ";
    if(player.inventory.empty()) cout << "Empty";
    else {
        for (auto &item : player.inventory) cout << item << " ";
    }
    cout << "\n-------------------\n\n";
}
