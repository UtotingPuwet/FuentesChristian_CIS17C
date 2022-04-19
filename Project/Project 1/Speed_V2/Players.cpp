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
    std::map<int, Card>::iterator it;
    map1.clear();
    if (drawDek.isEmpty()) {
        std::cout << "Draw Deck is empty.\n";
        for (int i = 0; i < drawDek.getSize(); i++) {
            map1.insert(std::pair <int, Card> (i, this->getCard(i)));
        }
    }
    else {
        this->hand.addTo(drawDek);
        for (int i = 0; i < 5; i++) {
            map1.insert(std::pair <int, Card> (i, this->getCard(i)));
        }
    }
}

bool Players::isEmpty() {
    if (hand.getSize() == 0) return true;
    return false;
}

bool Players::didWin() {
    if (drawDek.isEmpty() && hand.getSize() == 0) {
        return true;
    }
    return false;
}

Card Players::flip() {
    Card temp = this->pile.flip();
    return temp;
}

void Players::place(const Card &card) {
    this->hand.remove(card);
}

void Players::prntHnd() {
    std::map<int, Card>::iterator it = map1.begin();
    
    for (; it != map1.end(); it++) {
        std::cout << it->first << ").  " << it->second << '\t';
    }
    std::cout << " 5.) Flip from pile.";
    std::cout << '\n';
    
    
    
    
    
}

Card Players::getCard(int index) {
    return hand.get(index);
}

Card Players::choose(int index) {
    Card choice = hand.get(index);
    
    this->place(choice);
    
    if (!drawDek.isEmpty()) this->draw();
    
    
    return choice;
    
}