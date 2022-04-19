#include "Cpu.h"


Cpu::Cpu() {
    
}

Cpu::~Cpu() {
    
}

void Cpu::init(Deck& deck) {
    this->drawDek.init(deck);
    this->pile.init(deck);
    this->hand.init(deck);
}

Card Cpu::flip() {
    Card temp = pile.flip();
    return temp;
}

void Cpu::place(const Card &card) {
    this->hand.remove(card);
}

bool Cpu::didWin() {
    if (drawDek.isEmpty() && hand.getSize() == 0) {
        return true;
    }
    return false;
}

bool Cpu::isEmpty() {
    if (hand.getSize() == 0) return true;
    return false;
}

void Cpu::clear() {
    this->drawDek.clear();
    this->hand.clear();
    this->pile.clear();
}

void Cpu::draw() {
    if (drawDek.isEmpty()) {
        return;
    }
    else {
        this->hand.addTo(drawDek);
    }
}



bool Cpu::choose(CntPile &center1, CntPile &center2) {
    bool didPlac = false;
    for (int i = 0; i < hand.getSize(); i++) {
        if (hand.get(i).getVal() == center1.front() + 1 || hand.get(i).getVal() == center1.front() -1) {
            this->place(hand.get(i));
            center1.update(hand.get(i));
            this->draw();
            didPlac = true;
            return didPlac;
        }
        else if (hand.get(i).getVal() == center2.front() + 1 || hand.get(i).getVal() == center2.front() -1){
            this->place(hand.get(i));
            center2.update(hand.get(i));
            this->draw();
            didPlac = true;
            return didPlac;
        }
    }
    return didPlac;
}

