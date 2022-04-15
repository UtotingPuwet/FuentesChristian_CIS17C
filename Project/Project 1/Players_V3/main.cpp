/* 
 * File:   main.cpp
 * Author: Christian Fuentes
 * Created on 4/14/2022 11:15AM
 * Purpose:  Creating HashMap maybe...? for Player picking card in hand
 */

//System Libraries
#include <iostream>
#include <map>
#include <iterator>
using namespace std;

//User Libraries
#include "Players.h"
#include "Deck.h"
//Global Constants - No Global Variables

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set seed
    srand(static_cast<int>(time(NULL)));
    //Declare Variable Data Types and Constants
    Players test ("Christian");
    Deck deck;
    map<int, Card> map1;
    map<int, Card>::iterator it;
    int choice;
    //Initialize Variables
    test.init(deck);
    //Process or map Inputs to Outputs
    test.prntHnd();
    while (choice != 7) {
        cin>>choice;
        test.choose(choice);
        test.prntHnd();
        test.draw();
        test.prntHnd();
    }
    
    //Display Outputs
    
    
    //Exit stage right!
    return 0;
}