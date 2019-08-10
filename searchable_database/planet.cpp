//This file contains the class methods


#include "planet.hpp"

Planet::Planet()
{
    planetName = "Zog";
    year = 12;
    atmosphere = "laughing gas";
    moons = 42;
}

Planet::Planet(string newplanetName, int newYear, string newatmosphere, int newmoons)
{
    planetName = newplanetName;
    year = newYear;
    atmosphere = newatmosphere;
    moons = newmoons;
}

string Planet::getplanetname()
{
    return planetName;
}
int Planet::getyear()
{
    return year;
}
string Planet::getatmosphere()
{
    return atmosphere;
}
int Planet::getmoons()
{
    return moons;
}
