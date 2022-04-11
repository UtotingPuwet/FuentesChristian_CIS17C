#include "Card.h"
#include <string>
#include <iostream>

Card::Card() {
    
}


void Card::iniCard(int n) {
    val = setVal(n);
    face = setFace(n);
    suit = setSuit(n);
}

std::string Card::setFace(int n) {
    switch (n%4) {
        case 0: return "Hearts";break;
        case 1: return "Diamonds";break;
        case 2: return "Spades";break;
        case 3: return "Clubs";break;
    }
    return 0;
}

std::string Card::setSuit(int n) {
    if ((n%13)+1 > 10) {
        switch((n%13)+1) {
            case 11: return "Jack";break;
            case 12: return "Queen";break;
            case 13: return "King";break;
        }
    }
    else if ((n%13)+1 == 1) {
        return "Ace";
    }
    else {
        return std::to_string((n%13)+1);
    }
    return 0;
}

int Card::setVal (int n) {
    if ((n%13)+1 > 10) {
        return 10;
    }
    return (n%13)+1;
}

void Card::print() {
    std::cout << suit << " of " << face << '\n';
}