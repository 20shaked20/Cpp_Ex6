
#include "game.hpp"

ariel::game::game()
{
    this->home = nullptr;
    this->out = nullptr;
}

ariel::game::game(ariel::team& home, ariel::team& out)
{
    this->home = new ariel::team(home.get_name, home.get_talent);
    this->out = new ariel::team(out.get_name, out.get_talent);
}

/*consider return?*/
void ariel::game::start_game()
{   
    this->_home->set_game_score(55 + (rand() % 45) + this->get_home_team()->getSkill() * 10); /*will generate a number between 55 and 100*/
    this->_out->set_game_score(50 + (rand() % 45) + this->get_away_team()->getSkill() * 10); /*will generate a number between 55 and 100*/

    if(this->_home->get_game_score() == this->_out->get_game_score())
    {   
        /*this case where score is the same, so i will decide by talent*/
        if(this->_home->get_talent() > this->_out->get_talent())
        {
            this->_home->wins_update();
            /*can add losses too*/
        }
        else
        {
            this->_out->wins_update();
        }
    }
    else if(this->_home->get_game_score() > this->_out->get_game_score())
    {
        this->_home->wins_update();
    }
    else
    {
        this->_out->wins_update();
    }
}