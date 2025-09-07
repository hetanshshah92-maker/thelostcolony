#include <iostream>
#include <cstdlib>
#include <ctime>
#include "events.h"

using namespace std;

void explore(Player &player) {
    int event = rand() % 5;
    switch(event) {
        case 0:
            cout << "\nYou found some canned food! +20 Food\n";
            player.food += 20;
            break;
        case 1:
            cout << "\nA patch of ice collapses under your feet! -10 Health\n";
            player.health -= 10;
            break;
        case 2:
            cout << "\nYou discover old research notes. -10 Sanity\n";
            player.sanity -= 10;
            break;
        case 3:
            cout << "\nYou find extra thermal clothing. +15 Warmth\n";
            player.warmth += 15;
            break;
        case 4:
            cout << "\nNothing interesting happens.\n";
            break;
    }
    player.food -= 5;
    player.warmth -= 5;
}

void fight(Player &player) {
    int result = rand() % 3;
    if(result == 0) {
        cout << "\nYou defeated the creature! +10 Sanity\n";
        player.sanity += 10;
    } else {
        cout << "\nYou got hurt in the fight! -15 Health\n";
        player.health -= 15;
    }
    player.food -= 5;
}

void defend(Player &player) {
    cout << "\nYou defend yourself and avoid damage. +5 Sanity\n";
    player.sanity += 5;
    player.food -= 5;
}

void rest(Player &player) {
    cout << "\nYou rest and regain strength.\n";
    player.food -= 5;
    player.warmth += 10;
    player.sanity += 5;
}

void scavenge(Player &player) {
    int event = rand() % 3;
    switch(event) {
        case 0:
            cout << "\nYou found a medkit! +15 Health\n";
            player.health += 15;
            player.inventory.push_back("Medkit");
            break;
        case 1:
            cout << "\nYou found a piece of clothing. +10 Warmth\n";
            player.warmth += 10;
            player.inventory.push_back("Clothing");
            break;
        case 2:
            cout << "\nYou found nothing.\n";
            break;
    }
    player.food -= 5;
}

void nightEvent(Player &player) {
    int danger = rand() % 3;
    switch(danger) {
        case 0:
            cout << "\nThe cold night chills you. -10 Warmth\n";
            player.warmth -= 10;
            break;
        case 1:
            cout << "\nYou have a nightmare. -5 Sanity\n";
            player.sanity -= 5;
            break;
        case 2:
            cout << "\nA minor accident occurs while resting. -5 Health\n";
            player.health -= 5;
            break;
    }
}

bool checkGameOver(const Player &player) {
    if(player.health <= 0) { cout << "You have succumbed to your injuries.\n"; return true; }
    if(player.food <= 0) { cout << "You have starved.\n"; return true; }
    if(player.warmth <= 0) { cout << "You have frozen to death.\n"; return true; }
    if(player.sanity <= 0) { cout << "You lost your mind.\n"; return true; }
    return false;
}
