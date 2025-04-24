#pragma once

#include <iostream>
#include <string>
using namespace std;

// this specifies the different types of ships.
enum shipType {FIGHTER, FRIGATE, FREIGHTER, CRUISER};

class ship
{
public:
    string name;
    int fuel;
    shipType type;
    
    ship();
    void status();
    // the constructor.
    // equivalent to sayHello();
} ;