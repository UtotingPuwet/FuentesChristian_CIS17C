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
//Global Constants - No Global Variables

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set seed
    srand(static_cast<int>(time(NULL)));
    //Declare Variable Data Types and Constants
    list<Card> test;
    list<Card>::iterator it;
    Card a[10];
    
    //Initialize Variables
    for (int i = 0; i < 10; i++) {
        a[i].iniCard(i);
        test.push_front(a[i]);
    }
    //Process or map Inputs to Outputs
    for (it = test.begin(); it != test.end(); it++) {
        cout << *it;
    }
    //Display Outputs
    
    //Exit stage right!
    return 0;
}