/********************************************************************************
** Form generated from reading UI file 'Sudoku.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUDOKU_H
#define UI_SUDOKU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SudokuClass
{
public:
    QAction *actionOpen;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QFrame *gridFrame;
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit05;
    QPlainTextEdit *plainTextEdit46;
    QPlainTextEdit *plainTextEdit74;
    QPlainTextEdit *plainTextEdit40;
    QPlainTextEdit *plainTextEdit18;
    QPlainTextEdit *plainTextEdit57;
    QPlainTextEdit *plainTextEdit55;
    QPlainTextEdit *plainTextEdit75;
    QPlainTextEdit *plainTextEdit66;
    QPlainTextEdit *plainTextEdit14;
    QPlainTextEdit *plainTextEdit68;
    QPlainTextEdit *plainTextEdit77;
    QPlainTextEdit *plainTextEdit25;
    QPlainTextEdit *plainTextEdit26;
    QPlainTextEdit *plainTextEdit29;
    QPlainTextEdit *plainTextEdit62;
    QPlainTextEdit *plainTextEdit42;
    QPlainTextEdit *plainTextEdit78;
    QPlainTextEdit *plainTextEdit09;
    QPlainTextEdit *plainTextEdit52;
    QPlainTextEdit *plainTextEdit12;
    QPlainTextEdit *plainTextEdit22;
    QPlainTextEdit *plainTextEdit36;
    QPlainTextEdit *plainTextEdit19;
    QPlainTextEdit *plainTextEdit01;
    QPlainTextEdit *plainTextEdit02;
    QPlainTextEdit *plainTextEdit43;
    QPlainTextEdit *plainTextEdit24;
    QPlainTextEdit *plainTextEdit08;
    QPlainTextEdit *plainTextEdit81;
    QPlainTextEdit *plainTextEdit71;
    QPlainTextEdit *plainTextEdit41;
    QPlainTextEdit *plainTextEdit80;
    QPlainTextEdit *plainTextEdit61;
    QPlainTextEdit *plainTextEdit21;
    QPlainTextEdit *plainTextEdit20;
    QPlainTextEdit *plainTextEdit32;
    QPlainTextEdit *plainTextEdit56;
    QPlainTextEdit *plainTextEdit63;
    QPlainTextEdit *plainTextEdit79;
    QPlainTextEdit *plainTextEdit48;
    QPlainTextEdit *plainTextEdit70;
    QPlainTextEdit *plainTextEdit11;
    QPlainTextEdit *plainTextEdit37;
    QPlainTextEdit *plainTextEdit30;
    QPlainTextEdit *plainTextEdit72;
    QPlainTextEdit *plainTextEdit53;
    QPlainTextEdit *plainTextEdit06;
    QPlainTextEdit *plainTextEdit67;
    QPlainTextEdit *plainTextEdit33;
    QPlainTextEdit *plainTextEdit35;
    QPlainTextEdit *plainTextEdit38;
    QPlainTextEdit *plainTextEdit69;
    QPlainTextEdit *plainTextEdit23;
    QPlainTextEdit *plainTextEdit49;
    QPlainTextEdit *plainTextEdit34;
    QPlainTextEdit *plainTextEdit73;
    QPlainTextEdit *plainTextEdit07;
    QPlainTextEdit *plainTextEdit15;
    QPlainTextEdit *plainTextEdit76;
    QPlainTextEdit *plainTextEdit39;
    QPlainTextEdit *plainTextEdit03;
    QPlainTextEdit *plainTextEdit16;
    QPlainTextEdit *plainTextEdit54;
    QPlainTextEdit *plainTextEdit31;
    QPlainTextEdit *plainTextEdit59;
    QPlainTextEdit *plainTextEdit28;
    QPlainTextEdit *plainTextEdit10;
    QPlainTextEdit *plainTextEdit45;
    QPlainTextEdit *plainTextEdit58;
    QPlainTextEdit *plainTextEdit60;
    QPlainTextEdit *plainTextEdit50;
    QPlainTextEdit *plainTextEdit47;
    QPlainTextEdit *plainTextEdit17;
    QPlainTextEdit *plainTextEdit27;
    QPlainTextEdit *plainTextEdit64;
    QPlainTextEdit *plainTextEdit44;
    QPlainTextEdit *plainTextEdit04;
    QPlainTextEdit *plainTextEdit65;
    QPlainTextEdit *plainTextEdit13;
    QPlainTextEdit *plainTextEdit51;
    QPushButton *solve;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *previous;
    QPushButton *next;
    QMenuBar *menuBar;
    QMenu *menuFile;

    void setupUi(QMainWindow *SudokuClass)
    {
        if (SudokuClass->objectName().isEmpty())
            SudokuClass->setObjectName(QString::fromUtf8("SudokuClass"));
        SudokuClass->resize(377, 459);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SudokuClass->sizePolicy().hasHeightForWidth());
        SudokuClass->setSizePolicy(sizePolicy);
        actionOpen = new QAction(SudokuClass);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        centralWidget = new QWidget(SudokuClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridFrame = new QFrame(widget);
        gridFrame->setObjectName(QString::fromUtf8("gridFrame"));
        gridFrame->setGeometry(QRect(9, 9, 341, 341));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gridFrame->sizePolicy().hasHeightForWidth());
        gridFrame->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(gridFrame);
        gridLayout->setSpacing(1);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        plainTextEdit05 = new QPlainTextEdit(gridFrame);
        plainTextEdit05->setObjectName(QString::fromUtf8("plainTextEdit05"));
        sizePolicy1.setHeightForWidth(plainTextEdit05->sizePolicy().hasHeightForWidth());
        plainTextEdit05->setSizePolicy(sizePolicy1);
        plainTextEdit05->setMaximumSize(QSize(35, 35));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        plainTextEdit05->setFont(font);
        plainTextEdit05->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        plainTextEdit05->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit05->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit05->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit05->setTabChangesFocus(true);
        plainTextEdit05->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit05, 1, 1, 1, 1);

        plainTextEdit46 = new QPlainTextEdit(gridFrame);
        plainTextEdit46->setObjectName(QString::fromUtf8("plainTextEdit46"));
        sizePolicy1.setHeightForWidth(plainTextEdit46->sizePolicy().hasHeightForWidth());
        plainTextEdit46->setSizePolicy(sizePolicy1);
        plainTextEdit46->setMaximumSize(QSize(35, 35));
        plainTextEdit46->setFont(font);
        plainTextEdit46->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-left-width: 2px;\n"
"border-top-width: 2px;"));
        plainTextEdit46->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit46->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit46->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit46->setTabChangesFocus(true);
        plainTextEdit46->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit46, 3, 6, 1, 1);

        plainTextEdit74 = new QPlainTextEdit(gridFrame);
        plainTextEdit74->setObjectName(QString::fromUtf8("plainTextEdit74"));
        sizePolicy1.setHeightForWidth(plainTextEdit74->sizePolicy().hasHeightForWidth());
        plainTextEdit74->setSizePolicy(sizePolicy1);
        plainTextEdit74->setMaximumSize(QSize(35, 35));
        plainTextEdit74->setFont(font);
        plainTextEdit74->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-top-width: 2px;"));
        plainTextEdit74->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit74->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit74->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit74->setTabChangesFocus(true);
        plainTextEdit74->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit74, 6, 7, 1, 1);

        plainTextEdit40 = new QPlainTextEdit(gridFrame);
        plainTextEdit40->setObjectName(QString::fromUtf8("plainTextEdit40"));
        sizePolicy1.setHeightForWidth(plainTextEdit40->sizePolicy().hasHeightForWidth());
        plainTextEdit40->setSizePolicy(sizePolicy1);
        plainTextEdit40->setMaximumSize(QSize(35, 35));
        plainTextEdit40->setFont(font);
        plainTextEdit40->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-left-width: 2px;"));
        plainTextEdit40->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit40->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit40->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit40->setTabChangesFocus(true);
        plainTextEdit40->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit40, 4, 3, 1, 1);

        plainTextEdit18 = new QPlainTextEdit(gridFrame);
        plainTextEdit18->setObjectName(QString::fromUtf8("plainTextEdit18"));
        sizePolicy1.setHeightForWidth(plainTextEdit18->sizePolicy().hasHeightForWidth());
        plainTextEdit18->setSizePolicy(sizePolicy1);
        plainTextEdit18->setMaximumSize(QSize(35, 35));
        plainTextEdit18->setFont(font);
        plainTextEdit18->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-right-width: 2px;\n"
"border-bottom-width: 2px;"));
        plainTextEdit18->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit18->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit18->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit18->setTabChangesFocus(true);
        plainTextEdit18->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit18, 2, 5, 1, 1);

        plainTextEdit57 = new QPlainTextEdit(gridFrame);
        plainTextEdit57->setObjectName(QString::fromUtf8("plainTextEdit57"));
        sizePolicy1.setHeightForWidth(plainTextEdit57->sizePolicy().hasHeightForWidth());
        plainTextEdit57->setSizePolicy(sizePolicy1);
        plainTextEdit57->setMaximumSize(QSize(35, 35));
        plainTextEdit57->setFont(font);
        plainTextEdit57->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-top-width: 2px;\n"
"border-right-width: 2px;"));
        plainTextEdit57->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit57->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit57->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit57->setTabChangesFocus(true);
        plainTextEdit57->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit57, 6, 2, 1, 1);

        plainTextEdit55 = new QPlainTextEdit(gridFrame);
        plainTextEdit55->setObjectName(QString::fromUtf8("plainTextEdit55"));
        sizePolicy1.setHeightForWidth(plainTextEdit55->sizePolicy().hasHeightForWidth());
        plainTextEdit55->setSizePolicy(sizePolicy1);
        plainTextEdit55->setMaximumSize(QSize(35, 35));
        plainTextEdit55->setFont(font);
        plainTextEdit55->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-left-width: 2px;\n"
"border-top-width: 2px;"));
        plainTextEdit55->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit55->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit55->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit55->setTabChangesFocus(true);
        plainTextEdit55->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit55, 6, 0, 1, 1);

        plainTextEdit75 = new QPlainTextEdit(gridFrame);
        plainTextEdit75->setObjectName(QString::fromUtf8("plainTextEdit75"));
        sizePolicy1.setHeightForWidth(plainTextEdit75->sizePolicy().hasHeightForWidth());
        plainTextEdit75->setSizePolicy(sizePolicy1);
        plainTextEdit75->setMaximumSize(QSize(35, 35));
        plainTextEdit75->setFont(font);
        plainTextEdit75->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-top-width: 2px;\n"
"border-right-width: 2px;"));
        plainTextEdit75->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit75->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit75->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit75->setTabChangesFocus(true);
        plainTextEdit75->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit75, 6, 8, 1, 1);

        plainTextEdit66 = new QPlainTextEdit(gridFrame);
        plainTextEdit66->setObjectName(QString::fromUtf8("plainTextEdit66"));
        sizePolicy1.setHeightForWidth(plainTextEdit66->sizePolicy().hasHeightForWidth());
        plainTextEdit66->setSizePolicy(sizePolicy1);
        plainTextEdit66->setMaximumSize(QSize(35, 35));
        plainTextEdit66->setFont(font);
        plainTextEdit66->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-top-width: 2px;\n"
"border-right-width: 2px;"));
        plainTextEdit66->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit66->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit66->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit66->setTabChangesFocus(true);
        plainTextEdit66->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit66, 6, 5, 1, 1);

        plainTextEdit14 = new QPlainTextEdit(gridFrame);
        plainTextEdit14->setObjectName(QString::fromUtf8("plainTextEdit14"));
        sizePolicy1.setHeightForWidth(plainTextEdit14->sizePolicy().hasHeightForWidth());
        plainTextEdit14->setSizePolicy(sizePolicy1);
        plainTextEdit14->setMaximumSize(QSize(35, 35));
        plainTextEdit14->setFont(font);
        plainTextEdit14->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        plainTextEdit14->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit14->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit14->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit14->setTabChangesFocus(true);
        plainTextEdit14->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit14, 1, 4, 1, 1);

        plainTextEdit68 = new QPlainTextEdit(gridFrame);
        plainTextEdit68->setObjectName(QString::fromUtf8("plainTextEdit68"));
        sizePolicy1.setHeightForWidth(plainTextEdit68->sizePolicy().hasHeightForWidth());
        plainTextEdit68->setSizePolicy(sizePolicy1);
        plainTextEdit68->setMaximumSize(QSize(35, 35));
        plainTextEdit68->setFont(font);
        plainTextEdit68->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        plainTextEdit68->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit68->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit68->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit68->setTabChangesFocus(true);
        plainTextEdit68->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit68, 7, 4, 1, 1);

        plainTextEdit77 = new QPlainTextEdit(gridFrame);
        plainTextEdit77->setObjectName(QString::fromUtf8("plainTextEdit77"));
        sizePolicy1.setHeightForWidth(plainTextEdit77->sizePolicy().hasHeightForWidth());
        plainTextEdit77->setSizePolicy(sizePolicy1);
        plainTextEdit77->setMaximumSize(QSize(35, 35));
        plainTextEdit77->setFont(font);
        plainTextEdit77->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        plainTextEdit77->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit77->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit77->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit77->setTabChangesFocus(true);
        plainTextEdit77->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit77, 7, 7, 1, 1);

        plainTextEdit25 = new QPlainTextEdit(gridFrame);
        plainTextEdit25->setObjectName(QString::fromUtf8("plainTextEdit25"));
        sizePolicy1.setHeightForWidth(plainTextEdit25->sizePolicy().hasHeightForWidth());
        plainTextEdit25->setSizePolicy(sizePolicy1);
        plainTextEdit25->setMaximumSize(QSize(35, 35));
        plainTextEdit25->setFont(font);
        plainTextEdit25->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-bottom-width: 2px;\n"
"border-left-width: 2px;"));
        plainTextEdit25->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit25->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit25->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit25->setTabChangesFocus(true);
        plainTextEdit25->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit25, 2, 6, 1, 1);

        plainTextEdit26 = new QPlainTextEdit(gridFrame);
        plainTextEdit26->setObjectName(QString::fromUtf8("plainTextEdit26"));
        sizePolicy1.setHeightForWidth(plainTextEdit26->sizePolicy().hasHeightForWidth());
        plainTextEdit26->setSizePolicy(sizePolicy1);
        plainTextEdit26->setMaximumSize(QSize(35, 35));
        plainTextEdit26->setFont(font);
        plainTextEdit26->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-bottom-width: 2px;"));
        plainTextEdit26->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit26->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit26->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit26->setTabChangesFocus(true);
        plainTextEdit26->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit26, 2, 7, 1, 1);

        plainTextEdit29 = new QPlainTextEdit(gridFrame);
        plainTextEdit29->setObjectName(QString::fromUtf8("plainTextEdit29"));
        sizePolicy1.setHeightForWidth(plainTextEdit29->sizePolicy().hasHeightForWidth());
        plainTextEdit29->setSizePolicy(sizePolicy1);
        plainTextEdit29->setMaximumSize(QSize(35, 35));
        plainTextEdit29->setFont(font);
        plainTextEdit29->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-top-width: 2px;"));
        plainTextEdit29->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit29->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit29->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit29->setTabChangesFocus(true);
        plainTextEdit29->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit29, 3, 1, 1, 1);

        plainTextEdit62 = new QPlainTextEdit(gridFrame);
        plainTextEdit62->setObjectName(QString::fromUtf8("plainTextEdit62"));
        sizePolicy1.setHeightForWidth(plainTextEdit62->sizePolicy().hasHeightForWidth());
        plainTextEdit62->setSizePolicy(sizePolicy1);
        plainTextEdit62->setMaximumSize(QSize(35, 35));
        plainTextEdit62->setFont(font);
        plainTextEdit62->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-bottom-width: 2px;"));
        plainTextEdit62->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit62->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit62->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit62->setTabChangesFocus(true);
        plainTextEdit62->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit62, 8, 1, 1, 1);

        plainTextEdit42 = new QPlainTextEdit(gridFrame);
        plainTextEdit42->setObjectName(QString::fromUtf8("plainTextEdit42"));
        sizePolicy1.setHeightForWidth(plainTextEdit42->sizePolicy().hasHeightForWidth());
        plainTextEdit42->setSizePolicy(sizePolicy1);
        plainTextEdit42->setMaximumSize(QSize(35, 35));
        plainTextEdit42->setFont(font);
        plainTextEdit42->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-right-width: 2px;"));
        plainTextEdit42->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit42->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit42->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit42->setTabChangesFocus(true);
        plainTextEdit42->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit42, 4, 5, 1, 1);

        plainTextEdit78 = new QPlainTextEdit(gridFrame);
        plainTextEdit78->setObjectName(QString::fromUtf8("plainTextEdit78"));
        sizePolicy1.setHeightForWidth(plainTextEdit78->sizePolicy().hasHeightForWidth());
        plainTextEdit78->setSizePolicy(sizePolicy1);
        plainTextEdit78->setMaximumSize(QSize(35, 35));
        plainTextEdit78->setFont(font);
        plainTextEdit78->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-right-width: 2px;"));
        plainTextEdit78->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit78->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit78->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit78->setTabChangesFocus(true);
        plainTextEdit78->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit78, 7, 8, 1, 1);

        plainTextEdit09 = new QPlainTextEdit(gridFrame);
        plainTextEdit09->setObjectName(QString::fromUtf8("plainTextEdit09"));
        sizePolicy1.setHeightForWidth(plainTextEdit09->sizePolicy().hasHeightForWidth());
        plainTextEdit09->setSizePolicy(sizePolicy1);
        plainTextEdit09->setMaximumSize(QSize(35, 35));
        plainTextEdit09->setFont(font);
        plainTextEdit09->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-right-width: 2px;\n"
"border-bottom-width: 2px;"));
        plainTextEdit09->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit09->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit09->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit09->setTabChangesFocus(true);
        plainTextEdit09->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit09, 2, 2, 1, 1);

        plainTextEdit52 = new QPlainTextEdit(gridFrame);
        plainTextEdit52->setObjectName(QString::fromUtf8("plainTextEdit52"));
        sizePolicy1.setHeightForWidth(plainTextEdit52->sizePolicy().hasHeightForWidth());
        plainTextEdit52->setSizePolicy(sizePolicy1);
        plainTextEdit52->setMaximumSize(QSize(35, 35));
        plainTextEdit52->setFont(font);
        plainTextEdit52->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-bottom-width: 2px;\n"
"border-left-width: 2px;"));
        plainTextEdit52->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit52->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit52->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit52->setTabChangesFocus(true);
        plainTextEdit52->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit52, 5, 6, 1, 1);

        plainTextEdit12 = new QPlainTextEdit(gridFrame);
        plainTextEdit12->setObjectName(QString::fromUtf8("plainTextEdit12"));
        sizePolicy1.setHeightForWidth(plainTextEdit12->sizePolicy().hasHeightForWidth());
        plainTextEdit12->setSizePolicy(sizePolicy1);
        plainTextEdit12->setMaximumSize(QSize(35, 35));
        plainTextEdit12->setFont(font);
        plainTextEdit12->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-top-width: 2px;\n"
"border-right-width: 2px;"));
        plainTextEdit12->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit12->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit12->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit12->setTabChangesFocus(true);
        plainTextEdit12->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit12, 0, 5, 1, 1);

        plainTextEdit22 = new QPlainTextEdit(gridFrame);
        plainTextEdit22->setObjectName(QString::fromUtf8("plainTextEdit22"));
        sizePolicy1.setHeightForWidth(plainTextEdit22->sizePolicy().hasHeightForWidth());
        plainTextEdit22->setSizePolicy(sizePolicy1);
        plainTextEdit22->setMaximumSize(QSize(35, 35));
        plainTextEdit22->setFont(font);
        plainTextEdit22->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-left-width: 2px;"));
        plainTextEdit22->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit22->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit22->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit22->setTabChangesFocus(true);
        plainTextEdit22->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit22, 1, 6, 1, 1);

        plainTextEdit36 = new QPlainTextEdit(gridFrame);
        plainTextEdit36->setObjectName(QString::fromUtf8("plainTextEdit36"));
        sizePolicy1.setHeightForWidth(plainTextEdit36->sizePolicy().hasHeightForWidth());
        plainTextEdit36->setSizePolicy(sizePolicy1);
        plainTextEdit36->setMaximumSize(QSize(35, 35));
        plainTextEdit36->setFont(font);
        plainTextEdit36->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-right-width: 2px;\n"
"border-bottom-width: 2px;"));
        plainTextEdit36->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit36->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit36->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit36->setTabChangesFocus(true);
        plainTextEdit36->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit36, 5, 2, 1, 1);

        plainTextEdit19 = new QPlainTextEdit(gridFrame);
        plainTextEdit19->setObjectName(QString::fromUtf8("plainTextEdit19"));
        sizePolicy1.setHeightForWidth(plainTextEdit19->sizePolicy().hasHeightForWidth());
        plainTextEdit19->setSizePolicy(sizePolicy1);
        plainTextEdit19->setMaximumSize(QSize(35, 35));
        plainTextEdit19->setFont(font);
        plainTextEdit19->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-left-width: 2px;\n"
"border-top-width: 2px;"));
        plainTextEdit19->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit19->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit19->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit19->setTabChangesFocus(true);
        plainTextEdit19->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit19, 0, 6, 1, 1);

        plainTextEdit01 = new QPlainTextEdit(gridFrame);
        plainTextEdit01->setObjectName(QString::fromUtf8("plainTextEdit01"));
        sizePolicy1.setHeightForWidth(plainTextEdit01->sizePolicy().hasHeightForWidth());
        plainTextEdit01->setSizePolicy(sizePolicy1);
        plainTextEdit01->setMaximumSize(QSize(35, 35));
        plainTextEdit01->setFont(font);
        plainTextEdit01->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-left-width: 2px;\n"
"border-top-width: 2px;"));
        plainTextEdit01->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit01->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit01->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit01->setTabChangesFocus(true);
        plainTextEdit01->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit01, 0, 0, 1, 1);

        plainTextEdit02 = new QPlainTextEdit(gridFrame);
        plainTextEdit02->setObjectName(QString::fromUtf8("plainTextEdit02"));
        sizePolicy1.setHeightForWidth(plainTextEdit02->sizePolicy().hasHeightForWidth());
        plainTextEdit02->setSizePolicy(sizePolicy1);
        plainTextEdit02->setMaximumSize(QSize(35, 35));
        plainTextEdit02->setFont(font);
        plainTextEdit02->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-top-width: 2px;"));
        plainTextEdit02->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit02->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit02->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit02->setTabChangesFocus(true);
        plainTextEdit02->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit02, 0, 1, 1, 1);

        plainTextEdit43 = new QPlainTextEdit(gridFrame);
        plainTextEdit43->setObjectName(QString::fromUtf8("plainTextEdit43"));
        sizePolicy1.setHeightForWidth(plainTextEdit43->sizePolicy().hasHeightForWidth());
        plainTextEdit43->setSizePolicy(sizePolicy1);
        plainTextEdit43->setMaximumSize(QSize(35, 35));
        plainTextEdit43->setFont(font);
        plainTextEdit43->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-bottom-width: 2px;\n"
"border-left-width: 2px;"));
        plainTextEdit43->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit43->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit43->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit43->setTabChangesFocus(true);
        plainTextEdit43->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit43, 5, 3, 1, 1);

        plainTextEdit24 = new QPlainTextEdit(gridFrame);
        plainTextEdit24->setObjectName(QString::fromUtf8("plainTextEdit24"));
        sizePolicy1.setHeightForWidth(plainTextEdit24->sizePolicy().hasHeightForWidth());
        plainTextEdit24->setSizePolicy(sizePolicy1);
        plainTextEdit24->setMaximumSize(QSize(35, 35));
        plainTextEdit24->setFont(font);
        plainTextEdit24->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-right-width: 2px;"));
        plainTextEdit24->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit24->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit24->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit24->setTabChangesFocus(true);
        plainTextEdit24->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit24, 1, 8, 1, 1);

        plainTextEdit08 = new QPlainTextEdit(gridFrame);
        plainTextEdit08->setObjectName(QString::fromUtf8("plainTextEdit08"));
        sizePolicy1.setHeightForWidth(plainTextEdit08->sizePolicy().hasHeightForWidth());
        plainTextEdit08->setSizePolicy(sizePolicy1);
        plainTextEdit08->setMaximumSize(QSize(35, 35));
        plainTextEdit08->setFont(font);
        plainTextEdit08->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-bottom-width: 2px;"));
        plainTextEdit08->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit08->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit08->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit08->setTabChangesFocus(true);
        plainTextEdit08->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit08, 2, 1, 1, 1);

        plainTextEdit81 = new QPlainTextEdit(gridFrame);
        plainTextEdit81->setObjectName(QString::fromUtf8("plainTextEdit81"));
        sizePolicy1.setHeightForWidth(plainTextEdit81->sizePolicy().hasHeightForWidth());
        plainTextEdit81->setSizePolicy(sizePolicy1);
        plainTextEdit81->setMaximumSize(QSize(35, 35));
        plainTextEdit81->setFont(font);
        plainTextEdit81->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-right-width: 2px;\n"
"border-bottom-width: 2px;"));
        plainTextEdit81->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit81->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit81->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit81->setTabChangesFocus(true);
        plainTextEdit81->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit81, 8, 8, 1, 1);

        plainTextEdit71 = new QPlainTextEdit(gridFrame);
        plainTextEdit71->setObjectName(QString::fromUtf8("plainTextEdit71"));
        sizePolicy1.setHeightForWidth(plainTextEdit71->sizePolicy().hasHeightForWidth());
        plainTextEdit71->setSizePolicy(sizePolicy1);
        plainTextEdit71->setMaximumSize(QSize(35, 35));
        plainTextEdit71->setFont(font);
        plainTextEdit71->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-bottom-width: 2px;"));
        plainTextEdit71->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit71->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit71->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit71->setTabChangesFocus(true);
        plainTextEdit71->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit71, 8, 4, 1, 1);

        plainTextEdit41 = new QPlainTextEdit(gridFrame);
        plainTextEdit41->setObjectName(QString::fromUtf8("plainTextEdit41"));
        sizePolicy1.setHeightForWidth(plainTextEdit41->sizePolicy().hasHeightForWidth());
        plainTextEdit41->setSizePolicy(sizePolicy1);
        plainTextEdit41->setMaximumSize(QSize(35, 35));
        plainTextEdit41->setFont(font);
        plainTextEdit41->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        plainTextEdit41->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit41->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit41->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit41->setTabChangesFocus(true);
        plainTextEdit41->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit41, 4, 4, 1, 1);

        plainTextEdit80 = new QPlainTextEdit(gridFrame);
        plainTextEdit80->setObjectName(QString::fromUtf8("plainTextEdit80"));
        sizePolicy1.setHeightForWidth(plainTextEdit80->sizePolicy().hasHeightForWidth());
        plainTextEdit80->setSizePolicy(sizePolicy1);
        plainTextEdit80->setMaximumSize(QSize(35, 35));
        plainTextEdit80->setFont(font);
        plainTextEdit80->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-bottom-width: 2px;"));
        plainTextEdit80->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit80->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit80->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit80->setTabChangesFocus(true);
        plainTextEdit80->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit80, 8, 7, 1, 1);

        plainTextEdit61 = new QPlainTextEdit(gridFrame);
        plainTextEdit61->setObjectName(QString::fromUtf8("plainTextEdit61"));
        sizePolicy1.setHeightForWidth(plainTextEdit61->sizePolicy().hasHeightForWidth());
        plainTextEdit61->setSizePolicy(sizePolicy1);
        plainTextEdit61->setMaximumSize(QSize(35, 35));
        plainTextEdit61->setFont(font);
        plainTextEdit61->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-bottom-width: 2px;\n"
"border-left-width: 2px;"));
        plainTextEdit61->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit61->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit61->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit61->setTabChangesFocus(true);
        plainTextEdit61->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit61, 8, 0, 1, 1);

        plainTextEdit21 = new QPlainTextEdit(gridFrame);
        plainTextEdit21->setObjectName(QString::fromUtf8("plainTextEdit21"));
        sizePolicy1.setHeightForWidth(plainTextEdit21->sizePolicy().hasHeightForWidth());
        plainTextEdit21->setSizePolicy(sizePolicy1);
        plainTextEdit21->setMaximumSize(QSize(35, 35));
        plainTextEdit21->setFont(font);
        plainTextEdit21->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-top-width: 2px;\n"
"border-right-width: 2px;"));
        plainTextEdit21->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit21->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit21->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit21->setTabChangesFocus(true);
        plainTextEdit21->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit21, 0, 8, 1, 1);

        plainTextEdit20 = new QPlainTextEdit(gridFrame);
        plainTextEdit20->setObjectName(QString::fromUtf8("plainTextEdit20"));
        sizePolicy1.setHeightForWidth(plainTextEdit20->sizePolicy().hasHeightForWidth());
        plainTextEdit20->setSizePolicy(sizePolicy1);
        plainTextEdit20->setMaximumSize(QSize(35, 35));
        plainTextEdit20->setFont(font);
        plainTextEdit20->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-top-width: 2px;"));
        plainTextEdit20->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit20->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit20->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit20->setTabChangesFocus(true);
        plainTextEdit20->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit20, 0, 7, 1, 1);

        plainTextEdit32 = new QPlainTextEdit(gridFrame);
        plainTextEdit32->setObjectName(QString::fromUtf8("plainTextEdit32"));
        sizePolicy1.setHeightForWidth(plainTextEdit32->sizePolicy().hasHeightForWidth());
        plainTextEdit32->setSizePolicy(sizePolicy1);
        plainTextEdit32->setMaximumSize(QSize(35, 35));
        plainTextEdit32->setFont(font);
        plainTextEdit32->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        plainTextEdit32->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit32->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit32->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit32->setTabChangesFocus(true);
        plainTextEdit32->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit32, 4, 1, 1, 1);

        plainTextEdit56 = new QPlainTextEdit(gridFrame);
        plainTextEdit56->setObjectName(QString::fromUtf8("plainTextEdit56"));
        sizePolicy1.setHeightForWidth(plainTextEdit56->sizePolicy().hasHeightForWidth());
        plainTextEdit56->setSizePolicy(sizePolicy1);
        plainTextEdit56->setMaximumSize(QSize(35, 35));
        plainTextEdit56->setFont(font);
        plainTextEdit56->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-top-width: 2px;"));
        plainTextEdit56->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit56->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit56->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit56->setTabChangesFocus(true);
        plainTextEdit56->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit56, 6, 1, 1, 1);

        plainTextEdit63 = new QPlainTextEdit(gridFrame);
        plainTextEdit63->setObjectName(QString::fromUtf8("plainTextEdit63"));
        sizePolicy1.setHeightForWidth(plainTextEdit63->sizePolicy().hasHeightForWidth());
        plainTextEdit63->setSizePolicy(sizePolicy1);
        plainTextEdit63->setMaximumSize(QSize(35, 35));
        plainTextEdit63->setFont(font);
        plainTextEdit63->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-right-width: 2px;\n"
"border-bottom-width: 2px;"));
        plainTextEdit63->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit63->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit63->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit63->setTabChangesFocus(true);
        plainTextEdit63->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit63, 8, 2, 1, 1);

        plainTextEdit79 = new QPlainTextEdit(gridFrame);
        plainTextEdit79->setObjectName(QString::fromUtf8("plainTextEdit79"));
        sizePolicy1.setHeightForWidth(plainTextEdit79->sizePolicy().hasHeightForWidth());
        plainTextEdit79->setSizePolicy(sizePolicy1);
        plainTextEdit79->setMaximumSize(QSize(35, 35));
        plainTextEdit79->setFont(font);
        plainTextEdit79->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-bottom-width: 2px;\n"
"border-left-width: 2px;"));
        plainTextEdit79->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit79->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit79->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit79->setTabChangesFocus(true);
        plainTextEdit79->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit79, 8, 6, 1, 1);

        plainTextEdit48 = new QPlainTextEdit(gridFrame);
        plainTextEdit48->setObjectName(QString::fromUtf8("plainTextEdit48"));
        sizePolicy1.setHeightForWidth(plainTextEdit48->sizePolicy().hasHeightForWidth());
        plainTextEdit48->setSizePolicy(sizePolicy1);
        plainTextEdit48->setMaximumSize(QSize(35, 35));
        plainTextEdit48->setFont(font);
        plainTextEdit48->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-top-width: 2px;\n"
"border-right-width: 2px;"));
        plainTextEdit48->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit48->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit48->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit48->setTabChangesFocus(true);
        plainTextEdit48->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit48, 3, 8, 1, 1);

        plainTextEdit70 = new QPlainTextEdit(gridFrame);
        plainTextEdit70->setObjectName(QString::fromUtf8("plainTextEdit70"));
        sizePolicy1.setHeightForWidth(plainTextEdit70->sizePolicy().hasHeightForWidth());
        plainTextEdit70->setSizePolicy(sizePolicy1);
        plainTextEdit70->setMaximumSize(QSize(35, 35));
        plainTextEdit70->setFont(font);
        plainTextEdit70->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-bottom-width: 2px;\n"
"border-left-width: 2px;"));
        plainTextEdit70->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit70->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit70->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit70->setTabChangesFocus(true);
        plainTextEdit70->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit70, 8, 3, 1, 1);

        plainTextEdit11 = new QPlainTextEdit(gridFrame);
        plainTextEdit11->setObjectName(QString::fromUtf8("plainTextEdit11"));
        sizePolicy1.setHeightForWidth(plainTextEdit11->sizePolicy().hasHeightForWidth());
        plainTextEdit11->setSizePolicy(sizePolicy1);
        plainTextEdit11->setMaximumSize(QSize(35, 35));
        plainTextEdit11->setFont(font);
        plainTextEdit11->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-top-width: 2px;"));
        plainTextEdit11->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit11->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit11->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit11->setTabChangesFocus(true);
        plainTextEdit11->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit11, 0, 4, 1, 1);

        plainTextEdit37 = new QPlainTextEdit(gridFrame);
        plainTextEdit37->setObjectName(QString::fromUtf8("plainTextEdit37"));
        sizePolicy1.setHeightForWidth(plainTextEdit37->sizePolicy().hasHeightForWidth());
        plainTextEdit37->setSizePolicy(sizePolicy1);
        plainTextEdit37->setMaximumSize(QSize(35, 35));
        plainTextEdit37->setFont(font);
        plainTextEdit37->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-left-width: 2px;\n"
"border-top-width: 2px;"));
        plainTextEdit37->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit37->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit37->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit37->setTabChangesFocus(true);
        plainTextEdit37->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit37, 3, 3, 1, 1);

        plainTextEdit30 = new QPlainTextEdit(gridFrame);
        plainTextEdit30->setObjectName(QString::fromUtf8("plainTextEdit30"));
        sizePolicy1.setHeightForWidth(plainTextEdit30->sizePolicy().hasHeightForWidth());
        plainTextEdit30->setSizePolicy(sizePolicy1);
        plainTextEdit30->setMaximumSize(QSize(35, 35));
        plainTextEdit30->setFont(font);
        plainTextEdit30->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-top-width: 2px;\n"
"border-right-width: 2px;"));
        plainTextEdit30->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit30->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit30->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit30->setTabChangesFocus(true);
        plainTextEdit30->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit30, 3, 2, 1, 1);

        plainTextEdit72 = new QPlainTextEdit(gridFrame);
        plainTextEdit72->setObjectName(QString::fromUtf8("plainTextEdit72"));
        sizePolicy1.setHeightForWidth(plainTextEdit72->sizePolicy().hasHeightForWidth());
        plainTextEdit72->setSizePolicy(sizePolicy1);
        plainTextEdit72->setMaximumSize(QSize(35, 35));
        plainTextEdit72->setFont(font);
        plainTextEdit72->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-right-width: 2px;\n"
"border-bottom-width: 2px;"));
        plainTextEdit72->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit72->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit72->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit72->setTabChangesFocus(true);
        plainTextEdit72->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit72, 8, 5, 1, 1);

        plainTextEdit53 = new QPlainTextEdit(gridFrame);
        plainTextEdit53->setObjectName(QString::fromUtf8("plainTextEdit53"));
        sizePolicy1.setHeightForWidth(plainTextEdit53->sizePolicy().hasHeightForWidth());
        plainTextEdit53->setSizePolicy(sizePolicy1);
        plainTextEdit53->setMaximumSize(QSize(35, 35));
        plainTextEdit53->setFont(font);
        plainTextEdit53->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-bottom-width: 2px;"));
        plainTextEdit53->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit53->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit53->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit53->setTabChangesFocus(true);
        plainTextEdit53->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit53, 5, 7, 1, 1);

        plainTextEdit06 = new QPlainTextEdit(gridFrame);
        plainTextEdit06->setObjectName(QString::fromUtf8("plainTextEdit06"));
        sizePolicy1.setHeightForWidth(plainTextEdit06->sizePolicy().hasHeightForWidth());
        plainTextEdit06->setSizePolicy(sizePolicy1);
        plainTextEdit06->setMaximumSize(QSize(35, 35));
        plainTextEdit06->setFont(font);
        plainTextEdit06->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-right-width: 2px;"));
        plainTextEdit06->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit06->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit06->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit06->setTabChangesFocus(true);
        plainTextEdit06->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit06, 1, 2, 1, 1);

        plainTextEdit67 = new QPlainTextEdit(gridFrame);
        plainTextEdit67->setObjectName(QString::fromUtf8("plainTextEdit67"));
        sizePolicy1.setHeightForWidth(plainTextEdit67->sizePolicy().hasHeightForWidth());
        plainTextEdit67->setSizePolicy(sizePolicy1);
        plainTextEdit67->setMaximumSize(QSize(35, 35));
        plainTextEdit67->setFont(font);
        plainTextEdit67->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-left-width: 2px;"));
        plainTextEdit67->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit67->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit67->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit67->setTabChangesFocus(true);
        plainTextEdit67->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit67, 7, 3, 1, 1);

        plainTextEdit33 = new QPlainTextEdit(gridFrame);
        plainTextEdit33->setObjectName(QString::fromUtf8("plainTextEdit33"));
        sizePolicy1.setHeightForWidth(plainTextEdit33->sizePolicy().hasHeightForWidth());
        plainTextEdit33->setSizePolicy(sizePolicy1);
        plainTextEdit33->setMaximumSize(QSize(35, 35));
        plainTextEdit33->setFont(font);
        plainTextEdit33->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-right-width: 2px;"));
        plainTextEdit33->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit33->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit33->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit33->setTabChangesFocus(true);
        plainTextEdit33->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit33, 4, 2, 1, 1);

        plainTextEdit35 = new QPlainTextEdit(gridFrame);
        plainTextEdit35->setObjectName(QString::fromUtf8("plainTextEdit35"));
        sizePolicy1.setHeightForWidth(plainTextEdit35->sizePolicy().hasHeightForWidth());
        plainTextEdit35->setSizePolicy(sizePolicy1);
        plainTextEdit35->setMaximumSize(QSize(35, 35));
        plainTextEdit35->setFont(font);
        plainTextEdit35->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-bottom-width: 2px;"));
        plainTextEdit35->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit35->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit35->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit35->setTabChangesFocus(true);
        plainTextEdit35->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit35, 5, 1, 1, 1);

        plainTextEdit38 = new QPlainTextEdit(gridFrame);
        plainTextEdit38->setObjectName(QString::fromUtf8("plainTextEdit38"));
        sizePolicy1.setHeightForWidth(plainTextEdit38->sizePolicy().hasHeightForWidth());
        plainTextEdit38->setSizePolicy(sizePolicy1);
        plainTextEdit38->setMaximumSize(QSize(35, 35));
        plainTextEdit38->setFont(font);
        plainTextEdit38->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-top-width: 2px;"));
        plainTextEdit38->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit38->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit38->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit38->setTabChangesFocus(true);
        plainTextEdit38->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit38, 3, 4, 1, 1);

        plainTextEdit69 = new QPlainTextEdit(gridFrame);
        plainTextEdit69->setObjectName(QString::fromUtf8("plainTextEdit69"));
        sizePolicy1.setHeightForWidth(plainTextEdit69->sizePolicy().hasHeightForWidth());
        plainTextEdit69->setSizePolicy(sizePolicy1);
        plainTextEdit69->setMaximumSize(QSize(35, 35));
        plainTextEdit69->setFont(font);
        plainTextEdit69->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-right-width: 2px;"));
        plainTextEdit69->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit69->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit69->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit69->setTabChangesFocus(true);
        plainTextEdit69->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit69, 7, 5, 1, 1);

        plainTextEdit23 = new QPlainTextEdit(gridFrame);
        plainTextEdit23->setObjectName(QString::fromUtf8("plainTextEdit23"));
        sizePolicy1.setHeightForWidth(plainTextEdit23->sizePolicy().hasHeightForWidth());
        plainTextEdit23->setSizePolicy(sizePolicy1);
        plainTextEdit23->setMaximumSize(QSize(35, 35));
        plainTextEdit23->setFont(font);
        plainTextEdit23->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        plainTextEdit23->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit23->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit23->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit23->setTabChangesFocus(true);
        plainTextEdit23->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit23, 1, 7, 1, 1);

        plainTextEdit49 = new QPlainTextEdit(gridFrame);
        plainTextEdit49->setObjectName(QString::fromUtf8("plainTextEdit49"));
        sizePolicy1.setHeightForWidth(plainTextEdit49->sizePolicy().hasHeightForWidth());
        plainTextEdit49->setSizePolicy(sizePolicy1);
        plainTextEdit49->setMaximumSize(QSize(35, 35));
        plainTextEdit49->setFont(font);
        plainTextEdit49->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-left-width: 2px;"));
        plainTextEdit49->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit49->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit49->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit49->setTabChangesFocus(true);
        plainTextEdit49->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit49, 4, 6, 1, 1);

        plainTextEdit34 = new QPlainTextEdit(gridFrame);
        plainTextEdit34->setObjectName(QString::fromUtf8("plainTextEdit34"));
        sizePolicy1.setHeightForWidth(plainTextEdit34->sizePolicy().hasHeightForWidth());
        plainTextEdit34->setSizePolicy(sizePolicy1);
        plainTextEdit34->setMaximumSize(QSize(35, 35));
        plainTextEdit34->setFont(font);
        plainTextEdit34->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-bottom-width: 2px;\n"
"border-left-width: 2px;"));
        plainTextEdit34->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit34->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit34->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit34->setTabChangesFocus(true);
        plainTextEdit34->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit34, 5, 0, 1, 1);

        plainTextEdit73 = new QPlainTextEdit(gridFrame);
        plainTextEdit73->setObjectName(QString::fromUtf8("plainTextEdit73"));
        sizePolicy1.setHeightForWidth(plainTextEdit73->sizePolicy().hasHeightForWidth());
        plainTextEdit73->setSizePolicy(sizePolicy1);
        plainTextEdit73->setMaximumSize(QSize(35, 35));
        plainTextEdit73->setFont(font);
        plainTextEdit73->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-left-width: 2px;\n"
"border-top-width: 2px;"));
        plainTextEdit73->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit73->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit73->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit73->setTabChangesFocus(true);
        plainTextEdit73->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit73, 6, 6, 1, 1);

        plainTextEdit07 = new QPlainTextEdit(gridFrame);
        plainTextEdit07->setObjectName(QString::fromUtf8("plainTextEdit07"));
        sizePolicy1.setHeightForWidth(plainTextEdit07->sizePolicy().hasHeightForWidth());
        plainTextEdit07->setSizePolicy(sizePolicy1);
        plainTextEdit07->setMaximumSize(QSize(35, 35));
        plainTextEdit07->setFont(font);
        plainTextEdit07->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-bottom-width: 2px;\n"
"border-left-width: 2px;"));
        plainTextEdit07->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit07->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit07->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit07->setTabChangesFocus(true);
        plainTextEdit07->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit07, 2, 0, 1, 1);

        plainTextEdit15 = new QPlainTextEdit(gridFrame);
        plainTextEdit15->setObjectName(QString::fromUtf8("plainTextEdit15"));
        sizePolicy1.setHeightForWidth(plainTextEdit15->sizePolicy().hasHeightForWidth());
        plainTextEdit15->setSizePolicy(sizePolicy1);
        plainTextEdit15->setMaximumSize(QSize(35, 35));
        plainTextEdit15->setFont(font);
        plainTextEdit15->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-right-width: 2px;"));
        plainTextEdit15->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit15->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit15->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit15->setTabChangesFocus(true);
        plainTextEdit15->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit15, 1, 5, 1, 1);

        plainTextEdit76 = new QPlainTextEdit(gridFrame);
        plainTextEdit76->setObjectName(QString::fromUtf8("plainTextEdit76"));
        sizePolicy1.setHeightForWidth(plainTextEdit76->sizePolicy().hasHeightForWidth());
        plainTextEdit76->setSizePolicy(sizePolicy1);
        plainTextEdit76->setMaximumSize(QSize(35, 35));
        plainTextEdit76->setFont(font);
        plainTextEdit76->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-left-width: 2px;"));
        plainTextEdit76->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit76->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit76->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit76->setTabChangesFocus(true);
        plainTextEdit76->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit76, 7, 6, 1, 1);

        plainTextEdit39 = new QPlainTextEdit(gridFrame);
        plainTextEdit39->setObjectName(QString::fromUtf8("plainTextEdit39"));
        sizePolicy1.setHeightForWidth(plainTextEdit39->sizePolicy().hasHeightForWidth());
        plainTextEdit39->setSizePolicy(sizePolicy1);
        plainTextEdit39->setMaximumSize(QSize(35, 35));
        plainTextEdit39->setFont(font);
        plainTextEdit39->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-top-width: 2px;\n"
"border-right-width: 2px;"));
        plainTextEdit39->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit39->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit39->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit39->setTabChangesFocus(true);
        plainTextEdit39->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit39, 3, 5, 1, 1);

        plainTextEdit03 = new QPlainTextEdit(gridFrame);
        plainTextEdit03->setObjectName(QString::fromUtf8("plainTextEdit03"));
        sizePolicy1.setHeightForWidth(plainTextEdit03->sizePolicy().hasHeightForWidth());
        plainTextEdit03->setSizePolicy(sizePolicy1);
        plainTextEdit03->setMaximumSize(QSize(35, 35));
        plainTextEdit03->setFont(font);
        plainTextEdit03->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-top-width: 2px;\n"
"border-right-width: 2px;"));
        plainTextEdit03->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit03->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit03->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit03->setTabChangesFocus(true);
        plainTextEdit03->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit03, 0, 2, 1, 1);

        plainTextEdit16 = new QPlainTextEdit(gridFrame);
        plainTextEdit16->setObjectName(QString::fromUtf8("plainTextEdit16"));
        sizePolicy1.setHeightForWidth(plainTextEdit16->sizePolicy().hasHeightForWidth());
        plainTextEdit16->setSizePolicy(sizePolicy1);
        plainTextEdit16->setMaximumSize(QSize(35, 35));
        plainTextEdit16->setFont(font);
        plainTextEdit16->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-bottom-width: 2px;\n"
"border-left-width: 2px;"));
        plainTextEdit16->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit16->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit16->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit16->setTabChangesFocus(true);
        plainTextEdit16->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit16, 2, 3, 1, 1);

        plainTextEdit54 = new QPlainTextEdit(gridFrame);
        plainTextEdit54->setObjectName(QString::fromUtf8("plainTextEdit54"));
        sizePolicy1.setHeightForWidth(plainTextEdit54->sizePolicy().hasHeightForWidth());
        plainTextEdit54->setSizePolicy(sizePolicy1);
        plainTextEdit54->setMaximumSize(QSize(35, 35));
        plainTextEdit54->setFont(font);
        plainTextEdit54->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-right-width: 2px;\n"
"border-bottom-width: 2px;"));
        plainTextEdit54->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit54->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit54->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit54->setTabChangesFocus(true);
        plainTextEdit54->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit54, 5, 8, 1, 1);

        plainTextEdit31 = new QPlainTextEdit(gridFrame);
        plainTextEdit31->setObjectName(QString::fromUtf8("plainTextEdit31"));
        sizePolicy1.setHeightForWidth(plainTextEdit31->sizePolicy().hasHeightForWidth());
        plainTextEdit31->setSizePolicy(sizePolicy1);
        plainTextEdit31->setMaximumSize(QSize(35, 35));
        plainTextEdit31->setFont(font);
        plainTextEdit31->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-left-width: 2px;"));
        plainTextEdit31->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit31->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit31->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit31->setTabChangesFocus(true);
        plainTextEdit31->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit31, 4, 0, 1, 1);

        plainTextEdit59 = new QPlainTextEdit(gridFrame);
        plainTextEdit59->setObjectName(QString::fromUtf8("plainTextEdit59"));
        sizePolicy1.setHeightForWidth(plainTextEdit59->sizePolicy().hasHeightForWidth());
        plainTextEdit59->setSizePolicy(sizePolicy1);
        plainTextEdit59->setMaximumSize(QSize(35, 35));
        plainTextEdit59->setFont(font);
        plainTextEdit59->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        plainTextEdit59->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit59->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit59->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit59->setTabChangesFocus(true);
        plainTextEdit59->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit59, 7, 1, 1, 1);

        plainTextEdit28 = new QPlainTextEdit(gridFrame);
        plainTextEdit28->setObjectName(QString::fromUtf8("plainTextEdit28"));
        sizePolicy1.setHeightForWidth(plainTextEdit28->sizePolicy().hasHeightForWidth());
        plainTextEdit28->setSizePolicy(sizePolicy1);
        plainTextEdit28->setMaximumSize(QSize(35, 35));
        plainTextEdit28->setFont(font);
        plainTextEdit28->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-left-width: 2px;\n"
"border-top-width: 2px;"));
        plainTextEdit28->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit28->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit28->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit28->setTabChangesFocus(true);
        plainTextEdit28->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit28, 3, 0, 1, 1);

        plainTextEdit10 = new QPlainTextEdit(gridFrame);
        plainTextEdit10->setObjectName(QString::fromUtf8("plainTextEdit10"));
        sizePolicy1.setHeightForWidth(plainTextEdit10->sizePolicy().hasHeightForWidth());
        plainTextEdit10->setSizePolicy(sizePolicy1);
        plainTextEdit10->setMaximumSize(QSize(35, 35));
        plainTextEdit10->setFont(font);
        plainTextEdit10->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-left-width: 2px;\n"
"border-top-width: 2px;"));
        plainTextEdit10->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit10->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit10->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit10->setTabChangesFocus(true);
        plainTextEdit10->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit10, 0, 3, 1, 1);

        plainTextEdit45 = new QPlainTextEdit(gridFrame);
        plainTextEdit45->setObjectName(QString::fromUtf8("plainTextEdit45"));
        sizePolicy1.setHeightForWidth(plainTextEdit45->sizePolicy().hasHeightForWidth());
        plainTextEdit45->setSizePolicy(sizePolicy1);
        plainTextEdit45->setMaximumSize(QSize(35, 35));
        plainTextEdit45->setFont(font);
        plainTextEdit45->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-right-width: 2px;\n"
"border-bottom-width: 2px;"));
        plainTextEdit45->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit45->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit45->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit45->setTabChangesFocus(true);
        plainTextEdit45->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit45, 5, 5, 1, 1);

        plainTextEdit58 = new QPlainTextEdit(gridFrame);
        plainTextEdit58->setObjectName(QString::fromUtf8("plainTextEdit58"));
        sizePolicy1.setHeightForWidth(plainTextEdit58->sizePolicy().hasHeightForWidth());
        plainTextEdit58->setSizePolicy(sizePolicy1);
        plainTextEdit58->setMaximumSize(QSize(35, 35));
        plainTextEdit58->setFont(font);
        plainTextEdit58->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-left-width: 2px;"));
        plainTextEdit58->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit58->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit58->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit58->setTabChangesFocus(true);
        plainTextEdit58->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit58, 7, 0, 1, 1);

        plainTextEdit60 = new QPlainTextEdit(gridFrame);
        plainTextEdit60->setObjectName(QString::fromUtf8("plainTextEdit60"));
        sizePolicy1.setHeightForWidth(plainTextEdit60->sizePolicy().hasHeightForWidth());
        plainTextEdit60->setSizePolicy(sizePolicy1);
        plainTextEdit60->setMaximumSize(QSize(35, 35));
        plainTextEdit60->setFont(font);
        plainTextEdit60->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-right-width: 2px;"));
        plainTextEdit60->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit60->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit60->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit60->setTabChangesFocus(true);
        plainTextEdit60->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit60, 7, 2, 1, 1);

        plainTextEdit50 = new QPlainTextEdit(gridFrame);
        plainTextEdit50->setObjectName(QString::fromUtf8("plainTextEdit50"));
        sizePolicy1.setHeightForWidth(plainTextEdit50->sizePolicy().hasHeightForWidth());
        plainTextEdit50->setSizePolicy(sizePolicy1);
        plainTextEdit50->setMaximumSize(QSize(35, 35));
        plainTextEdit50->setFont(font);
        plainTextEdit50->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        plainTextEdit50->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit50->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit50->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit50->setTabChangesFocus(true);
        plainTextEdit50->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit50, 4, 7, 1, 1);

        plainTextEdit47 = new QPlainTextEdit(gridFrame);
        plainTextEdit47->setObjectName(QString::fromUtf8("plainTextEdit47"));
        sizePolicy1.setHeightForWidth(plainTextEdit47->sizePolicy().hasHeightForWidth());
        plainTextEdit47->setSizePolicy(sizePolicy1);
        plainTextEdit47->setMaximumSize(QSize(35, 35));
        plainTextEdit47->setFont(font);
        plainTextEdit47->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-top-width: 2px;"));
        plainTextEdit47->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit47->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit47->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit47->setTabChangesFocus(true);
        plainTextEdit47->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit47, 3, 7, 1, 1);

        plainTextEdit17 = new QPlainTextEdit(gridFrame);
        plainTextEdit17->setObjectName(QString::fromUtf8("plainTextEdit17"));
        sizePolicy1.setHeightForWidth(plainTextEdit17->sizePolicy().hasHeightForWidth());
        plainTextEdit17->setSizePolicy(sizePolicy1);
        plainTextEdit17->setMaximumSize(QSize(35, 35));
        plainTextEdit17->setFont(font);
        plainTextEdit17->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-bottom-width: 2px;"));
        plainTextEdit17->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit17->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit17->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit17->setTabChangesFocus(true);
        plainTextEdit17->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit17, 2, 4, 1, 1);

        plainTextEdit27 = new QPlainTextEdit(gridFrame);
        plainTextEdit27->setObjectName(QString::fromUtf8("plainTextEdit27"));
        sizePolicy1.setHeightForWidth(plainTextEdit27->sizePolicy().hasHeightForWidth());
        plainTextEdit27->setSizePolicy(sizePolicy1);
        plainTextEdit27->setMaximumSize(QSize(35, 35));
        plainTextEdit27->setFont(font);
        plainTextEdit27->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-right-width: 2px;\n"
"border-bottom-width: 2px;"));
        plainTextEdit27->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit27->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit27->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit27->setTabChangesFocus(true);
        plainTextEdit27->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit27, 2, 8, 1, 1);

        plainTextEdit64 = new QPlainTextEdit(gridFrame);
        plainTextEdit64->setObjectName(QString::fromUtf8("plainTextEdit64"));
        sizePolicy1.setHeightForWidth(plainTextEdit64->sizePolicy().hasHeightForWidth());
        plainTextEdit64->setSizePolicy(sizePolicy1);
        plainTextEdit64->setMaximumSize(QSize(35, 35));
        plainTextEdit64->setFont(font);
        plainTextEdit64->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-left-width: 2px;\n"
"border-top-width: 2px;"));
        plainTextEdit64->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit64->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit64->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit64->setTabChangesFocus(true);
        plainTextEdit64->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit64, 6, 3, 1, 1);

        plainTextEdit44 = new QPlainTextEdit(gridFrame);
        plainTextEdit44->setObjectName(QString::fromUtf8("plainTextEdit44"));
        sizePolicy1.setHeightForWidth(plainTextEdit44->sizePolicy().hasHeightForWidth());
        plainTextEdit44->setSizePolicy(sizePolicy1);
        plainTextEdit44->setMaximumSize(QSize(35, 35));
        plainTextEdit44->setFont(font);
        plainTextEdit44->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-bottom-width: 2px;"));
        plainTextEdit44->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit44->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit44->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit44->setTabChangesFocus(true);
        plainTextEdit44->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit44, 5, 4, 1, 1);

        plainTextEdit04 = new QPlainTextEdit(gridFrame);
        plainTextEdit04->setObjectName(QString::fromUtf8("plainTextEdit04"));
        sizePolicy1.setHeightForWidth(plainTextEdit04->sizePolicy().hasHeightForWidth());
        plainTextEdit04->setSizePolicy(sizePolicy1);
        plainTextEdit04->setMaximumSize(QSize(35, 35));
        plainTextEdit04->setFont(font);
        plainTextEdit04->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-left-width: 2px;"));
        plainTextEdit04->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit04->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit04->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit04->setTabChangesFocus(true);
        plainTextEdit04->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit04, 1, 0, 1, 1);

        plainTextEdit65 = new QPlainTextEdit(gridFrame);
        plainTextEdit65->setObjectName(QString::fromUtf8("plainTextEdit65"));
        sizePolicy1.setHeightForWidth(plainTextEdit65->sizePolicy().hasHeightForWidth());
        plainTextEdit65->setSizePolicy(sizePolicy1);
        plainTextEdit65->setMaximumSize(QSize(35, 35));
        plainTextEdit65->setFont(font);
        plainTextEdit65->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-top-width: 2px;"));
        plainTextEdit65->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit65->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit65->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit65->setTabChangesFocus(true);
        plainTextEdit65->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit65, 6, 4, 1, 1);

        plainTextEdit13 = new QPlainTextEdit(gridFrame);
        plainTextEdit13->setObjectName(QString::fromUtf8("plainTextEdit13"));
        sizePolicy1.setHeightForWidth(plainTextEdit13->sizePolicy().hasHeightForWidth());
        plainTextEdit13->setSizePolicy(sizePolicy1);
        plainTextEdit13->setMaximumSize(QSize(35, 35));
        plainTextEdit13->setFont(font);
        plainTextEdit13->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-left-width: 2px;"));
        plainTextEdit13->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit13->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit13->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit13->setTabChangesFocus(true);
        plainTextEdit13->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit13, 1, 3, 1, 1);

        plainTextEdit51 = new QPlainTextEdit(gridFrame);
        plainTextEdit51->setObjectName(QString::fromUtf8("plainTextEdit51"));
        sizePolicy1.setHeightForWidth(plainTextEdit51->sizePolicy().hasHeightForWidth());
        plainTextEdit51->setSizePolicy(sizePolicy1);
        plainTextEdit51->setMaximumSize(QSize(35, 35));
        plainTextEdit51->setFont(font);
        plainTextEdit51->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-right-width: 2px;"));
        plainTextEdit51->setInputMethodHints(Qt::ImhDigitsOnly);
        plainTextEdit51->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit51->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit51->setTabChangesFocus(true);
        plainTextEdit51->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(plainTextEdit51, 4, 8, 1, 1);

        solve = new QPushButton(widget);
        solve->setObjectName(QString::fromUtf8("solve"));
        solve->setEnabled(false);
        solve->setGeometry(QRect(9, 386, 331, 24));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 356, 331, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        previous = new QPushButton(layoutWidget);
        previous->setObjectName(QString::fromUtf8("previous"));
        previous->setEnabled(false);

        horizontalLayout->addWidget(previous);

        next = new QPushButton(layoutWidget);
        next->setObjectName(QString::fromUtf8("next"));
        next->setEnabled(false);

        horizontalLayout->addWidget(next);


        verticalLayout_2->addWidget(widget);

        SudokuClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SudokuClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 377, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        SudokuClass->setMenuBar(menuBar);
        QWidget::setTabOrder(plainTextEdit01, plainTextEdit02);
        QWidget::setTabOrder(plainTextEdit02, plainTextEdit03);
        QWidget::setTabOrder(plainTextEdit03, plainTextEdit10);
        QWidget::setTabOrder(plainTextEdit10, plainTextEdit11);
        QWidget::setTabOrder(plainTextEdit11, plainTextEdit12);
        QWidget::setTabOrder(plainTextEdit12, plainTextEdit19);
        QWidget::setTabOrder(plainTextEdit19, plainTextEdit20);
        QWidget::setTabOrder(plainTextEdit20, plainTextEdit21);
        QWidget::setTabOrder(plainTextEdit21, plainTextEdit04);
        QWidget::setTabOrder(plainTextEdit04, plainTextEdit05);
        QWidget::setTabOrder(plainTextEdit05, plainTextEdit06);
        QWidget::setTabOrder(plainTextEdit06, plainTextEdit13);
        QWidget::setTabOrder(plainTextEdit13, plainTextEdit14);
        QWidget::setTabOrder(plainTextEdit14, plainTextEdit15);
        QWidget::setTabOrder(plainTextEdit15, plainTextEdit22);
        QWidget::setTabOrder(plainTextEdit22, plainTextEdit23);
        QWidget::setTabOrder(plainTextEdit23, plainTextEdit24);
        QWidget::setTabOrder(plainTextEdit24, plainTextEdit07);
        QWidget::setTabOrder(plainTextEdit07, plainTextEdit08);
        QWidget::setTabOrder(plainTextEdit08, plainTextEdit09);
        QWidget::setTabOrder(plainTextEdit09, plainTextEdit16);
        QWidget::setTabOrder(plainTextEdit16, plainTextEdit17);
        QWidget::setTabOrder(plainTextEdit17, plainTextEdit18);
        QWidget::setTabOrder(plainTextEdit18, plainTextEdit25);
        QWidget::setTabOrder(plainTextEdit25, plainTextEdit26);
        QWidget::setTabOrder(plainTextEdit26, plainTextEdit27);
        QWidget::setTabOrder(plainTextEdit27, plainTextEdit28);
        QWidget::setTabOrder(plainTextEdit28, plainTextEdit29);
        QWidget::setTabOrder(plainTextEdit29, plainTextEdit30);
        QWidget::setTabOrder(plainTextEdit30, plainTextEdit37);
        QWidget::setTabOrder(plainTextEdit37, plainTextEdit38);
        QWidget::setTabOrder(plainTextEdit38, plainTextEdit39);
        QWidget::setTabOrder(plainTextEdit39, plainTextEdit46);
        QWidget::setTabOrder(plainTextEdit46, plainTextEdit47);
        QWidget::setTabOrder(plainTextEdit47, plainTextEdit48);
        QWidget::setTabOrder(plainTextEdit48, plainTextEdit31);
        QWidget::setTabOrder(plainTextEdit31, plainTextEdit32);
        QWidget::setTabOrder(plainTextEdit32, plainTextEdit33);
        QWidget::setTabOrder(plainTextEdit33, plainTextEdit40);
        QWidget::setTabOrder(plainTextEdit40, plainTextEdit41);
        QWidget::setTabOrder(plainTextEdit41, plainTextEdit42);
        QWidget::setTabOrder(plainTextEdit42, plainTextEdit49);
        QWidget::setTabOrder(plainTextEdit49, plainTextEdit50);
        QWidget::setTabOrder(plainTextEdit50, plainTextEdit51);
        QWidget::setTabOrder(plainTextEdit51, plainTextEdit34);
        QWidget::setTabOrder(plainTextEdit34, plainTextEdit35);
        QWidget::setTabOrder(plainTextEdit35, plainTextEdit36);
        QWidget::setTabOrder(plainTextEdit36, plainTextEdit43);
        QWidget::setTabOrder(plainTextEdit43, plainTextEdit44);
        QWidget::setTabOrder(plainTextEdit44, plainTextEdit45);
        QWidget::setTabOrder(plainTextEdit45, plainTextEdit52);
        QWidget::setTabOrder(plainTextEdit52, plainTextEdit53);
        QWidget::setTabOrder(plainTextEdit53, plainTextEdit54);
        QWidget::setTabOrder(plainTextEdit54, plainTextEdit55);
        QWidget::setTabOrder(plainTextEdit55, plainTextEdit56);
        QWidget::setTabOrder(plainTextEdit56, plainTextEdit57);
        QWidget::setTabOrder(plainTextEdit57, plainTextEdit64);
        QWidget::setTabOrder(plainTextEdit64, plainTextEdit65);
        QWidget::setTabOrder(plainTextEdit65, plainTextEdit66);
        QWidget::setTabOrder(plainTextEdit66, plainTextEdit73);
        QWidget::setTabOrder(plainTextEdit73, plainTextEdit74);
        QWidget::setTabOrder(plainTextEdit74, plainTextEdit75);
        QWidget::setTabOrder(plainTextEdit75, plainTextEdit58);
        QWidget::setTabOrder(plainTextEdit58, plainTextEdit59);
        QWidget::setTabOrder(plainTextEdit59, plainTextEdit60);
        QWidget::setTabOrder(plainTextEdit60, plainTextEdit67);
        QWidget::setTabOrder(plainTextEdit67, plainTextEdit68);
        QWidget::setTabOrder(plainTextEdit68, plainTextEdit69);
        QWidget::setTabOrder(plainTextEdit69, plainTextEdit76);
        QWidget::setTabOrder(plainTextEdit76, plainTextEdit77);
        QWidget::setTabOrder(plainTextEdit77, plainTextEdit78);
        QWidget::setTabOrder(plainTextEdit78, plainTextEdit61);
        QWidget::setTabOrder(plainTextEdit61, plainTextEdit62);
        QWidget::setTabOrder(plainTextEdit62, plainTextEdit63);
        QWidget::setTabOrder(plainTextEdit63, plainTextEdit70);
        QWidget::setTabOrder(plainTextEdit70, plainTextEdit71);
        QWidget::setTabOrder(plainTextEdit71, plainTextEdit72);
        QWidget::setTabOrder(plainTextEdit72, plainTextEdit79);
        QWidget::setTabOrder(plainTextEdit79, plainTextEdit80);
        QWidget::setTabOrder(plainTextEdit80, plainTextEdit81);
        QWidget::setTabOrder(plainTextEdit81, previous);
        QWidget::setTabOrder(previous, next);
        QWidget::setTabOrder(next, solve);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen);

        retranslateUi(SudokuClass);
        QObject::connect(solve, &QPushButton::clicked, SudokuClass, qOverload<>(&QMainWindow::update));

        QMetaObject::connectSlotsByName(SudokuClass);
    } // setupUi

    void retranslateUi(QMainWindow *SudokuClass)
    {
        SudokuClass->setWindowTitle(QCoreApplication::translate("SudokuClass", "Sudoku", nullptr));
        actionOpen->setText(QCoreApplication::translate("SudokuClass", "Open", nullptr));
        plainTextEdit08->setPlainText(QString());
        solve->setText(QCoreApplication::translate("SudokuClass", "Solve", nullptr));
        previous->setText(QCoreApplication::translate("SudokuClass", "Previous", nullptr));
        next->setText(QCoreApplication::translate("SudokuClass", "Next", nullptr));
        menuFile->setTitle(QCoreApplication::translate("SudokuClass", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SudokuClass: public Ui_SudokuClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUDOKU_H
