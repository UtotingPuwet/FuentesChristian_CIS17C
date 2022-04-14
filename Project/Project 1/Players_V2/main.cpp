/* 
 * File:   main.cpp
 * Author: Christian Fuentes
 * Created on 4/13/2022 1:09PM
 * Purpose:  Creating Players
 */

//System Libraries
#include <iostream>
#include "Players.h"
#include "Deck.h"
using namespace std;

//User Libraries

//Global Constants - No Global Variables

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set seed
    srand(static_cast<int>(time(NULL)));
    //Declare Variable Data Types and Constants
    Players test ("Christian");
    Deck deck;
    //Initialize Variables
    test.init(deck);
    //Process or map Inputs to Outputs

    //Display Outputs
    
    //Exit stage right!
    return 0;
}