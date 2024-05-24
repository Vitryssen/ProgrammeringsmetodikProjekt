#include "Tile.h"
Tile::Tile()
{
}
Tile::Tile(int newValue, int newIndex, int newSquareIndex) : value(newValue), index(newIndex), squareIndex(newSquareIndex)
{
}

int Tile::getValue()
{
	return value;
}

int Tile::getIndex()
{
	return index;
}

int Tile::getSquareIndex()
{
	return squareIndex;
}

void Tile::setValue(int newValue)
{
	value = newValue;
}

void Tile::setIndex(int newIndex)
{
	index = newIndex;
}

void Tile::setSquareIndex(int newSquareIndex)
{
	squareIndex = newSquareIndex;
}
