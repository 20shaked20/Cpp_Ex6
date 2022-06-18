/**
 * @file Test.cpp
 * @author shaked levi
 * @brief simple test case for project
 * @version 0.1
 * @date 2022-06-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "doctest.h"

#include "game.hpp"
#include "league.hpp"
#include "team.hpp"
#include "schedule.hpp"


TEST_CASE("game 1") {
    team *a= new team("ayelet",0.5);
    team *b= new team("shaked",0.6);

    game *c = game(a,b);
    
    CHECK(c->_home->get_name()="shaked");
    CHECK(c->_home->get_name()="ayelet");
    CHECK(c->_home->get_wins()==0);
    CHECK(c->_out->get_wins()==0);
    CHECK(c->_home->get_game_score()<=100);
    CHECK(c->_out->get_game_score()<=100);
    CHECK(c->_home->get_game_score()>=55);
    CHECK(c->_out->get_game_score()>=50);

}

TEST_CASE("game 2") {
    team *a= new team("gali",0.3);
    team *b= new team("rozit",0.2);


    game c=game(b,a);
    CHECK(c->_home->get_name()="gali");
    CHECK(c->_home->get_name()="rozit");
    CHECK(c->_home->get_wins()==0);
    CHECK(c->_out->get_wins()==0);
    CHECK(c->_home->get_game_score()<=100);
    CHECK(c->_out->get_game_score()<=100);
    CHECK(c->_home->get_game_score()>=55);
    CHECK(c->_out->get_game_score()>=50);
}

