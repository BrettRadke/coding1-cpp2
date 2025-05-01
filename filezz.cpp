#include "filezz.h"

void WriteToFile(string givenString) {
    //open (or create) the file
    ofstream file("file.txt", ios::app);    //ios::app to append to end of file.

    //confirm that the files is open
    if (!file.is_open()) {
        cout << "Couldn't open file.\n";
        return;
    }

    //write text to the open file
    file << givenString;

    //close the files (which saves it to the disk)
    file.close();

}

void ReadFromFile() {
    string fileContents;    // this is where we store the text in the file.
    
    // open the file
    ifstream file("file.txt");

    // check that it's actually open
    if(!file.is_open()) {
        cout << "could not open the file.\n";
    }
    // cout everything in the file
    while(getline(file, fileContents)){
        cout << fileContents << "\n";
    }
    // close the file.
}

void WriteShipToFile (ship givenShip){ //write ship to the file
    cout << "Writing " << givenShip.name << " to file.\n";
    ofstream file("ship.txt", ios::app); //.txt file that it is sending to

    if (!file.is_open()) { //if files are open
        cout << "Unable to open file.\n"; // if files are open
        return;
    }

    //write text to the open file
    file << givenShip.name; // file of the given ship
    file << givenShip.fuel;

    file.close();
}
