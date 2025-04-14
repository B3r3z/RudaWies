#include "ui/ConsoleUI.h" 
#include <iostream>

ConsoleUI::ConsoleUI(Game& game) : game(game) {}

void ConsoleUI::run() {
    std::cout << "Welcome to RudaWies!" << std::endl;

    // Example: Add players
    game.addPlayer("Player 1");
    game.addPlayer("Player 2");

    game.start();
}

void ConsoleUI::displayBoard() {
    // Placeholder for board display logic
    std::cout << "Displaying the board..." << std::endl;
}

void ConsoleUI::displayScores() {
    // Placeholder for score display logic
    std::cout << "Displaying scores..." << std::endl;
}

void ConsoleUI::handlePlayerInput() {
    // Placeholder for handling player input
    std::cout << "Handling player input..." << std::endl;
}