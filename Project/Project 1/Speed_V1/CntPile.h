/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CntPile.h
 * Author: UtotingPuwet
 *
 * Created on April 10, 2022, 8:01 PM
 */

#ifndef CNTPILE_H
#define CNTPILE_H
#include <stack>
#include "Card.h"

//Center pile cards
class CntPile {
private:
    std::stack<Card> pile;
public:
    CntPile();
    ~CntPile();
    void update(Card);      //placing a card
    void clear();
    void print();
    void init(Card);
    Card front();
    void flipAdd(Card);     //putting a flipped card to the top of center
    int topVal();
};


#endif /* CNTPILE_H */

