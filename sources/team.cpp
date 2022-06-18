
#include "team.hpp"


ariel::team::team()
{
    this->_name = "";
    this->_talent = 0;
    this->_wins = 0;
}

ariel::team::team(std::string name1, int t)
{
    if(talent < 0 || talent > 1)
    {
        throw "talent must be between 0 to 1";
    }

    this->_name = name1;
    this->_talent = t;
    this->_wins = 0;
}

int ariel::team::get_wins()
{
    return this->_wins;
}

void ariel::team::wins_update()
{
    ++(this->_wins); 
}

int ariel::team::get_game_score()
{
    return this->_game_score;
}

void ariel::team::set_game_score(int new_score)
{
    this->_game_score = new_score;
}


std::string ariel::team::get_name()
{
    return this->_name;
}

double ariel::team::get_talent()
{
    return this->_talent;
}
