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
 * 
 * on April 10,2022 11:48 PM, added a print function to card.
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
    void print();
    
    //Friend so that it can access private parts but also operator overload the cout objec
    friend std::ostream &operator<<(std::ostream &os, const Card &a);
    
    bool operator == (const Card& a) const {return this->val == a.val && this->suit == a.suit;};
    bool operator != (const Card& a) const {return !operator==(a);};
    
    
    friend int operator+(const Card & a, int i) {
        return i + a.val;
    }
    friend int operator-(const Card & a, int i) {
        return i - a.val;
    }
    
};

//Must be outside of class to implement operator overloading
#endif /* CARD_H */

