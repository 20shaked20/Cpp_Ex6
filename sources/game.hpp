/**
 * @file game.hpp
 * @author shaked levi
 * @brief header file for game
 * @version 0.1
 * @date 2022-06-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <vector>

#include "team.hpp"

#pragma once

namespace ariel
{

  class game
  {
  private:
    ariel::team *_home;
    ariel::team *_out;

  public:

    /**
     * @brief default ctor
     * 
     */
    game();

    /**
     * @brief ctor
     * 
     * @param a 
     * @param b 
     */
    game(team &home, team &out);

    /**
     * @brief starts the game between the two teams.
     * 
     */
    void start_game();

    /**
     * @brief Destroy the game object
     * 
     */
    ~game();

  };

}
