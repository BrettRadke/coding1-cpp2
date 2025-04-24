// Brett Radke Coding 1 Spring 2025
// Week 14 reading to and writing to files
// header files and multifile programs

// .csv
// Brett, Game Design, Junior
// James, Game Design II, Senior

// for file stream, for reading from and writing files
#include "filezz.h" //import the header file, which automatically imports the definitions too
#include "ship.h"

int main() {
    cout << "Let's make some new files! \n";
    
    ReadFromFile();

    WriteToFile("Did you make it to the Super Bowl?");

    ship minnow;
    minnow.type = CRUISER;
    minnow.status();

    return 0;
}

/*
    files we'll use today
    1. mainw14.cpp  <--- this is the entry point for the rest of the program
    2. filez.h
    3. filez.cpp
    4. ship.h
    5. ship.cpp

    The header file has the #includes and the function declarations
    the source file (.cpp) will have the function definitions.

*/