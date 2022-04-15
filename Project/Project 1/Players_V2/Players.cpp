#include "Players.h"
#include <string>
#include <iostream>

Players::Players(std::string name) {
    this->name = name;
}

Players::~Players() {
    
}

void Players::init(Deck &deck) {
    this->drawDek.init(deck);
    this->pile.init(deck);
    this->hand.init(deck);
}

void Players::clear() {
    this->drawDek.clear();
    this->hand.clear();
    this->pile.clear();
}

void Players::draw() {
    this->hand.addTo(drawDek);
}

bool Players::isEmpty() {
    return drawDek.isEmpty();
}

bool Players::didWin() {
    return drawDek.isEmpty();
}

void Players::flip() {
    Card temp = this->pile.flip();
}

void Players::place(const Card &card) {
    this->hand.remove(card);
}

void Players::prntHnd() {
    hand.print();
}