#include "Hand.h"
#include <iterator>
#include <iostream>

Hand::Hand(const Card a, const Card b, const Card c, const Card d, const Card e) {
    hand.push_back(a);
    hand.push_back(b);
    hand.push_back(c);
    hand.push_back(d);
    hand.push_back(e);
}

Hand::~Hand() {
    
}

void Hand::addTo(const Card a) {
    hand.push_back(a);
}

void Hand::remove(const Card a) {
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