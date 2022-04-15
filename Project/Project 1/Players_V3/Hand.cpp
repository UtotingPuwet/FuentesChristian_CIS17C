#include "Hand.h"
#include "DrawCrd.h"
#include <iterator>
#include <iostream>

Hand::Hand() {
    
}

Hand::~Hand() {
    
}

void Hand::init(Deck& deck) {
    for (int i = 0; i < 5; i++) {
        hand.push_back(deck.draw());
    }
    
}

void Hand::clear() {
    std::list<Card> empty;
    std::swap(hand, empty);
}

void Hand::addTo(DrawCrd & drawDek) {
    hand.push_back(drawDek.draw());
}

void Hand::remove(const Card &a) {
    std::list<Card>::iterator it = hand.begin();
    
    while (*it != a) {
        it++;
    }
    if (*it != a) {
        std::cout << "Iterator pointer could not find card.\n";
    }
    else {
        hand.erase(it);
    }
}

void Hand::print() {
    std::list<Card>::iterator it = hand.begin();
    
    for (; it != hand.end(); it++) {
        std::cout << *it << "   ";
    }
    std::cout << '\n';
}

Card Hand::get(int index) {
    std::list<Card>::iterator it = hand.begin();
    
    for (int i = 0; i < index; i++) {
        it++;
    }
    return *it;
}
