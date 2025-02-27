// Brett Radke Coding1b Week 5 Feb 20, 2025
// Loops and Lists

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    cout << "Do you want to ask what your favorite games are?\n"; //ask the user if they want to name their favorite games
    cout << "Press 1 for Yes.\n";
    cout << "Press 2 for No.\n";

    string input;   // make a variale to store the input from the player
    getline(cin, input);    // get the input from the player

    //test the inpout from the player
    //stoi() stands for "string to integer" and converts a string to an integer (if it can)
    if (stoi(input) == 1) {
        cout << "Let's start the Favorite Games program!\n";
    }
    else if (stoi(input) == 2) {
        cout << "Let's just have you name them anyways";
        }
    else {
        cout << "I didn't understand that request.\n"; //different message if it doesn't relate to the answer
    }

    cout << "What are your favorite games?\n"; //enter a list of favorite games

    string favGames[5];     // size of 10. arrays must specify in c++.
    int currentElement = 0;     // this points at the next available spot in the array
    do{
        cout << "enter a name, or type 'quit' to quit.\n";
        
        getline(cin, input);     // using cin, get input and assign it to temp
        
        if (input == "quit") {
            break;
    }

        favGames[currentElement++] = input;
        while(input != "quit" && currentElement <= 5);

        cout << "Here are all of your favorite games! Lets play!\n";

    for (int i = 0; i < 5; i++) {
        cout << favGames[i] << "\n";
    }
    
    cout << "Now that you have listed all of your games, would you like to remove, edit, or add more?\n";
    cin >> input;

    string favGames[5]; //curent number of games that you have listed
    string input;

    cin.ignore();
    getline(cin, input) // getting the lines for the input

    if (input == "Add") { // add the favorite games
        cin << "Put the game that you want to add to the list"

        for(int i = 0; i < 5; i++) {
            if favGames[i] == ""{
                favGames[i] = gameName; //put in the game name
                cout << "Adding game now:" << input << "to list\n";
                break;
            }
        }
        }
    }
    else if (input == "Edit") { // edit the favorite games
        for(int i = 0; i < 5; i++) {
            if (input == favGames[i]) {
                cout << "I've found the game, renaming it now.\n"
                favGames[i] = input;
            }
        }
    }
    else if (input == "Remove") { // remove the favorite games
        for(int i = 0; i < 5; i++) {
            if (input == favGames[i]) {
                cout << "I've found the game, removing it now.\n"
                favGames[i] = "";
            }
        }
    }
    else if (input == "Show") { //show the favorite games
        for (int i = 0; i < 5 i++) {
            if (favGames[i] == "") {
                continue;
            }
        }
    }
    else {
        break;
    }
}
// I have tried my best to get the edit, show, delete, and remove functions in the code. It's not easy for me.
