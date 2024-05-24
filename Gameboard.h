#pragma once
#ifndef GAMEBOARD_H
#define GAMEBOARD_H
#include <vector>
#include <iostream>
#include "Square.h"
class Gameboard : public Square{
private:
	std::vector<std::vector<int>> matrix;
	std::vector<Square> squares; ///< Contains the sudoku squares in a vector with the class square*/
public:
	//!Empty constructor
	Gameboard();
	//!Create gameboard with a matrix
	Gameboard(std::vector<std::vector<int>> board);
	//!Returns the int matrix
	std::vector<std::vector<int>> getMatrix();
	//!Sets a value in the matrix with index for square and then tile
	void setValueInMatrix(int x, int y, int value);
	//!Overrides the matrix with a new matrix
	void setMatrix(std::vector<std::vector<int>> newMatrix);
	//!Create a gameboard with squares
	Gameboard(std::vector<Square> newSquares);
	//!Return gameboard squares
	std::vector<Square> getSquares();
	//!Set gameboard squares
	void setSquares(std::vector<Square> newSquares);
};
#endif // !SUDOKU_H