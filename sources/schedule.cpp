#include "schedule.hpp"
#include <bits/stdc++.h> /*stl for max argument*/

ariel::Schedule::Schedule()
{
    this->_league = new League();
}

ariel::Schedule::Schedule(ariel::Leauge & league)
{
    this->_league = &league;
}

void ariel::Schedule::gameplay()
{
    std::vector<std::team*> home_teams(20);
    std::vector<std::team*> out_teams(20);

    for(int i = 0; i<10; ++i)
    {
        home_teams[i] = this->_league->get_team(i);
        out_teams[i] = this->_league->get_team(i+10);
    }

    for(int i = 0; i<19; ++i)
    {
        ariel::game game(*home_teams.at(i), *out_teams.at(i));
        game.start_game();
    } 
}

std::string ariel::Schedule::league_winner()
{
    int wins = 0;
    int winner_id = 0;

    for(size_t i = 0; i<20; ++i)
    {
        if(this->_league.at(i)->get_wins() > wins)
        {
            wins = this->_league->get_team(i).get_wins();
            winner_id = i;
        }
    }
    return this->_league->get_team(i).get_name();
}