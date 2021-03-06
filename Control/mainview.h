#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <QMainWindow>
#include "Model/Deck.h"
#include <memory>
#include <vector>
#include <QLabel>

class MatchingGame;

namespace Ui {
class MainView;
}

class CardQPushButton;
//class QLabel;

class MainView : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainView(QWidget *parent = 0);
    ~MainView();

private slots:
    void onCardClick();

private:
    void drawView();

private:
    Ui::MainView *ui;

    std::unique_ptr<Deck> deck;
    std::unique_ptr<MatchingGame> game;

    std::vector<CardQPushButton*> cardButtons;

    QLabel* score;//=new QLabel;
};

#endif // MAINVIEW_H
