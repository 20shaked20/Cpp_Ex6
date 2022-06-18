/**
 * @file schedule.hpp
 * @author shaked levi
 * @brief header file for schedluer
 * @version 0.1
 * @date 2022-06-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <string>
#include <vector>

#include "team.hpp"
#include "game.hpp"
#include "league.hpp"

#pragma once

namespace ariel
{

   class Schedule
   {

   private:
      ariel::Leauge *_league;

   public:
      /**
       * @brief default ctor
       * 
       */
      Schedule();

      /**
       * @brief Construct a new Schedule object
       * this only inits the league teams
       * @param league 
       */
      Schedule(Leauge &league);

      /**
       * @brief this starts the game between all the groups.
       * 
       */
      void gameplay();

      /**
       * @brief states the winner after the schedule if finished
       * 
       * @return std::string 
       */
      std::string league_winner();

      /**
       * @brief destory the schdeule object
       * 
       */
      ~Schedule()
   };

}
