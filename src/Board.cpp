#include "Board.h"
#include <iostream>
using namespace std;
void Board::display_board(){
//cout<<name1<<"     " <<name2<<endl;
//cout<<score1<<"          " <<score2<<endl;
for(int i=0;i<9;i++)
{
  cout<<"|"<<board[i]<<"|";
 if(i==2||i==5||i==8)
 cout<<endl<<"---------"<<endl;
}

}
bool Board::valid_move(){
return isdigit(board[new_position-1]);
}
bool Board::update_board(int position,char symbol){
 new_position=position;
    if(valid_move())
{
 new_position=position;
board[new_position-1]=symbol;
return true;
}
return false;
}
void Board::reset_board(){
 board[0]='1'; board[1]='2';board[2]='3';board[3]='4';board[4]='5';board[5]='6';board[6]='7';board[7]='8';board[8]='9';
}
bool Board::draw(){
for(char c:board){
  if(isdigit(c))
     return false;
}
return true;
}
void Board::end(){
system("cls");
static int f=0;
if(f==1){
//cout<<name1<<"     " <<name2<<endl;
//cout<<score1<<"          " <<score2<<endl;
}
f++;
for(int i=0;i<9;i++)
{
    if(board[i]!='*')
board[i]=' ';
}
}

bool Board::checkwin(){
int arr[]={0,1,2,3,4,5,6,7,8,1,4,7,2,5,8,2,4,6,0,4,8,0,3,6};
for(int i=0;i<size(arr)-2;i+=3){
if(board[arr[i]]==board[arr[i+1]]&&board[arr[i+1]]==board[arr[i+2]]){
board[arr[i]]='*';board[arr[i+1]]='*';board[arr[i+2]]='*';
return true;
}
}
return false;
}

