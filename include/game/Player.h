#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
    Player(const std::string& name);

    const std::string& getName() const;
    int getScore() const;
    void addScore(int points);

private:
    std::string name;
    int score;
};

#endif // PLAYER_H