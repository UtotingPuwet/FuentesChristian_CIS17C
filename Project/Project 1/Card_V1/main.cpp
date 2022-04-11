/* 
 * File:   main.cpp
 * Author: Christian Fuentes
 * Created on 4/9/2022 2:00 AM
 * Purpose:  Creating card V1
 */

//System Libraries
#include <iostream>
#include <queue>
#include <list>
#include <iterator>
#include "Card.h"
using namespace std;

//User Libraries

//Global Constants - No Global Variables

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set seed

    //Declare Variable Data Types and Constants
    queue<Card> Deck;
    
    //Initialize Variables
    Card a[52];
    
    for (int i = 0; i < 52; i++) {
        a[i].iniCard(i);
        Deck.push(a[i]);
        Card temp = Deck.front();
        cout << temp.getFace() << " of " << temp.getSuit() << '\n';
        Deck.pop();
    }
    //Process or map Inputs to Outputs
    
    //Display Outputs
    
    //Exit stage right!
    return 0;
}