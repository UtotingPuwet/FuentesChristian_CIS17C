/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FliPile.h
 * Author: UtotingPuwet
 *
 * Created on April 12, 2022, 11:10 PM
 */

#ifndef FLIPILE_H
#define FLIPILE_H
#include "Deck.h"
#include "Card.h"
#include <queue>

class FliPile : private Deck{
    private:
        std::queue<Card> fliPile;
    public:
        FliPile();
        ~FliPile();
        void init(Deck &);
        Card flip();
        void clear();
};


#endif /* FLIPILE_H */

