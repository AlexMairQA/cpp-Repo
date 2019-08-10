#ifndef PLANET_HPP
#define PLANET_HPP

#endif // PLANET_HPP

#include <cstdlib>
#include <string>


using namespace std;



class Planet
{
private:
    string planetName;
    int year;
    string atmosphere;
    int moons;
public:
    //default constructor
    Planet();
    //constructor with args allows solarSystem array to be initialised
    Planet(string newplanetName, int newYear, string newatmosphere, int newmoons);
    //getter methods
    string getplanetname();
    int getyear();
    string getatmosphere();
    int getmoons();
};
