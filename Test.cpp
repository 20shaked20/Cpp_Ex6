#include "doctest.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <vector>
#include "game.hpp"
#include "Leauge.hpp"
#include "team.hpp"
#include "Schedule.hpp"
#include <string>
using namespace std;
using namespace ariel;

TEST_CASE("Good input -1") {
    team a=team();
    a->name="lior";
    a->talent=10;

    team b= team();
    b->name="eliram";
    b->talent=3;

    game c=game(a,b);
    CHECK(game->home->name="lior");
    CHECK(game->out->name="eliram");
    CHECK(game->home->how_mach!=0);
    CHECK(game->out->how_mach!=0);
    CHECK(game->home->how_mach<=100);
    CHECK(game->out->how_mach<=100);
    CHECK(game->home->how_mach>=55);
    CHECK(game->out->how_mach>=50);

}

TEST_CASE("Good input -2") {
    team a=team();
    a->name="liam";
    a->talent=7;

    team b= team();
    b->name="ori";
    b->talent=5;

    game c=game(b,a);
    CHECK(game->home->name="ori");
    CHECK(game->out->name="liam");
    CHECK(game->home->how_mach!=0);
    CHECK(game->out->how_mach!=0);
    CHECK(game->home->how_mach<=100);
    CHECK(game->out->how_mach<=100);
    CHECK(game->home->how_mach>=50);
    CHECK(game->out->how_mach>=55);
}

TEST_CASE("Good input -2") {
    team a=team();
    a->name="liam";
    a->talent=7;

    game c=game(a,a);
    CHECK(game->home->name="laim");
    CHECK(game->out->name="liam");
    CHECK(game->home->how_mach<=100);
    CHECK(game->out->how_mach<=100);
    CHECK(game->home->how_mach>=50);
    CHECK(game->out->how_mach>=50);
}

