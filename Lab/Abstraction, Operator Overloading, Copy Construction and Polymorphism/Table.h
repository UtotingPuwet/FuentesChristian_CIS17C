/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Table.h
 * Author: UtotingPuwet
 *
 * Created on March 28, 2022, 8:35 PM
 */

#ifndef TABLE_H
#define TABLE_H
#include "AbsTabl.h"

class Table:public AbsTabl{
    public:
        Table(unsigned int,unsigned int);
        Table(const Table &);
        virtual ~Table();
        int getSzRow()const {return szRow;}
        int getSzCol()const {return szCol;}
        int getData(int,int)const;
        void setData(int,int,int);
};

#endif /* TABLE_H */

