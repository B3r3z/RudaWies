#ifndef GAME_H
#define GAME_H

#include "game/Board.h"  
#include "game/Player.h" 
#include "game/Tile.h"   
#include <vector>

class Game {
public:
    Game();

    void addPlayer(const std::string& name);
    void start();

private:
    Board board;
    std::vector<Player> players;
    std::vector<Tile> tileDeck;

    void initializeTiles();
    void playTurn();
};

#endif // GAME_H