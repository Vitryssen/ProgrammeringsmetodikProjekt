#pragma once
#ifndef APP_H
#define APP_H

#include <QtWidgets/QMainWindow>
#include "ui_Sudoku.h"
#include "Gameboard.h"
#include "Reader.h"
#include "Solver.h"
#include <string>

class Sudoku : public QMainWindow
{
    Q_OBJECT

public:
    Sudoku(QWidget* parent = Q_NULLPTR);
    //!Populates the board with a sudoku puzzle
    void populateBoard();
    //!Clears the board
    void resetBoard();
    //!Gets all tiles from Qt
    QList<QPlainTextEdit*> getSquares();
    //!Check for empty or incorrectly formatted file
    void emptyOrIncorrectFile();
private slots:
    //!Solves the sudoku in steps
    void on_solve_clicked();
    //!Loads the next sudoku from file
    void on_next_clicked();
    //!Loads the previous sudoku from file
    void on_previous_clicked();
    //!Opens a file explorer to choose a sudoku file
    void on_actionOpen_triggered();
private:
    int puzzleIndex = 0;
    std::wstring fileName;
    Reader puzzleReader;
    Gameboard puzzle;
    Ui::SudokuClass ui;
};
#endif // !APP_H