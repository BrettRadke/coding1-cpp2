// Brett Radke Coding 1
// structures

#include <iostream>
#include <string>
using namespace std;

enum enemyType {GRUNT, MINIBOSS, BOSS}

//a custom varible type 
struct enemy {
    int health = 10;
    int damage = 4 ;
    string name = "Enemy";
    enemyType type = GRUNT;
};

struct employee {
    int Id = 0;
    string name;
    int age;
    //string address;
    address addr;
    float wage;

};

void AddressOneLine(address addr) {
    string oneLine = "";
    oneLine += to_string(addr.streetNumber);
    oneLine += " " + addr.streetName;
    oneLine += ", " + addr.city;
    oneLine += ", " + addr.stateCode;
    oneLine += ", " + to_string(addr.zipCode);

    return oneLine;

}

struct address {
    string streetName;
    int streetNumber;
    string city;
    string state;
    string zipCode;
}

int main () {
    cout <<  "Structures! \n";
    brandon.health = 10;
    brandon.damage = 4;
    brandon.name = "Evil Brandon";
    brandon.type = GRUNT;

    cout << "Here's " << brandon.name << "! His health is " << brandon.health << "\n.";
    
    enemy tom;
    tom.damage = 6;
    tom.name = "Skinny Tom";

    cout << tom.name << " is attacking " << brandon.name << "!!!\n";
    brandon.health -= tom.damage;

    if(brandon.health < 1) {
        cout << brandon.name << " has been killed! \n";

    }
    else {
        cout << brandon.name << " has " << brandon.health << " health left!\n";
    }

    vector<enemy> enemies;

    enemies.push_back(brandon);
    enemies.push_back(tom);

    cout << "Status of all enemies:\n";
    for (int i = 0; i < enemies.size(); i++) {
        cout << enemies[i].name << " has " << enemies[i].health << " health.\n";
        cout << "Their damage is " << enemies[i].damage << " and their type is";
        switch (enemies[i].type)
        {
        case GRUNT:
            cout << "grunt";
            break;
        case MINIBOSS:
            cout << "mini-boss";
            break;
        case BOSS:
            cout << "boss";
            break;
        default:
        cout << "unknown";
            break;
        }
        cout << ".\n";
    }

    employee brett;
    brett.Id = 2456;
    brett.name = "Brett Radke";
    brett.age = 21;
    brett.wage = 7.25f;
    brett.addr.streetNumber = 2010;
    brett.addr.streetName = "Clifton Ave";
    brett.addr.stateCode = "WY";
    brett.addr.zipCode = 82609;

    cout << brian.name << " lives at " << AddressOneLine(brett.adr) << ".\n";



    return 0;
}