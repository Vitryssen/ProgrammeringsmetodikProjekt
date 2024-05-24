#include "Sudoku.h"
#include "Reader.h"
#include "Sudoku.h"
#include <QtWidgets/QApplication>
#include <QGridLayout>
#include <QDialog>
#include <QtCore>
#include <QtWidgets>
int main(int argc, char* argv[]) //instead of matrix create class GameBoard and Square, where gameboard : square, create some template, virtual and lambda functions
{
    QApplication a(argc, argv);
    Sudoku mainWidget;
    mainWidget.setWindowTitle("Sudoku");

    mainWidget.show();
    return a.exec();
}
