#include "ship2.h" //the file it opens

int main(){
    Ship myShip("USS Ambassador", 3000.5, "Kingship");
    WriteShipToFile(myShip); //writes ship to file
    return 0;
}