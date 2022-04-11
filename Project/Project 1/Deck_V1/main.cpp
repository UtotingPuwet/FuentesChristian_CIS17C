/* 
 * File:   main.cpp
 * Author: Christian Fuentes
 * Created on 4/10/2022 5:30PM
 * Purpose:  Creating Deck V1
 */

//System Libraries
#include <iostream>
#include <queue>
#include <list>
#include <iterator>
#include "Card.h"
using namespace std;

//User Libraries
#include "Deck.h"
//Global Constants - No Global Variables

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set seed
    srand(static_cast<int>(time(NULL)));
    //Declare Variable Data Types and Constants
    Deck deck;
    
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    for (int i = 0; i < 20; i++) {
        Card test = deck.draw();
        cout << test.getSuit() << " of " << test.getFace() << "     " << test.getVal() << '\n';
    }
    //Display Outputs
    
    //Exit stage right!
    return 0;
}