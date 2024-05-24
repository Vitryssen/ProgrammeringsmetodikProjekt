#include "Gameboard.h"
#include "Square.h"
#include "Tile.h"
#include <vector>
Gameboard::Gameboard()
{
}

Gameboard::Gameboard(std::vector<std::vector<int>> board) : matrix(board)
{
}

std::vector<Square> Gameboard::getSquares()
{
	return squares;
}

void Gameboard::setSquares(std::vector<Square> newSquares)
{
	squares = newSquares;
}

std::vector<std::vector<int>> Gameboard::getMatrix()
{
	return matrix;
}
void Gameboard::setValueInMatrix(int square, int tile, int value) {
	matrix.at(square).at(tile) = value;
}
void Gameboard::setMatrix(std::vector<std::vector<int>> newMatrix)
{
	//old
	matrix = newMatrix;
	//new
	int index = 0;
	std::vector<Square> newSquares;
	std::vector<Tile> newTiles;
	for (int i = 0; i < newMatrix.size(); i++) {
		for (int x = 0; x < newMatrix.at(i).size(); x++) {
			//Cretes new tiles to add to squares which are added to the square vector
			newTiles.push_back(Tile(newMatrix.at(i).at(x), index, i));
			index++;
		}
		newSquares.push_back(newTiles);
		newTiles.clear();
	}
	//Set new square vector
	setSquares(newSquares);
}
