#include "Table.h"

Table::Table(unsigned int rows,unsigned int cols){
    szRow=rows;
    szCol=cols;
    columns=new RowAray*[cols];
    for(int col=0;col<cols;col++){
        columns[col]=new RowAray(rows);
    }
}

Table::Table(const Table &a){
    szCol = a.getSzCol();
    szRow = a.getSzRow();
    
    columns = new RowAray*[szCol];
    for (int i = 0; i < szCol; i++) {
        columns[i] = new RowAray(szRow);
    }
    for (int i = 0; i < szRow; i++) {
        for (int j = 0; j < szCol; j++) {
            columns[j]->setData(i,a.getData(i,j));
        }
    }
    //Student to supply
    
}

Table::~Table(){
    for (int i = 0; i < szCol; i++) {
        delete columns[i];
    }
    delete []columns;
    //Student to supply
}

int Table::getData(int row,int col)const{
    int val = columns[col]->getData(row);
    //Student to supply
    return val;
    //done
}

void Table::setData(int row,int col,int val){
    columns[col]->setData(row,val);
    //Student to supply
    //done
}