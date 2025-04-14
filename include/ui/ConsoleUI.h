#ifndef CONSOLE_UI_H
#define CONSOLE_UI_H

#include "game/Game.h" // Zmieniono ścieżkę

class ConsoleUI {
public:
    ConsoleUI(Game& game);

    void run();

private:
    Game& game;

    void displayBoard();
    void displayScores();
    void handlePlayerInput();
};

#endif // CONSOLE_UI_H