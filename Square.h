#pragma once
#ifndef SQUARE_H
#define SQUARE_H
#include "Tile.h"
#include <vector>
class Square : public Tile {
private:
	std::vector<Tile> tiles;
public:
	Square();
	//!Construct square with tiles
	Square(std::vector<Tile> newTiles);
	//!Add a tile to square
	void addTile(Tile newTile);
	//!Remove tile from square
	void removeTile(int index);
	//!Get a given tile
	Tile getTile(int index);
	//!Get all tiles
	std::vector<Tile> getTiles();
};
#endif // !SQUARE_H
