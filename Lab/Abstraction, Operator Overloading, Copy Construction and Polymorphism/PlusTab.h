/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PlusTab.h
 * Author: UtotingPuwet
 *
 * Created on March 28, 2022, 8:35 PM
 */

#ifndef PLUSTAB_H
#define PLUSTAB_H
#include "Table.h"

class PlusTab:public Table{
    public:
        PlusTab(unsigned int r,unsigned int c):Table(r,c){};
        PlusTab operator+(const PlusTab &);
};

#endif /* PLUSTAB_H */

