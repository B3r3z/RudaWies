#include "game/Game.h" // Zmieniono ścieżkę
#include <iostream>

Game::Game() {
    initializeTiles();
}

void Game::addPlayer(const std::string& name) {
    players.emplace_back(name);
}

void Game::start() {
    std::cout << "Game started!" << std::endl;
    while (!tileDeck.empty()) {
        playTurn();
    }
    std::cout << "Game over!" << std::endl;
}

void Game::initializeTiles() {
    // Example: Add some tiles to the deck
    tileDeck.emplace_back(std::vector<Tile::Feature>{Tile::ROAD, Tile::CITY});
    tileDeck.emplace_back(std::vector<Tile::Feature>{Tile::FIELD, Tile::MONASTERY});
}

void Game::playTurn() {
    // Example turn logic
    if (tileDeck.empty()) return;

    Tile currentTile = tileDeck.back();
    tileDeck.pop_back();

    // Placeholder for player actions
    std::cout << "A tile was drawn and placed." << std::endl;
}