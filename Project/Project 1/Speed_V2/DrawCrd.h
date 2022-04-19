/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DrawCrd.h
 * Author: UtotingPuwet
 *
 * Created on April 12, 2022, 9:37 PM
 */

#ifndef DRAWCRD_H
#define DRAWCRD_H
#include "Deck.h"
#include "Card.h"
#include <queue>

class DrawCrd : private Deck{
    private:
        std::queue<Card> drawCrd; //basically another deck just more personal to the player where it will only contain the 15 drawing cards
    public:
        DrawCrd();
        ~DrawCrd();
        void init(Deck &);
        Card draw();
        void clear();
        bool isEmpty();
        int getSize() {return drawCrd.size();};
};


#endif /* DRAWCRD_H */

