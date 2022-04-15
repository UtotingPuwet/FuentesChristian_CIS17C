#include "Players.h"
#include <string>
#include <iostream>
#include <map>
#include <iterator>

Players::Players(std::string name) {
    this->name = name;
}

Players::~Players() {
    
}

void Players::init(Deck &deck) {
    this->drawDek.init(deck);
    this->pile.init(deck);
    this->hand.init(deck);
    
    std::map<int, Card>::iterator it;
    for (int i = 0; i < 5; i++) {
        map1.insert(std::pair <int, Card> (i, this->getCard(i)));
    }
    
    
}

void Players::clear() {
    this->drawDek.clear();
    this->hand.clear();
    this->pile.clear();
    this->map1.clear();
}

void Players::draw() {
    if (drawDek.isEmpty()) {
        std::cout << "Draw Deck is empty.\n";
    }
    else {
        this->hand.addTo(drawDek);
    }
    
    std::map<int, Card>::iterator it;
    map1.clear();
    for (int i = 0; i < 5; i++) {
        map1.insert(std::pair <int, Card> (i, this->getCard(i)));
    }
    //map1.insert(std::pair<int, Card>(5, this->getCard(4)));
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
    std::map<int, Card>::iterator it = map1.begin();
    
    for (; it != map1.end(); it++) {
        std::cout << it->first << ").  " << it->second << '\t';
    }
    std::cout << '\n';
    
    
    
    
    
}

Card Players::getCard(int index) {
    return hand.get(index);
}

void Players::choose(int index) {
    Card choice = hand.get(index);
    
    
    this->place(choice);
}