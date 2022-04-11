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
    CntPile(Card);
    ~CntPile();
    void place(Card);
    void clear();
    void print();
    void init(Card);
};


#endif /* CNTPILE_H */

