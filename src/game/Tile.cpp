#include "game/Tile.h"

Tile::Tile(const std::vector<Feature>& features) : features(features) {}

const std::vector<Tile::Feature>& Tile::getFeatures() const {
    return features;
}