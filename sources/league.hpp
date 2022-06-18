
/**
 * @file league.hpp
 * @author shaked levi
 * @brief header file of league 
 * @version 0.1
 * @date 2022-06-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <vector>

#include "team.hpp"

namespace ariel
{

    class Leauge
    {

    private:
        std::vector<team*> _teams;

    public:
        /**
         * @brief default ctor with 20 teams.
         * 
         */
        Leauge();

        /**
         * @brief Get the team object
         * 
         * @param id 
         * @return ariel::team 
         */
        ariel::team get_team(size_t id);

        /**
         * @brief Destroy the League object
         * 
         */
        ~League();
    };
}