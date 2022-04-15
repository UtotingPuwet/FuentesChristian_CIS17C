/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Hand.h
 * Author: UtotingPuwet
 *
 * Created on April 11, 2022, 9:10 PM
 */

#ifndef HAND_H
#define HAND_H
#include "Card.h"
#include "Deck.h"
#include "DrawCrd.h"
#include <list>


class Hand {
    private:
        std::list<Card> hand;
    public:
        Hand();
        ~Hand();
        void init(Deck &);
        void remove(const Card &);
        void addTo(DrawCrd &);
        void print();
        void clear();
        Card get(int);
        int getSize() {return hand.size();};
};

#endif /* HAND_H */

