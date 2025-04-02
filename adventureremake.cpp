// Brett Radke Adventure 2!
// Coding 1 April 3rd, 2025

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int health = 100; // global functions
int totalTreasure = 0; // global functions

const bool debug = false; //bool debug

void theStory(string greeting = "Welcome to the story! In this story, You have to save the princess, you still need to get through the dragon. Get ready to begin! You will play as Mattheus."){
    cout << greeting << "\n";
}

bool askYesno(string const question){ // question about the decision
    string response; //response string
    while (true) {
    cout << question << " Yes or no: \n";
    cin >> response; //response fill
    if response = yes; { //true statement
        return true
    }
    else if response = no{ //false statement
        return false
    }
    else{
        cout << "Say yes or no please...\n"
    }
    cout << "Please answer yes or no: \n"
    }
}

int rollDie (int sides = 6){ // number of sides on a dice
    return rand() % sides + 1; // dice sides rolling
}

bool adventure(){
    int attack = rollDie (10) // attack roll
    int block = rollDie (10) // block roll
    int treasure = rollDie (20)  // treasure number roll
    
    cout << "The enemy uses the attack power of " << attack << ".\n" //statement on the attack
    cout << "The attempt power to block is " << block << ".\n" // block power

    if (block >= attack){ //statement on block success!
        cout << "Block has been a success!\n"
        totalTreasure += treasure; // amount of treasure added
        cout << "While looking for treasure! You have found over " << treasure << "gold!\n" // total gold
    }
    else{
        health -= attack //damage taken
        cout << "You got hit by the enemy! As a result, you have " << health << "health left!\n" // total health
    }

    cout << "You have " << health << "left!\n" // amount left total for health and treasure explained
    cout << "You have " << totalTreasure << "in your arsenal!\n"
}


void Adventure( ){ // adventure void
    int Attack(10); // attack power
    int Block(10); // block power
    int Treasure(20); // amount of treasure
}

void Ending() { // ending void
    cout << "Congratulations, your adventure is over and you have defeated the dragon! You rule the world!!!\n"
    if health <= 0
        cout << "You have failed to save the princess from the dragon. Game over!"
    }
    else{
        cout << "You have ended the journey with " << treasure << " treasure and " << health << "health! Well done!\n"
    }
}
void main (){
    srand(time(0)); // random numbers generated

    cout << "Welcome to the Medieval Adventure where you get to select the two options!\n"
    cout << "You fight your way to save the princess from the evil dragon!"
    while (health > 0); // health is at full at the start
        cin << "Do you want to start adventuring?\n"
}
int main{ //comes from the void main statement
    Main();
}

Ending() {

}
