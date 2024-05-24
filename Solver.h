#pragma once
#ifndef SOLVER_H
#define SOLVER_H
#include <vector>
#include "Gameboard.h"
template<class T>
class Solver {
private:
public:
	Solver();
	//!Returns solved if no squares are zero
	bool isSolved(std::vector<std::vector<T>> matrixToSolve);
	//!Check given cube and see if given value is already in it
	bool isValueInCube(int squareIndex, T valueToCheck, std::vector<std::vector<T>> puzzle);
	//!Check given column and see if given value is in it
	bool isValueInColumn(int columnIndex, T valueToCheck, std::vector<std::vector<T>> puzzle);
	//!Check given row and see if given value is in it
	bool isValueInRow(int rowIndex, T valueToCheck, std::vector<std::vector<T>> puzzle);
};
template<class T>
inline Solver<T>::Solver()
{
}
template<class T>
inline bool Solver<T>::isSolved(std::vector<std::vector<T>> matrixToSolve)
{
	bool solved = true;
	for (int i = 0; i < matrixToSolve.size(); i++) {
		for (int x = 0; x < matrixToSolve.at(i).size(); x++) {
			if (matrixToSolve.at(i).at(x) == 0)
				solved = false;
		}
	}
	return solved;
}
template<class T>
inline bool Solver<T>::isValueInCube(int cubeIndex, T valueToCheck, std::vector<std::vector<T>> puzzle)
{
	for (int i = 0; i < 9; i++) {
		if (puzzle.at(cubeIndex).at(i) == valueToCheck)
			return true;
	}
	return false;
}
template<class T>
inline bool Solver<T>::isValueInColumn(int columnIndex, T valueToCheck, std::vector<std::vector<T>> puzzle)
{
	int square = columnIndex / 3;
	columnIndex += 6 * square;
	for (int i = 0; i < 3; i++) {
		for (int x = 0; x < 3; x++) {
			if (puzzle.at(i * 3 + square).at(x * 3 + columnIndex % 3) == valueToCheck)
				return true;
			columnIndex += 3;
		}
		columnIndex += 18;
	}
	return false;
}
template<class T>
inline bool Solver<T>::isValueInRow(int rowIndex, T valueToCheck, std::vector<std::vector<T>> puzzle)
{
	int offset = rowIndex;
	int square = rowIndex / 3;
	rowIndex += 18 * square + 2 * rowIndex;
	for (int i = 0; i < 3; i++) {
		for (int x = 0; x < 3; x++) {
			if (puzzle.at(i + 3 * square).at(x + (3 * (offset % 3))) == valueToCheck)
				return true;
			rowIndex += 1;
		}
		rowIndex += 6;
	}
	return false;
}
/*
template<class T>
inline std::vector<T> Solver<T>::occurrencesOfValue(int value, std::vector<std::vector<T>> puzzle)
{
	for (int i = 0; i < 9; i++) {
		std::vector<T> currentCube = puzzle.at(i);
		std::vector<T> possiblePositions;
		if (!isValueInCube(value)) {
			for (int x = 0; x < 9; x++) {
				if (!isValueInColumn(i%3, x, puzzle) && !isValueInRow(i % 3, x, puzzle))
			}
		}
	}
	return std::vector<T>();
}*/
#endif // !SOLVER_H