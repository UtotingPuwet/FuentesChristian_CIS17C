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

class Deck {
    private:
        std::queue<Card> deck;
    public:
        Deck();
        ~Deck();
        Card draw();
        void shuffle();
};


#endif /* DECK_H */

