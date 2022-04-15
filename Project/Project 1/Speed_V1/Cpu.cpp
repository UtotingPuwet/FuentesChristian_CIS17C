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

