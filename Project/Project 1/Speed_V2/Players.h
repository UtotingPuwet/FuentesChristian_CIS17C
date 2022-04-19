/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Players.h
 * Author: UtotingPuwet
 *
 * Created on April 12, 2022, 5:32 PM
 */

#ifndef PLAYERS_H
#define PLAYERS_H
#include "AbsPlay.h"
#include "Deck.h"
#include "DrawCrd.h"
#include "Hand.h"
#include "FliPile.h"
#include <map>

class Players : public AbsPlay{
    private:
        DrawCrd drawDek;
        Hand hand;
        FliPile pile;
        std::string name;
        std::map<int, Card> map1;
    public:
        Players(std::string);
        ~Players();
        void init(Deck &);
        void clear();
        void draw();
        void place(const Card &);
        Card flip();
        bool didWin();
        bool isEmpty();
        void prntHnd();
        Card getCard(int);
        Card choose(int);
        std::string getName() {return this->name;};
        
};


#endif /* PLAYERS_H */

