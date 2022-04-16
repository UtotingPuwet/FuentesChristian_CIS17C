/* 
 * File:   main.cpp
 * Author: Christian Fuentes
 * Created on 4/14/2022 3:45AM
 * Purpose:  Creating Speed
 */

//System Libraries
#include <iostream>
#include <map>
#include <iterator>
using namespace std;

//User Libraries
#include "Players.h"
#include "Deck.h"
#include "Speed.h"
//Global Constants - No Global Variables

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set seed
    srand(static_cast<int>(time(NULL)));
    //Game
    Speed speed("Christian");
    speed.game();
    //Exit stage right!
    return 0;
}