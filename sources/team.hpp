/**
 * @file team.hpp
 * @author shaked levi
 * @brief header file for the team class
 * @version 0.1
 * @date 2022-06-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <vector>
#include <string>

#pragma once

namespace ariel
{

    class team
    {

    private:
        std::string _name;
        double _talent;
        int _wins;

        int _game_score;

    public:
        /**
         * @brief default ctor
         * 
         */
        team();

        /**
         * @brief ctor 
         * 
         * @param name1 
         * @param t 
         */
        team(std::string name1, int t);

        /**
         * @brief Get the score object
         * 
         * @return int 
         */
        int get_wins();

        /**
         * @brief updates the score of the team after a win
         * 
         * @param new_score 
         */
        void wins_update(int new_score);

        /**
         * @brief Get the current game score for a team.
         * 
         * @return int 
         */
        int get_game_score();

        /**
         * @brief Set the game score object
         * 
         * @param new_score a new score for the team.
         * @return int 
         */
        int set_game_score(int new_score);

        /**
         * @brief get the name of the team.
         * 
         * @return std::string 
         */
        std::string get_name();

        /**
         * @brief a number between 0 - 1 give extra points to a winning team.
         * 
         */
        double get_talent();
    };

}