#include "Game.h"
#include<iostream>
using namespace std;
void Game::restart(){
board.reset_board();
playgame();
}
void Game::setupplayers(){
for(int i=0;i<2;i++){
 cout<<"\nPlayer  "<<i+1<<" ,";
 player[i].choose_name();
 cout<<"\nPlayer  "<<i+1<<" ,";
 player[i].chosse_symbol();
cout<<"----------------------\n";
}
//name1=player[0].get_name();
//name2=player[1].get_name();
//player2.name1=Player[1].get_name();
}
void Game::playturn(){
Player playernow=player[current_index];
system("cls");
board.display_board();
cout<<playernow.get_name()<<" is turn "<<playernow.get_symbol()<<"  ";
int cell;
while(true){
cin>>cell;
try{
if(cell>=1&&cell<=9&&board.update_board(cell,playernow.get_symbol()))
break;
else{
throw "invalid move ,try again";
}
}
catch(const char* e){
cout<<e<<endl;
}
}
if(current_index==0)
current_index++;
else{
current_index--;
}
}
void Game::playgame(){
int choice;
while(true){
  playturn();
  if(board.checkwin()){
  system("cls");
  board.end();board.display_board();
if(current_index==1){
cout<<"Congratulation "<<player[0].get_name()<<" you won"<<endl;
cout<<"Good luck "<<player[1].get_name();
player[0].add_score();
//score1=player[0].get_score();
}
else{ cout<<"Congratulation "<<player[1].get_name()<<" you won"<<endl;
cout<<"\nGood luck "<<player[0].get_name()<<endl;
player[1].add_score();
//score2=player[1].get_score();
}
choice=menu.display_endgame_menu();
  if(choice==1){
  restart();
 break;
  }
  else{
    cout<<"thank you for playing\n";
  break;
  }
  }
else if(board.draw())
    {
cout<<"          DRAW\n";
choice=menu.display_endgame_menu();
  if(choice==1){
  restart();
  break;
  }
  else{
    cout<<"thank you for playing\n";
  break;
  }
    }
}

}
void Game::startgame(){
int choice=menu.display_main_menu();
if(choice==1){
 setupplayers();
 playgame();
}
else{
cout<<"thank you for playing\n";
return;
}
}
