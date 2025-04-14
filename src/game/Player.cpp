#include "game/Player.h"

Player::Player(const std::string& name) : name(name), score(0) {}

const std::string& Player::getName() const {
    return name;
}

int Player::getScore() const {
    return score;
}

void Player::addScore(int points) {
    score += points;
}