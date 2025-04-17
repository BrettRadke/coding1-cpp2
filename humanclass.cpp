// Brett Radke
// Human class assignment

#include <iostream>
#include <string>
using namespace std;

class Human; { // human class
private: // ony the person can see this or edit this
    string name; // string name
    int Health; // int health
    int Damage; // int damage

public: // everybody can see this and edit this!
    Human(string name, int Health = 10, int baseDamage = 4); { //int health and base damage with string name
    Name = name;
    Health = health;
    Damage = baseDamage;
    }

    void sayHello() {
    cout << "Hello, my name is " << Name << "!\n"; // say hello void
    }

    void setHealth(int byAmount) { // setHealth void
        Health = byAmount;
    }

    void setDamage(int givenDamage) { // setDamage void
        Damage = givenDamage; // base damage
    }

    int GetHealth() { //get health int
        return Health;
    }

    int GetDamage() { // get damage int
        return Damage;
    }

}
