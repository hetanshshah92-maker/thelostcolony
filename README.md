# thelostcolony
# The Lost Colony - Text-Based Adventure Game

Welcome to **The Lost Colony**, a text-based adventure game written in C++!  
Explore an abandoned research station in Antarctica, manage your resources, fight threats, scavenge items, and survive the harsh environment.

## Features
- Command-based gameplay: `explore`, `fight`, `defend`, `rest`, `scavenge`, `stats`, `help`, `quit`
- Resource management: Health, Food, Warmth, and Sanity
- Inventory system: collect useful items while exploring
- Random events and night-time challenges
- Game over conditions based on player survival
- Modular C++ code, easy to extend

## Getting Started

### Prerequisites
- A C++ compiler (e.g., g++, clang++)
- Terminal or command prompt

### Build and Run
```bash
g++ main.cpp game.cpp player.cpp events.cpp -o LostColony
./LostColony    # Linux/Mac
LostColony.exe  # Windows
