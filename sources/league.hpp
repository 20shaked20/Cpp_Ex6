
#include <vector>


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