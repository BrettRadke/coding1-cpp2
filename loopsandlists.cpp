// Brett Radke Coding1b Week 5 Feb 20, 2025
// Loops and Lists

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));     //for random numbers
    cout << "Welcome to week 5!\n";

    string favGames[10];
    string input;
    getline(cin, input);

    if (input == "Add") {
        
    }
    else if (input == "Edit") {
        
    }
    else if (input == "Remove") {
        for(int i = 0; i < 10; i++) {
            if (input == favGames[i]) {
                cout << "I've found the game, removing it now.\n"
                favGames[i] = "";
            }
        }
    }
    else if (input == "Show") {
        for (int i = 0; i < 10 i++) {
            if (favGames[i] == "") {
                continue;
            }
        }
    }
    else {

    }
    // if/else if/else
    // variables
    // while and do-while
    // random numbers

    cout << "What program would you like to run?\n";
    cout << "Press 1 for keep playing.\n";
    cout << "Press 2 for player name.\n";

    string input;   // make a variale to store the input from the player
    getline(cin, input);    // get the input from the player

    //test the inpout from the player
    //stoi() stands for "string to integer" and converts a string to an integer (if it can)
    if (stoi(input) == 1) {
        cout << "Let's start the Keep Playing program!\n";
    }
    else if (stoi(input) == 2) {
        cout << "Let's start the Player Name program!\n";
    }
    else {
        cout << "I didn't understand that request.\n";
    }

    // lists
        // arrays
        // vectors
    // loops
        // for loop
    // more logic
        // switch statement
        // if/elseif/else

    string colors[4]; // size of the array

    colors[0] = "Red";
    colors[1] = "Blue";
    colors[2] = "Green";
    colors[3] = "Yellow";

    cout << "The first color in out array of colors is " << colors[0] << ".\n";

    // let's loop through all of the colors.
    cout << "\nHere are all of the colors in the array:\n";
    int iterator = 0;   // the iterator counts, starting at 0
    while (iterator < 4) {  // loop as long we're less than the array's size
        cout << colors[iterator] << "\n";  // send the crazy element's value to the console.
        iterator += 1;  // add 1 to the iterator
    }

    // let's build a new list, using layer input
    cout << "Who are your best friends?\n";
    // keep using string input from earlier
    string bestfriends[10];     // size of 10. arrays must specify in c++.
    int currentElement = 0;     // this points at the next available spot in the array
    do{
        cout << "enter a name, or type 'quit' to quit.\n";
        
        getline(cin, input);     // using cin, get input and assign it to temp
        
        if (input == "quit") {
            break;
        }

        bestfriends[currentElement++] = input;       //after currentElement is used, add 1

    } while(input != "quit" && currentElement <= 10);      // ! is the not operator.
        // "loop while input is NOT equal to quit"
        // and while currentElement is 

        // error looks like this:
        // there's a main()::input AND a do::input

        cout << "Here are all of your best friends. Looks like a party!\n";
        // for(setup, test, action) {code}
    for (int i = 0; i < 10; i++) {
        cout << bestfriends[i] << "\n";
    }

    // create an array of 33 random numbers between 1777 and 2025
    // then, tell the user what the highest number in that array is

    // use pseudocode to plan your program

    // 1. get the includes from other homework

    // 2. create the array
    // 3. create highscore for ("most RecentYear")
    //highscore = 0
    //4. create a random number within the range of 1777-2025)
    //get the range by saying 2025- 1777 = 248

    // does 0+1777 = 1777? yes
    // does 248 +1777 = 2025? yes

        // add 1 to the "range" because modulus gives us 1 less as a max.
        //int years = (rand() % 249 +1777);

        // if(years > highscore)
            //replace highscore with years[i];
        //print years at end of program.

    
    int min = 1777;
    int max = 2025;
    int range = max - min;
    int randomYear = (rand() % (range + 1)) + min;

    //prof's pseudocode
        //add includes
        //seed the random number generator
        //create the array of intergers with a size of 33
    int randomYears[33];
        cout << "test.\n";
        //use for loop to generate 33 random numbers and assign them to the array
            //optionally check "mostRecentYear" at the end of each loop
    
    // run 33 times, adding a random number to the array each time.
    // let's check for most year
    int mostRecentYear = 0;
    for (int i = 0; i < 32; i++) {
        randomYears[i] = (rand() % (248 + 1) + 1777);
        if (randomYears[i] > mostRecentYear) {
            mostRecentYear = randomYears[i];
        }
    }

    // show all years.
    for (int i = 0; i < 33; i++) {
        cout << randomYears[i] << "\n";
    }
    cout << "The most recent year in the list is " << mostRecentYear << ".\n";
         // print the most recent year.
            // Extra requirement, print all years.

    return 0;
}