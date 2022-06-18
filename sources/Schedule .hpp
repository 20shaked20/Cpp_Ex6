#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
#include "team.hpp"
#include "game.hpp"
#include "Leauge.hpp"
#include <vector>

using namespace std;


namespace ariel{

class Schedule {

public:
team a_home[10];
team a[10];
team b_home[10];
team b[10];
vector<team> a_sum;
vector<team> b_sum;

Schedule(Leauge l){
for(int i=0; i<10; i++){
a_home[i]=l->the_teams[i];
b[i]=l->the_teams[i];
}
j=0;
for(int j=10; i<20; i++){
a[j]=l->the_teams[i];
b_home[j]=l->the_teams[i];
j++;
}
for(int i=0; i<10; i++){
a_home[i]->difference = a_home[i]->how_mach - a[i]->how_mach;   
if(a_home[i]->difference>0){
   a_home[i]->win++; 
} 
b_home[i]->difference = b_home[i]->how_mach - b[i]->how_mach;
if(b_home[i]->difference>0){
   b_home[i]->win++; 
}   
a[i]->difference = a[i]->how_mach - a_home[i]->how_mach;  
if(a[i]->difference>0){
   a[i]->win++; 
} 
b[i]->difference = b[i]->how_mach - b_home[i]->how_mach;  
if(b[i]->difference>0){
   b[i]->win++; 
} 
}

for(int i=0; i<10; i++){
a_sum.push_back(a_home[i]);
a_sum.push_back(a[i]);
b_sum.push_back(b_home[i]);
b_sum.push_back(b[i]);
}

int i, j;
for (i = 0; i < a_sum.size() - 1; i++){
        for (j = 0; j < a_sum.size() - i - 1; j++){
            if (a_sum.at(j)->win >a_sum.at(j+1)->win){
                team g= a_sum.at(j);
                 a_sum.at(j) = a_sum.at(j+1);
                 a_sum.at(j+1) = g;
                 
            }
            if (b_sum.at(j)->win >b_sum.at(j+1)->win){
                team d= b_sum.at(j);
                 b_sum.at(j) = b_sum.at(j+1);
                 b_sum.at(j+1) = d;
                 
            }
}}

int k, l;
for (l = 0; l < a_sum.size() - 1; l++){
        for (k = 0; k < a_sum.size() - l - 1; k++){
            if ((a_sum.at(k)->win ==a_sum.at(k+1)->win) &&  (a_sum.at(k)->difference <a_sum.at(k+1)->difference)){
                team g= a_sum.at(k);
                 a_sum.at(k) = a_sum.at(k+1);
                 a_sum.at(k+1) = g;
                 
            }
            if ((b_sum.at(k)->win == b_sum.at(k+1)->win) &&  (b_sum.at(k)->difference <b_sum.at(k+1)->difference)){
                team d= b_sum.at(k);
                 b_sum.at(k) = b_sum.at(k+1);
                 b_sum.at(k+1) = d;
                 
            }
}}


}

vector<game> leader(int g);
int s_k();



};

}
