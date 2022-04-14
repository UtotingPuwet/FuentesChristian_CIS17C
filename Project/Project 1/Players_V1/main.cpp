/* 
 * File:   main.cpp
 * Author: Christian Fuentes
 * Created on 4/12/2022 10:00PM
 * Purpose:  Creating Players + Draw Decks + Flip Piles
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
#include "Deck.h"
#include "CntPile.h"
#include "Hand.h"
#include "DrawCrd.h"
#include "FliPile.h"
//Global Constants - No Global Variables

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set seed
    srand(static_cast<int>(time(NULL)));
    //Declare Variable Data Types and Constants
    Deck deck;
    DrawCrd draw;
    Card temp;
    FliPile flip;
    //Initialize Variables
    draw.init(deck);
    flip.init(deck);
    //Process or map Inputs to Outputs
    temp = draw.draw();
    cout << temp << '\n';
    temp = flip.flip();
    cout << temp << '\n';
    draw.clear();
    flip.clear();
    //Display Outputs
    
    //Exit stage right!
    return 0;
}