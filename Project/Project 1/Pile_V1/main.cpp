/* 
 * File:   main.cpp
 * Author: Christian Fuentes
 * Created on 4/10/2022 8:00PM
 * Purpose:  Creating Pile V1
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
//Global Constants - No Global Variables

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set seed
    srand(static_cast<int>(time(NULL)));
    //Declare Variable Data Types and Constants
    int random = rand()%52;
    Card a;
    a.iniCard(random);
    CntPile pile(a);
    //Initialize Variables
    pile.place(a);
    //Process or map Inputs to Outputs
    pile.print();
    //Display Outputs
    
    //Exit stage right!
    return 0;
}