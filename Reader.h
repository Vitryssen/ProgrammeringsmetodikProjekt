#pragma once
#ifndef READER_H
#define READER_H
#include <string>
#include <vector>
class Reader {
private:
	std::wstring fileName;
	std::vector<std::vector<std::vector<int>>> allPuzzles;
public:
	Reader();
	//!Reads from a file with filename as input
	Reader(std::wstring fileName);
	//!Sets the readers filename property
	void setFileName(std::wstring newFileName);
	//!Read the file with the previously set filename
	void Read();
	//!If multiple puzzels exists in file, get puzzle based on index
	std::vector<std::vector<int>> getPuzzle(int index);
	//!Returns total number of puzzles in file
	int getNumberOfPuzzles();
};
#endif // !READER_H
