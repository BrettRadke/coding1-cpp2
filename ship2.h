#pragma once //pragma once in mainship file!

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class myShip { //ship class
    public: //people can see this!
        string name; //string name
        double fuel; // fuel doubles
        string shipType; //shiptype string

}
void WriteShipToFile (givenShip) { //write ship to the file
    ofstream file("shipper.txt", ios::app); //.txt file that it is sending to

    if (!file.is_open()) { //if files are open
        file << "Name: " << givenShip.name << "\n"; // ship name
        file << "Fuel: " << givenShip.fuel << "\n"; // ship fuel amount
        file << "Ship Type: " << givenShip.shipType << "\n"; //ship type
        file.close(); //close the files (which saves it to the disk)
    }
    
    else{
        cout << "Unable to open file.\n";
        return; // it can open file it it doesn't read
    }

    //write text to the open file
    file << givenShip; // file of the given ship
}
void ReadFromFile();
