#include "CntPile.h"
#include <iostream>

CntPile::CntPile(Card a) {
    pile.push(a);
}

CntPile::~CntPile() {
    
}

void CntPile::place(Card a) {
    Card b = pile.top();
    if (a.getVal() == b.getVal() + 1 || a.getVal() == b.getVal() - 1) {
        pile.push(a);
    }
    else {
        std::cout << "Unable to place card.. invalid card...\n";
    }
}

void CntPile::clear() {
    while (!pile.empty()) {
        pile.pop();
    }
}

void CntPile::print() {
    Card temp = pile.top();
    temp.print();
}

void CntPile::init(Card a) {
    if (pile.empty()) {
        pile.push(a);
    }
}