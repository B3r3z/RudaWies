#include "game/Game.h" // Zmieniono ścieżkę
#include "ui/ConsoleUI.h" // Zmieniono ścieżkę

int main() {
    Game game;
    ConsoleUI ui(game);

    ui.run();

    return 0;
}