// Brett Radke Coding 1 Spring 2025 Week 3
// Adventure Assignment

#include <iostream> 
#include <string> 
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout <<"Welcome to the game!\n";  //welcome the player
    cout <<"Ready to Begin?\n";   //set up the game
    string input; // Ask the player for input
    cin >> input;
    for (int totalTurns = 0; totalTurns < 5; totalTurns++){
        if (input == "yes"){
                cout << "Okay, let's get started!\n"
                int totalHealth = 20;
                int totalAttack = 1;
                int totalHealth2 = 20;
                int totalAttack2 = 1;
            }
            do{
                cout << "You have to save the princess, you still need to get through the dragon. Get ready to begin! You will play as Mattheus.\n"
            }
            char playerCharInput = 'Ok' // get input
            cout << "You've encountered a wild dragon."
            while{
                int totalTurns += 1;
                cout << "Mattheus, Attack!\n";        
                totalTurns += 1;    // explain increment and combined assignment operators
                srand(time(0));
                    cout << "The number is " << playerAttack == (rand() % 4) + 0 << ".\n";
            if (playerAttack > enemyAttack){
                cout << "The dragon takes a hit! With a total of" << totalHeath2 - 5 << "left.\n";
            }
            else{
                cout << "Blocked! The dragon Has a total of" << totalHealth2 << "left.\n"
            }
                cout << "The dragon attacks!\n";       
                // explain increment and combined assignment operators
                srand(time(0));
                    cout << "The number is " << (rand() % 4) + 0 << ".\n";
                cout << "Mattheus! Block!\n"
                cin << playerCharInput;
                srand(time(0));
                    cout << "The number is " << (rand() % 4) + 0 << ".\n";
                if (playerAttack < enemyAttack){
                cout << "Mattheus takes a hit! With a total of" << totalHeath - 5 << "left.\n";
            }
                else{
                cout << "Successful Block! Mattheus Has a total of" << totalHealth << "left.\n"
            }
                cout << "Do you want to continue adventuring\n"
                cin << input;
                if (input == "yes"){
                    "Okey doke, lets keep going!"
            }
                else{
                    "Game Over"
                    break
            }
                if (totalHealth == 0){
                    cout << "Mattheus is dead! Game over!"
            }
                else (totalHealth2 == 0){
                    cout << "The dragon is dead! The princess is saved! You win!"
            }
            }
            // totalTurns++;    // increment doctors
            }
        }
        else {
            cout << "Okay, Game Over."
            break
        }
    
    //int health = 10, attack, block, turns = 0
    //seed the random number generator
    //start the loop
    //add 1 to turns
    //start the encounter
    //randomly generate numbers for attack (range = 0-4) and block (range = 0-4)
    //if block is greater or equal to attack, successful block
    //otherwise, subtract attack value from health.
    //ask the player if they would like to keep adventuring. if they don't, break out of the loop.
    //keep looping while health is greater than zero and fewer than 4 turns have happened
    //if health is greater than 0, congratulate player
    //otherwise, tell the player they're dead.

}