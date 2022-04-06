/* 
 * File:   main.cpp
 * Author: Christian Fuentes
 * Created on 
 * Purpose:  
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants - No Global Variables

//Function Prototypes
int *filArry(const int);
int *filIndx(const int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Set seed
    srand(static_cast<int>(time(NULL)));
    //Declare Variable Data Types and Constants
    int *indx;
    int *array;
    const int SIZE = 20;
    //Initialize Variables
    indx = filIndx(SIZE);
    array = filArry(SIZE);
    //Process or map Inputs to Outputs
    for (int i = 0; i < SIZE; i++) {
        cout << indx[i] << ' ';
    }
    //Display Outputs
    delete []indx;
    delete []array;
    //Exit stage right!
    return 0;
}

int *filArry(const int SIZE) {
    int *a = new int [SIZE];
    for (int i = 0; i < SIZE; i++) {
        int num = rand()%50;
        a[i] = num;
    }
    return a;
}

int *filIndx(const int SIZE) {
    int *a = new int [SIZE];
    for (int i = 0; i < SIZE; i++) {
        a[i] = i;
    }
    return a;
}

