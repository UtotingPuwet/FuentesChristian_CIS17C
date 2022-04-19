/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Speed.h
 * Author: UtotingPuwet
 *
 * Created on April 14, 2022, 7:25 PM
 */

#ifndef SPEED_H
#define SPEED_H
#include "Players.h"
#include "Deck.h"
#include "CntPile.h"
#include "Cpu.h"
#include <map>
#include <iterator>

class Speed {
    private:
        std::string name;
        CntPile center1, center2;
        Players *p1;
        Cpu *cpu;
        Deck deck;
        bool CpuWin = false;
        bool p1Win = false;
        
        void p1Menu(int);
        
        //Next version we will have a leader board :)
        std::multimap<std::string, int> ldrBord;
    public:
        Speed(std::string);
        ~Speed();
        void game();
};


#endif /* SPEED_H */

