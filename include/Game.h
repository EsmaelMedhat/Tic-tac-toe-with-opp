#ifndef GAME_H
#define GAME_H
#include<Player.h>
#include<Board.h>
#include<Menu.h>
class Game{
private:
Board board;
Menu menu;
Player player[2];
int current_index=0;
public:
void restart();
void setupplayers();
void playturn();
void playgame();
void startgame();
};

#endif // GAME_H
