

#include "league.hpp"

ariel::Leauge::Leauge()
{
    this->_teams.emplace_back(new Team("Team1", 0.5));
    this->_teams.emplace_back(new Team("Team2", 0.3));
    this->_teams.emplace_back(new Team("Team3", 0.2));
    this->_teams.emplace_back(new Team("Team4", 0.8));
    this->_teams.emplace_back(new Team("Team5", 0.4));
    this->_teams.emplace_back(new Team("Team6", 0.2));
    this->_teams.emplace_back(new Team("Team7", 0.1));
    this->_teams.emplace_back(new Team("Team8", 0.9));
    this->_teams.emplace_back(new Team("Team9", 0.4));
    this->_teams.emplace_back(new Team("Team10", 0.3));
    this->_teams.emplace_back(new Team("Team11", 0.5));
    this->_teams.emplace_back(new Team("Team12", 0.2));
    this->_teams.emplace_back(new Team("Team13", 0.5));
    this->_teams.emplace_back(new Team("Team14", 0.7));
    this->_teams.emplace_back(new Team("Team15", 0.6));
    this->_teams.emplace_back(new Team("Team16", 0.4));
    this->_teams.emplace_back(new Team("Team17", 0.5));
    this->_teams.emplace_back(new Team("Team18", 0.8));
    this->_teams.emplace_back(new Team("Team19", 0.9));
    this->_teams.emplace_back(new Team("Team20", 0.9));
}

ariel::team* ariel::Leauge::get_team(size_t id)
{
    return this->_teams.at(id);
}

ariel::Leauge::~League()
{
    for(int i = 0; i<20; ++i)
    {
        delete this->_team.at(i);
    }
}
