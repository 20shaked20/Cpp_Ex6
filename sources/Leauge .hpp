#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
#include "team.hpp"

using namespace std;

namespace ariel{

class Leauge {

public:
team the_teams[20];

};
Leauge(){
for(int i=0; i<20; i++){
 team t;
 t->name=i;   
 the_teams[i]=t;
}
}

Leauge(team _teams[20]){
    this->the_teams=_teams;  
}

}