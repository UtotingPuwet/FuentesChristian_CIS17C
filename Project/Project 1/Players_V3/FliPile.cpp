#include "FliPile.h"

FliPile::FliPile() {
    
}

FliPile::~FliPile() {
    
}

void FliPile::init(Deck &a) {
    Card temp;
    for (int i = 0; i < 10; i++) {
        temp = a.draw();
        fliPile.push(temp);
    }
}

void FliPile::clear() {
    std::queue<Card> empty;
    std::swap(fliPile, empty);
}

Card FliPile::flip() {
    Card temp = fliPile.front();
    fliPile.pop();
    fliPile.push(temp);
    return temp;
}