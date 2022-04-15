#include "Deck.h"
#include <cstdlib>
#include <ctime>


Deck::Deck() {
    Card temp[52];
    
    for (int i = 0; i < 52; i++) {
        temp[i].iniCard(i);
    }
    for (int i = 0; i < 52; i++) {
        int random = rand()%52;
        Card temp2 = temp[i];
        temp[i] = temp[random];
        temp[random] = temp2;
        deck.push(temp[i]);
    }
    
}

Deck::~Deck() {
    
}

Card Deck::draw() {
    Card temp = deck.front();
    deck.pop();
    deck.push(temp);
    return temp;
}


