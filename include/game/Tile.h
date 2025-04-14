#ifndef TILE_H
#define TILE_H

#include <string>
#include <vector>

class Tile {
public:
    enum Feature { ROAD, CITY, FIELD, MONASTERY };

    Tile(const std::vector<Feature>& features);

    const std::vector<Feature>& getFeatures() const;

private:
    std::vector<Feature> features;
};

#endif // TILE_H