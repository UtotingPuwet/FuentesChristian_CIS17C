/* 
 * File:   main.cpp
 * Author: Christian Fuentes
 * Created on 
 * Purpose:  
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables

//Function Prototypes
void getF(char [], float &, float &);
float getC(char []);
float getFC(char[], char[]);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    ifstream in;
    int n;
    //Initialize Variables
    char fn_f[] = "f.dat"; //file name for Fahrenheit
    char fn_c[] = "c.dat"; //file name for Celsius + errors
    
    //Get number of rows
    in.open(fn_f);
    in>>n;
    in.close();
    
    //Process or map Inputs to Outputs
    float fahren;                       //Fahrenheit
    float fahren2;                      //Fahrenheit^2
    getF(fn_f, fahren, fahren2);
    float cel = getC(fn_c);             //Celsius + errors
    float fahcel = getFC(fn_f,fn_c);          //Fahrenheit * Celsius
    
    float slope = (cel*fahren-n*fahcel)/(fahren*fahren-n*fahren2);
    float Yint = (cel-slope*fahren)/n;
    //Display Outputs
    cout << setprecision(2) << fixed;
    cout << "Might be slightly off due to using floats or other reasons.\n";
    cout << "Slope      : " << slope << '\n';
    cout << "Y-Intercept: " << Yint;
    //Exit stage right!
    return 0;
}

void getF (char fn_f[], float &sum, float &sum2) {
    ifstream in;
    in.open(fn_f);
    
    sum = 0;
    sum2 = 0;
    int rows;
    in>>rows;
    rows = static_cast<int>(rows);
    
    float *fahren = new float [rows];
    
    for (int i = 0; i < rows; i++) {
        in>>fahren[i];
        sum += fahren[i];
        sum2 += fahren[i] * fahren[i];
    }
    in.close();
    delete []fahren;
}

float getC (char fn_c[]) {
    ifstream in;
    in.open(fn_c);
    
    float sum = 0;
    int rows;
    in>>rows;
    rows = static_cast<int>(rows*2);
    
    float *cel = new float [rows];
    
    for (int i = 0; i < rows; i++) {
        in>>cel[i];
        sum += cel[i];
    }
    in.close();
    delete []cel;
    return sum;
}

float getFC(char fn_f[], char fn_c[]) {
    ifstream in;
    float FCsum = 0;
    int rows;
    
    in.open(fn_f);
    in>>rows;
    
    float *fah = new float [rows];
    for (int i = 0; i < rows; i++) {
        in>>fah[i];
    }
    in.close();
    
    in.open(fn_c);
    in>>rows;
    
    float *cel = new float [rows];
    for (int i = 0; i < rows; i++) {
        float error;
        in>>cel[i];
        in>>error;
        cel[i] += error;
    }
    
    for (int i = 0; i < rows; i++) {
        FCsum += cel[i] * fah[i];
    }
    delete []fah;
    delete []cel;
    return FCsum;
}