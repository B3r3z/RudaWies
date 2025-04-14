#ifndef BOARD_H
#define BOARD_H

#include "game/Tile.h" 
#include <vector>
#include <memory> 

class Board {
public:
    Board();

    bool placeTile(const Tile& tile, int x, int y);

private:
    // 2D grid to represent the board using smart pointers
    std::vector<std::vector<std::unique_ptr<Tile>>> grid; 
};

#endif // BOARD_H