#ifndef PLAYER_H
#define PLAYER_H
#include <cctype>
#include <string>
using namespace std;
class Player {
private:
    string name;
    char symbol;
    int score=0;
public:
        bool valid_name(const string& name);
    void choose_name() ;
    const string& get_name() const ;
const char& get_symbol() const;
void chosse_symbol();
void add_score();
int get_score();
};
#endif // PLAYER_H
