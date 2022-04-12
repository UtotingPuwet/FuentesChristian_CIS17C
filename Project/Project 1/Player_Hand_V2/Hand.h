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
#include <list>


class Hand {
    private:
        std::list<Card> hand;
    public:
        Hand(const Card,const Card,const Card, const Card, const Card);
        ~Hand();
        void remove(const Card);
        void addTo(const Card);
        void print();
};

#endif /* HAND_H */

