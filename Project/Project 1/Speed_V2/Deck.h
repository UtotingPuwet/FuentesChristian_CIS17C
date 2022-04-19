/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Deck.h
 * Author: UtotingPuwet
 *
 * Created on April 10, 2022, 6:35 PM
 */

#ifndef DECK_H
#define DECK_H
#include "Card.h"
#include <queue>

//the normal 52 cards that will be dealt correctly to each player.
class Deck {
    private:
        std::queue<Card> deck;
    public:
        Deck();
        virtual ~Deck();
        virtual Card draw();
        virtual int getSize() {return deck.size();};
        
};


#endif /* DECK_H */

