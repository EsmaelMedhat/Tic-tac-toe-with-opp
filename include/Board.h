#ifndef BOARD_H
#define BOARD_H


class Board{
private:
char board[9]={'1','2','3','4','5','6','7','8','9'};
public:
int new_position;
void display_board();
bool valid_move();
bool update_board(int position,char symbol);
void reset_board();
bool draw();
void end();

bool checkwin();
};
#endif // BOARD_H
