/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RowAray.h
 * Author: UtotingPuwet
 *
 * Created on March 28, 2022, 8:34 PM
 */

#ifndef ROWARAY_H
#define ROWARAY_H
#include "AbsRow.h"

class RowAray:public AbsRow{
    public:
        RowAray(unsigned int);
        virtual ~RowAray();
        int mrkRand(int);
        int getSize()const{return size;}
        int getData(int i)const{
            if(i>=0&&i<size)return rowData[i];
            else return 0;}
        void setData(int,int);
};

#endif /* ROWARAY_H */

