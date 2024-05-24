#include "Reader.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include "Sudoku.h"
Reader::Reader()
{
}
Reader::Reader(std::wstring newFileName) : fileName(newFileName)
{
}

void Reader::setFileName(std::wstring newFileName)
{
    fileName = newFileName;
}

void Reader::Read()
{
    std::ifstream infile(fileName);
    std::vector<std::vector<std::vector<int>>> allPuzzlesFromFile;
    std::vector<std::vector<int>> currentPuzzle;
    int emptyLines = 0;
    while (infile)
    {
        std::string temp;
        getline(infile, temp);
        std::istringstream stringStream(temp);
        std::vector<int> record;
        while (stringStream)
        {
            std::string temp;
            if (!getline(stringStream, temp, ',')) break; //empty check
            record.push_back(std::stoi(temp));
        }
        if (temp.empty()) {
            emptyLines++; //Number of empty lines specifies a specific puzzle
            allPuzzlesFromFile.push_back(currentPuzzle);
            currentPuzzle.clear();
        }
        else
            currentPuzzle.push_back(record);
    }
    allPuzzles = allPuzzlesFromFile;
}

std::vector<std::vector<int>> Reader::getPuzzle(int index)
{
    return allPuzzles.at(index);
}

int Reader::getNumberOfPuzzles()
{
    return allPuzzles.size();
}
