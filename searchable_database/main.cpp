#include <QCoreApplication>
#include"planet.hpp"
#include <iostream>
#include <string>
using namespace std;

//The searchname function allows users to search planet by name
void searchname(Planet* solarSystem);

//the yearmoons function allows users to search for planets by number of moons
//or year length
void yearmoons(Planet* solarSystem);
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //Solar System object is initialized as an array

    Planet solarSystem[9] = { { "Mercury", 88, "none", 0 },
    { "Venus", 225, "sulphuric acid , CO2", 0 },
    { "Earth", 365, "oxygen, nitrogen", 1 },
    { "Mars", 400, "CO2", 2 },
    { "Jupiter", 4380, "Hydrogen, helium, ammonia", 18 },
    { "Saturn", 5000, "Hydrogen, helium", 15 },
    { "Uranus", 6000, "Hydrogen, helium", 15 },
    { "Neptune", 10000, "Hydrogen, helium", 15 },
    { "Pluto", 20000, "none", 1 } };

    //switch statement in main allows users to choose search options
    char searchtype;
        cout << "press \"n\" to search a planet name or \"s\" to look up statistics" << endl;
    cin >> searchtype;
    switch (searchtype)
    {
    case'n':
        searchname(solarSystem);
        break;

    case 's':
        yearmoons(solarSystem);
        break;
    default:
        break;
    }



    return a.exec();
}


void searchname(Planet* solarSystem)
{
    string nameplanet;
    cout << "Type in a planet name\n";
    cin >> nameplanet;
    for (int i = 0; i < 9; i++)
    {
        if (nameplanet == solarSystem[i].getplanetname())
        {
            cout << solarSystem[i].getplanetname();
            cout << endl;
            cout << "Year: " << solarSystem[i].getyear();
            cout << " Earth days";
            cout << endl;
            cout << "atmospheric composition: " << solarSystem[i].getatmosphere();
            cout << endl;
            cout << "Moons " << solarSystem[i].getmoons();
            cout << endl;
        }
    }






}


void yearmoons(Planet* solarSystem)
{
    int input;
    cout << "Find out year lenghth or satellite number" << endl;
    cin >> input;
    for (int i = 0; i < 9; i++)
    {
        if (input == solarSystem[i].getyear() || input == solarSystem[i].getmoons())
        {
            cout << solarSystem[i].getplanetname();
            cout << endl;
            cout << "Year: " << solarSystem[i].getyear();
            cout << " Earth days";
            cout << endl;
            cout << "atmospheric composition: " << solarSystem[i].getatmosphere();
            cout << endl;
            cout << "Moons " << solarSystem[i].getmoons();
            cout << endl;
        }
    }
}
