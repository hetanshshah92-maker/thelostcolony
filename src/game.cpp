#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "game.h"
#include "events.h"
#include "player.h"

using namespace std;

void startGame() {
    srand(time(0));
    Player player = {100, 50, 50, 50, {}};
    string command;

    cout << "Welcome to The Lost Colony Text Adventure!\n";
    cout << "You are investigating an abandoned research station in Antarctica.\n\n";

    // Display the commands at the start
    cout << "You can perform the following actions by typing the commands:\n";
    cout << "------------------------------------------------------------\n";
    cout << "explore  - Explore the station and uncover events\n";
    cout << "fight    - Engage in combat with threats\n";
    cout << "defend   - Defend yourself to reduce damage\n";
    cout << "rest     - Rest to regain warmth and sanity\n";
    cout << "scavenge - Search for useful items\n";
    cout << "stats    - View your current health, food, warmth, sanity, and inventory\n";
    cout << "help     - Show this list of commands again\n";
    cout << "quit     - Exit the game\n";
    cout << "------------------------------------------------------------\n\n";

    while(true) {
        if(checkGameOver(player)) break;

        cout << "> ";
        cin >> command;

        if(command == "explore") explore(player);
        else if(command == "fight") fight(player);
        else if(command == "defend") defend(player);
        else if(command == "rest") rest(player);
        else if(command == "scavenge") scavenge(player);
        else if(command == "stats") showStats(player);
        else if(command == "help") {
            cout << "Commands: explore, fight, defend, rest, scavenge, stats, quit\n";
        }
        else if(command == "quit") {
            cout << "Exiting game.\n";
            break;
        }
        else {
            cout << "Unknown command. Type 'help' for list of commands.\n";
        }

        nightEvent(player);
    }

    cout << "\nGame Over! Thanks for playing.\n";
}
