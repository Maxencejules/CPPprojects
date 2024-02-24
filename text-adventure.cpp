#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Display introduction and instructions
    cout << "Welcome to the Magical Forest Adventure!" << endl;
    cout << "You find yourself in a mysterious forest filled with wonders and dangers." << endl;
    cout << "Your goal is to safely navigate through the forest and reach the enchanted castle." << endl;
    cout << "Let's begin!" << endl;

    // Initialize player's variables
    int playerHealth = 100;
    int playerGold = 0;

    // Main game loop
    while (playerHealth > 0) {
        // Display player's status
        cout << "------------------------------" << endl;
        cout << "Player Status:" << endl;
        cout << "Health: " << playerHealth << endl;
        cout << "Gold: " << playerGold << endl;
        cout << "------------------------------" << endl;

        // Generate a random encounter
        int encounter = rand() % 5; // 0: Goblin, 1: Troll, 2: Fairy, 3: Treasure, 4: Healing spring

        // Handle the encounter
        switch (encounter) {
            case 0:
                cout << "You encounter a mischievous Goblin!" << endl;
                playerHealth -= 10; // Goblin encounter decreases player's health by 10
                break;
            case 1:
                cout << "A fearsome Troll blocks your path!" << endl;
                playerHealth -= 20; // Troll encounter decreases player's health by 20
                break;
            case 2:
                cout << "A friendly Fairy appears and offers you a gift!" << endl;
                playerGold += 10; // Fairy encounter increases player's gold by 10
                break;
            case 3:
                cout << "You stumble upon a hidden treasure chest!" << endl;
                playerGold += 20; // Treasure encounter increases player's gold by 20
                break;
            case 4:
                cout << "You find a healing spring and replenish your health!" << endl;
                playerHealth = 100; // Healing spring encounter replenishes player's health to 100
                break;
        }

        // Check if player has reached the end of the game
        if (playerGold >= 50) {
            cout << "Congratulations! You've collected enough gold and reached the enchanted castle!" << endl;
            return 0; // End game loop if player has reached the end
        }

        // Prompt player for action and handle player's choice
        int action;
        do {
            cout << "What will you do next?" << endl;
            cout << "1. Continue exploring" << endl;
            cout << "2. Rest and regain strength" << endl;
            cout << "Enter your choice: ";
            cin >> action;
        } while (action != 1 && action != 2);

        // Update player's status based on the chosen action
        if (action == 1) {
            // Player continues exploring
            // No change in status in this example
        } else {
            // Player rests and regains strength
            playerHealth += 10; // Increase player's health by 10
            cout << "You take a rest and regain some strength." << endl;
        }
    }

    // Game over
    cout << "Game Over! Your adventure has come to an end." << endl;

    return 0;
}
