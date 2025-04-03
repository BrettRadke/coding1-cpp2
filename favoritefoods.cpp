// Brett Radke Coding 1 Week 10
// Functions today!!!

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// global variables are dangerous
// global variables exist in all functions like this source file.
const bool debug = false;

// Functions!!!
//f(x) = y
//f(input) = output
//f(2) = 4
//f(3) = 6
//f(4) = 8

//all functions have a return type, a name, and (input parameters)
//declaring and defining a new function called "sayHello"
//it has a return type of void, which means it returns nothing
//it has one input parameter named "greeting" with a default value of "Hello!"

void sayHello(string greeting = "Hello!"){
    cout << greeting << "\n";

}

void sayGoodbye(string asdf = "Goodbye!");


// funcion name is .... triple(int givenNumber)
int triple(int givenNumber) {
    if(debug) cout << "[givenNumber: " << givenNumber << ".]\n";

    return givenNumber * 3;        //this is the output of the function.
}

//function overloading
// funcion name is .... triple(int givenNumber)
double triple(double givenNumber){
    if(debug) cout << "[givenNumber: " << givenNumber << " .]\n";

    return givenNumber * 3;
}

float triple(float givenNumber){
    if(debug) cout << "[givenNumber: " << givenNumber << " .]\n";

    return givenNumber * 3;
}
string triple(string givenNumber){
    if(debug) cout << "[givenNumber: " << givenNumber << " .]\n";

    return givenNumber + givenNumber + givenNumber;
}



//creating a new function named "getPlayerName"
//return type is string, with two input parameters for minSize and maxSize
string getPlayerName(int minSize = 5, int maxSize = 15) {
    string input;       //go to store player's input
    do{
        cout << "What is your name?\n";
        getline(cin,input);

        //data validation
        if (input.size() < minSize) {
            cout << "Your name needs to be at least " << minSize << " characters.\n";
        }
        else if(input.size() > maxSize) {
            cout << "Your name needs to be fewer than " << maxSize + 1 <<" characters\n";
        }
        else{
            string greeting = "Hello " + input + "!";   //create a greeting that includes
            sayHello(greeting);                         //the player's name
            return input;                               //output = player's name
        }
    } while (true);
}


//create a function that asks for a number between min and max
// and uses an if statement to verify that 
int randomNumberInRange(int min, int max) {
    //check to ensure that max is larger than min.
    if(min >= max) {
        cout << "I can't use these numbers.\n";
        return -1;
    }
    //calculate range
    int range = (max - min) + 1;  // 56 - 60 for example.
    //return random number
    return rand() % range + min; // min = 50 for example.
}

bool randomBool() {
    int number = rand % 10;

    if (number > 4)
        return true;
    else
        return false;

}

/* block comment*/
int main() {
    if (randomBool()) {
        cout << "You've won a prize!!!\n";
        // if true, call adventure
    }
    
    string input;

    cout << "Min = What?: ";
    getline(cin, input);
    int min = stoi(input);

    cout << "Max = What?: ";
    getline(cin, input);
    int max = stoi(input);

    cout << "A random number between " << min << " and " << max;
    cout << " is " << randomNumberInRange(min, max) << ".\n";
    //call the function
    sayHello();
    sayHello("Welcome to the Jungle!!!");
    sayGoodbye();
    sayGoodbye("Thar she blows, my guy...");

    string playerName = getPlayerName();        //don't have to specify min and max state

    cout << "Triple of 4 is " << triple(4) << ".\n";
    cout << "Triple of 4 is " << triple(33.99) << ".\n";
    cout << "Triple of 4 is " << triple(5.35) << ".\n";

    //cout << "Hello!\n";
    cout << "Please enter your top 3 favorite foods: \n";
    //string input;   // to keep track to what the user types

    string favFoods[11];

    for(int i = 0; i < 3; i++) {        //
        cout << "fav food #" << i + 1 << ": ";     // prompt the player with text
        getline(cin, input);        // get input from player

        favFoods[i] = input;        //add the input to the array
    }

    cout << "Here are your favorite foods: \n";   
    for (int i = 0; i < 3; i++) {       //run the loop 3 times
        cout << favFoods[i] << ".\n";       // output each favFood
    }

}

//after main, we can define our functions
void sayGoodbye(string farewell){
    cout << farewell << "\n";
}
