#include "game/Board.h"
#include <memory> // Ensure this is included

Board::Board() {
    // Initialize a 10x10 grid with nullptr (empty board)
    const size_t rows = 10;
    const size_t cols = 10;

    // Resize the outer vector (rows)
    grid.resize(rows);

    // Resize each inner vector (columns) individually
    for (auto& row : grid) {
        row.resize(cols); // Inner vectors are resized, default-constructing unique_ptr (to nullptr)
    }
}

bool Board::placeTile(const Tile& tile, int x, int y) {
    // Check boundaries and if the cell is occupied
    if (x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size() || grid[x][y] != nullptr) {
        return false; // Invalid placement
    }

    // Place the tile on the board using std::make_unique
    // Creates a new Tile object on the heap and assigns ownership to unique_ptr in the grid.
    grid[x][y] = std::make_unique<Tile>(tile); // Use std::make_unique for memory management
    return true;
}