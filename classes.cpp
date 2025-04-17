//Brett Radke Coding 1
// Classes!

#include <iostream>
#include <string>
using namespace std;

//use class keyword to make class named "robot"
// dont forget the semi colon after the curly braces
class robot {
public: //anyone that can see this, call this, change this!
    string name;
    string phrase; //phrases include puncutation!
    int charge;

    // member functions
    //function declarations to be defined later
    //function declarations don't require paramter names
    robot(string, string, int);
    robot();
    void SayHello();


private: //only I can see this, call this, change this!
protected:
};

//function definitions must be outside of the class definition!
    // constructor. has to be named the same as the class and does not have a return type
    robot::robot(string givenName = "Robot", string givenPhrase = "Beep Boop", int givenCharge = 10) {
        // assigns this instance's variables to the given values.
        name = givenName;
        phrase = givenPhrase;
        charge = givenCharge;

        // lets us know how this constructor has run...
        cout << "A new robot has been constructed!\n";
    }
// overloading the constructor with a default constructor
    robot::robot() {
        cout << "Using the DEFAULT constructor.\n";
        cout << "Hey programmer Dexter, please fix this in the source code.\n";
    }

    void robot::SayHello() {
        cout << "My name is " << name << " and my charge is " << charge << ".\n";
        cout << phrase << "\n";
    }

int main() {
    cout << "Classes, yeah\n";

    robot bobert;
    bobert.name = "Bobert Jr.";
    bobert.charge = 5;

    cout << "Have a look at my new robot! Their name is! " << bobert.name << ".\n";
    cout << "I am currently charging them, their charge is " << bobert.charge << ".\n";

    robot rob("Roberto", "I can fix anything!", 25);
    cout << "My new robot was very expensive! He works on the nuclear reactor.\n";
    cout << "He can introduce himself, watch!\n";
    rob.SayHello();

    bobert.SayHello();

    return 0;
}