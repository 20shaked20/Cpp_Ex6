#include <string>
#include "team.hpp"
#include "game.hpp"
#include "league.hpp"
#include <vector>

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
