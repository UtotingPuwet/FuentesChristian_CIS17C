/* 
 * Author: Christian Fuentes
 * Purpose:  Abstraction, Operator Overloading, 
 *           Copy Construction and Polymorphism
 */

//User Libraries
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
#include "PlusTab.h"
#include "AbsRow.h"


//Global Constants

//Function Prototype
void prntTab(const Table &);

//Execution Begins Here!
int main(int argc, char** argv) {
   //Initialize the random seed
   srand(static_cast<unsigned int>(time(0)));
   
   //Declare Variables
   int rows,cols;
   
   //Initialize Variables
   cout<<"Input the Rows and Cols"<<endl;
   cout<<"For a 2-D Array composed of 1-D Rows"<<endl;
   cout<<"Created from Abstract Classes"<<endl;
   cout<<"Inherited to include Overloaded Operators"<<endl;
   cin>>rows>>cols;
   
   //Test out the Tables
   PlusTab tab1(rows,cols);
   PlusTab tab2(tab1);
   PlusTab tab3=tab1+tab2;
   //Print the tables
   cout<<"Abstracted and Polymorphic Print Table 1 size is [row,col] = ["
           <<rows<<","<<cols<<"]";
   prntTab(tab1);
   cout<<"Copy Constructed Table 2 size is [row,col] = ["
           <<rows<<","<<cols<<"]";
   prntTab(tab2);
   cout<<"Operator Overloaded Table 3 size is [row,col] = ["
           <<rows<<","<<cols<<"]";
   prntTab(tab3);
   //Exit Stage Right
   return 0;
}

void prntTab(const Table &a){
    cout<<endl;
    for(int row=0;row<a.getSzRow();row++){
        for(int col=0;col<a.getSzCol();col++){
            cout<<setw(4)<<a.getData(row,col);
        }
        cout<<endl;
    }
    cout<<endl;
}