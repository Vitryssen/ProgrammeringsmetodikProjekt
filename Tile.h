#pragma once
#ifndef TILE_H
#define TILE_H
class Tile {
private:
	int value;
	int index;
	int squareIndex;
public:
	Tile();
	//!Construct a tile with value, index and square index
	Tile(int value, int index, int squareIndex);
	//!Get current tile value
	int getValue();
	//!Get current tile index
	int getIndex();
	//!Get current square index
	int getSquareIndex();
	//!Set new value for current tile
	void setValue(int newValue);
	//!Set new index for current tile
	void setIndex(int newIndex);
	//!Set new square index for current tile
	void setSquareIndex(int newSquareIndex);
};
#endif // !TILE_H
