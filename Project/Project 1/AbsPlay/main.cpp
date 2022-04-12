/* 
 * File:   main.cpp
 * Author: Christian Fuentes
 * Created on 4/11/2022 3:11PM
 * Purpose:  Creating Player Hand
 */

//System Libraries
#include <iostream>
#include <queue>
#include <list>
#include <iterator>
using namespace std;

//User Libraries
#include "Deck.h"
#include "CntPile.h"
#include "Hand.h"
//Global Constants - No Global Variables

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set seed
    srand(static_cast<int>(time(NULL)));
    //Declare Variable Data Types and Constants
    Card a;
    a.iniCard(1);
    Card b;
    b.iniCard(2);
    Card c;
    c.iniCard(3);
    Card d;
    d.iniCard(4);
    Card e;
    e.iniCard(5);
    Hand hand(a,b,c,d,e);
    list<Card>::iterator it;
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    
    //Display Outputs
    hand.print();
    //Exit stage right!
    return 0;
}