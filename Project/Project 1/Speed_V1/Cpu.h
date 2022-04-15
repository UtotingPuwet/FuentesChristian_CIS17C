/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cpu.h
 * Author: UtotingPuwet
 *
 * Created on April 14, 2022, 10:08 PM
 */

#ifndef CPU_H
#define CPU_H
#include "Deck.h"
#include "DrawCrd.h"
#include "Hand.h"
#include "FliPile.h"

class Cpu {
    private:
        DrawCrd drawDek;
        Hand hand;
        FliPile pile;
    public:
        Cpu();
        ~Cpu();
        void init(Deck &);
        Card flip();
        void place(const Card &);
        bool didWin();
        bool isEmpty();
        void clear();
        
        //how the AI will choose their decision: to flip pile, place a card, which card, etc
        void choose();
        
};


#endif /* CPU_H */

