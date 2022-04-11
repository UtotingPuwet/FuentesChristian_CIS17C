/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Card.h
 * Author: UtotingPuwet
 *
 * Created on April 10, 2022, 2:47 AM
 */

#ifndef CARD_H
#define CARD_H
#include <string>

class Card {
private:
    int val;            //numerical value of each card
    std::string face;   //jack queen king
    std::string suit;   //Club, hearts, diamonds, spades
    
    std::string setFace(int);
    std::string setSuit(int);
    int setVal(int);
    
    
public:
    Card();
    void iniCard(int);
    std::string getFace() {return face;}
    std::string getSuit() {return suit;}
    int getVal() {return val;}
};

#endif /* CARD_H */

