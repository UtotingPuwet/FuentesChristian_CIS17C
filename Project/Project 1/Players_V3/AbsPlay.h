/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AbsPlay.h
 * Author: UtotingPuwet
 *
 * Created on April 12, 2022, 2:53 PM
 */

#ifndef ABSPLAY_H
#define ABSPLAY_H
#include "Card.h"
#include "Deck.h"


class AbsPlay {
    public:
        virtual void init(Deck &) = 0;
        virtual void clear() = 0;
        virtual void draw() = 0;
        virtual void place(const Card &) = 0;
        virtual void flip() = 0;
        virtual bool didWin() = 0;
        virtual bool isEmpty() = 0;
        
    
};


#endif /* ABSPLAY_H */

