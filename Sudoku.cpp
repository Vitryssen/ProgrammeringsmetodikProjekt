#include "Sudoku.h"
#include <QGridLayout>
#include <QtWidgets>
#include <set>
#include <iostream>  
#include <string>  
#include <algorithm>
#include "Solver.h"
Sudoku::Sudoku(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void Sudoku::on_solve_clicked() //Execute solving algoritm and repaint the board
{
	Solver<int> sudokuSolver;
	bool added = false;
	QList<QPlainTextEdit*> squares = getSquares();
	int index = 0;
	/*
	* Loop through all squares and tiles,
	* then for each tile check all possible numbers,
	* firstly check if there is a value that can only be placed in one tile,
	* if there is place it and continue,
	* if there is not check every square and see if there is a tile that has only one possible number in a square,
	* if there is place it and continue.
	*/
	for (int i = 0; i < puzzle.getSquares().size(); i++) {
		std::vector<std::vector<int>> possibleValues(10);
		std::vector<std::vector<int>> valuesPerTileInSquare(10);
		for (int x = 0; x < puzzle.getSquares().at(0).getTiles().size(); x++) {
			if (squares.at(index)->toPlainText() == "") {
				for (int value = 1; value < 10; value++) { //Loop all possible values 1-9
					if (!sudokuSolver.isValueInCube(i, value, puzzle.getMatrix())) { //If value is not in cube
						int rowIndex = x / 3 + (i / 3) * 3;
						int columnIndex = (i % 3) * 3 + x % 3; //Gets row and column index for the given index
						if (!sudokuSolver.isValueInColumn(columnIndex, value, puzzle.getMatrix()) && !sudokuSolver.isValueInRow(rowIndex, value, puzzle.getMatrix())) {
							//If the given value in the index dont appear in the row or column add it to possible values and as a value in the tile
							possibleValues.at(value).push_back(index);
							valuesPerTileInSquare.at(x).push_back(value);
							valuesPerTileInSquare.at(x).push_back(index);
						}
					}
				}
			}
			index++;
		}
		//Check possible values and if a square only has one in a tile place it there
		for (int z = 1; z < possibleValues.size(); z++) {
			if (possibleValues.at(z).size() == 1) {
				int newValueIndex = possibleValues.at(z).at(0);
				squares.at(newValueIndex)->setPlainText(QString::fromStdString(std::to_string(z)));
				puzzle.setValueInMatrix(i, newValueIndex % 9, z);
				added = true;
			}
		}
		//If no squares only has one value in a square check all tiles and see if there is a tile with only one possible value
		if (!added) {
			for (int y = 0; y < valuesPerTileInSquare.size(); y++) {
				if (valuesPerTileInSquare.at(y).size() == 2) {
					squares.at(valuesPerTileInSquare.at(y)[1])->setPlainText(QString::fromStdString(std::to_string(valuesPerTileInSquare.at(y)[0])));
					puzzle.setValueInMatrix(i, valuesPerTileInSquare.at(y)[1] % 9, valuesPerTileInSquare.at(y)[0]);
				}
			}
		}
	}
}

void Sudoku::on_next_clicked() //Load next, if last then loop from start
{
	if (puzzleIndex == puzzleReader.getNumberOfPuzzles() - 1) {
		puzzleIndex = 0;
	}
	else
		puzzleIndex++;
	//Fetch next puzzle and populate board
	puzzle.setMatrix(puzzleReader.getPuzzle(puzzleIndex));
	populateBoard();
}

void Sudoku::on_previous_clicked() //Load next, if last then loop from start
{
	if (puzzleIndex == 0) {
		puzzleIndex = puzzleReader.getNumberOfPuzzles() - 1;
	}
	else
		puzzleIndex--;
	//Fetch previous puzzle and populate board
	puzzle.setMatrix(puzzleReader.getPuzzle(puzzleIndex));
	populateBoard();
}

void Sudoku::on_actionOpen_triggered() //Select file to load puzzles from
{
	//Get filename, read it and set it as a new sudoku
	QString fileNames = QFileDialog::getOpenFileName(this, tr("Open File"), "/path/to/file/", tr("Text files (*.txt)"));
	fileName = fileNames.toStdWString();
	puzzleReader.setFileName(fileName);
	puzzleReader.Read();
	puzzle.setMatrix(puzzleReader.getPuzzle(0));
	populateBoard();
	//Enables all buttons when sudoku has been loaded
	//Buttons are disabled by default
	QList<QPushButton*> allButtons = this->findChildren<QPushButton*>();
	for (auto& button : allButtons) {
		button->setEnabled(true);
	}
}
void Sudoku::emptyOrIncorrectFile() {
	//Error message box for reader
	QMessageBox messageBox;
	messageBox.critical(0, "File Error", "Empty or incorrectly formatted text file!");
	messageBox.setFixedSize(500, 200);
}
QList<QPlainTextEdit*> Sudoku::getSquares() {
	//Get all squares sorted on their names i.e square1 comes first etc.
	QList<QPlainTextEdit*> squares = ui.centralWidget->findChildren<QPlainTextEdit*>();
	std::sort(squares.begin(), squares.end(), [](const QPlainTextEdit* v1, const QPlainTextEdit* v2) {
		return v1->objectName().toStdString() < v2->objectName().toStdString();
		});
	return squares;
}
void Sudoku::resetBoard() {
	//Clears the board
	QList<QPlainTextEdit*> squares = getSquares();
	int index = 0;
	for (int y = 0; y < 9; y++) {
		for (int z = 0; z < 9; z++) {
			squares.at(index)->setPlainText("");
			index++;
		}
	}
}
void Sudoku::populateBoard() {
	//Clear it before
	resetBoard();
	//Check if a puzzle has been loaded
	if (puzzleReader.getNumberOfPuzzles() <= 0) {
		emptyOrIncorrectFile();
		return;
	}
	//Get all tiles
	QList<QPlainTextEdit*> squares = getSquares();
	int index = 0;
	//Loop through all tiles and populate them with values from the puzzle
	for (int i = 0; i < puzzle.getSquares().size(); i++) {
		for (int x = 0; x < puzzle.getSquares().at(i).getTiles().size(); x++) {
			std::string content = std::to_string(puzzle.getSquares().at(i).getTiles().at(x).getValue());
			if (content != "0")
				squares.at(index)->setPlainText(QString::fromStdString(content));
			else
				squares.at(index)->setPlainText("");
			index++;
		}
	}
	/*for (int y = 0; y < 9; y++) {
		for (int z = 0; z < 9; z++) {
			std::string content = std::to_string(puzzle.getMatrix().at(y).at(z));
			if (content != "0") {
				squares.at(index)->setPlainText(QString::fromStdString(content));
				squares.at(index)->setReadOnly(true);
			}
			else
				squares.at(index)->setReadOnly(false);
			index++;
		}
	}*/
	/*
	//OUTPUT COLUMN
	int column = 0;
	int square = column / 3;
	column += 6*square;
	for (int i = 0; i < 3; i++) {
		for (int x = 0; x < 3; x++) {
			std::string content = std::to_string(puzzle.getMatrix().at(i * 3 + square).at(x * 3+column%3)); //ACCESS SUDOKU VALUES BY COLUMN
			squares.at(column)->setPlainText(QString::fromStdString(content));
			column += 3;
		}
		column += 18;
	}*/
	/*//OUTPUT ROW
	int row = 3;
	int test = row;
	int square = row / 3;
	row += 18 * square+2*row;
	for (int i = 0; i < 3; i++) {
		for (int x = 0; x < 3; x++) {
			std::string content = std::to_string(puzzle.getMatrix().at(i + 3*square).at(x+(3*(test%3)))); //ACCES SUDOKU VALUES BY ROW
			squares.at(row)->setPlainText(QString::fromStdString(content));
			row += 1;
		}
		row += 6;
	}*/
	/*//OUTPUT SQUARE
	int square = 0;
	int row = 9 * square;
	for (int i = 0; i < 9; i++) {
		std::string content = std::to_string(puzzle.getMatrix().at(square).at(i)); //ACCES SUDOKU VALUES BY ROW
		squares.at(row+i)->setPlainText(QString::fromStdString(content));
	}*/
}