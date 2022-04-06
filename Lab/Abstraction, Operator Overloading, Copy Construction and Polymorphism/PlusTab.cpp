#include "PlusTab.h"

PlusTab PlusTab::operator+(const PlusTab &a){
    PlusTab b(a.getSzRow(),a.getSzCol());
    for (int i = 0; i < szRow; i++) {
        for (int j = 0; j < szCol; j++) {
            int val = getData(i,j) + a.getData(i,j);
            b.columns[j]->setData(i,val);
        }
    }
    return b;
    //Student to supply
}