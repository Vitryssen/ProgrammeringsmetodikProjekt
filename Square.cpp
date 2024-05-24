#include "Square.h"
#include "Tile.h"
Square::Square(): Tile()
{
}
Square::Square(std::vector<Tile> newTiles): tiles(newTiles)
{
}
void Square::addTile(Tile newTile)
{
	tiles.push_back(newTile);
}

void Square::removeTile(int index)
{
	tiles.at(index).setValue(0);
}

Tile Square::getTile(int index)
{
	return tiles.at(index);
}

std::vector<Tile> Square::getTiles()
{
	return tiles;
}
