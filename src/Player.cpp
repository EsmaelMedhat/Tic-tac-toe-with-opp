#include "Player.h"
#include<iostream>
#include <cctype>
#include <string>
using namespace std;
        bool Player::valid_name(const string& name) {
               for (char c : name) {
            if (!islower(c) && !isalpha(c)) {
                return false;
            }
        }
        return true;
    }

    void Player::choose_name() {
        string name;
        do {
            cout << "Please enter your name ( letters only without spaces): ";
           cin>>name;
            if (valid_name(name)) {
               this->name =name;
                break;
            } else {
               cout << "Invalid name. Please try again." << endl;
            }
        } while (true);
    }

    const string& Player:: get_name() const {
        return name;
    }
const char &Player:: get_symbol() const {
        return symbol;
    }
void Player:: chosse_symbol(){
     string symbol;

      cout << "Please enter your symbol ( single letter): ";
        cin>>symbol;
       if(!isdigit(symbol[0])&&symbol.length()==1)
              this->symbol=symbol[0];
else{
          cout << "Invalid name. Please try again." << endl;
             chosse_symbol();
}
}
void Player::add_score(){
score++;
}
int Player::get_score(){return score;}

