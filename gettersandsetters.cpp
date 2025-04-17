//Brett Radke Coding 1
// Classes!

#include <iostream>
#include <string>
using namespace std;

//use class keyword to make class named "robot"
// dont forget the semi colon after the curly braces
class robot {
private:
    string name;
    string phrase; //phrases include puncutation!
    int charge = 10;
    int maxCharge = 100;
    int minCharge = 0; // percentage

public: //anyone that can see this, call this, change this!
    // member functions
    //function declarations to be defined later
    //function declarations don't require paramter names
    robot(string, string, int);
    robot();
    void SayHello();

    // setters and getters give access to private variables
    // through whatever tests you want to write.
    
    // setcharge clamps charge to a range 0-100 (inclusive)
    // setters will always have an input parameter
    void SetCharge(int givenCharge) {
        if(givenCharge < 0) {
            charge = 0  
        }
        else if(givenCharge > 100) {
            charge = 100
        }
        else {
            charge = givenCharge;
        }
    }
    void ChangeCharge(int by = -1) {
        charge += by;
        SetCharge(charge); //for clamping charge.
    }
    // getters will always have a return type
    int GetCharge() {
        return charge;
    }
    void SetName(string givenName) {
        if(givenName.size() < 2) {
            cout << "Name is too short!\n";
            return; // return something out of a void function to end the function.
        }
        else if(givenName.size() > 20) {
            cout << "Name is too long!\n";
            return;
        }
        else {
            name = givenName;
        }
    }
    string GetName() {
        return name;
    }
    // no need to let people get the phrase
    // or hear it! The robot gets to be in charge of when they see that!

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
        ChangeCharge(); // this task is was not very expensive on our charge
    }

int main() {
    cout << "Classes, yeah\n";

    robot bobert;
    bobert.SetName("Bobert Jr.");
    bobert.SetCharge(5);

    cout << "Have a look at my new robot! Their name is! " << bobert.GetName() << ".\n";
    cout << "I am currently charging them, their charge is " << bobert.GetCharge() << ".\n";

    bobert.ChangeCharge(50);
    cout << "two hours later, bobert's charge is now " << bobert.GetCharge() << ".\n";

    robot rob("Roberto", "I can fix anything!", 25);
    cout << "My new robot was very expensive! He works on the nuclear reactor.\n";
    cout << "He can introduce himself, watch!\n";
    
    rob.SayHello();
    rob.ChangeCharge(-200); //nuclear reactor sapped all energy
    bobert.SayHello();

    return 0;
}