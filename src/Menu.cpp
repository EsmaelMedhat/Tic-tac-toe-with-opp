#include "Menu.h"
#include<iostream>
using namespace std;
int Menu::display_main_menu(){
int choice;
cout<<"----------welcome to my tic tac toe------------\n";
cout<<"\n\n 1.Start game\n";
cout<<"\n 2.quit game\n";
cout<<"\n  choice :";
cin>>choice;
return choice;
}
int Menu::display_endgame_menu(){
int choice;
  cout<<"\n\n\n----------Game over------------\n";
    cout<<"\n\n 1.Restart game\n";
    cout<<"\n 2.Quit game\n";
    cout<<"\n  choice :";
       cin>>choice;
              return choice;
}

