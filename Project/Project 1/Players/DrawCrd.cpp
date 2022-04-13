#include "DrawCrd.h"

DrawCrd::DrawCrd() {
    
}

DrawCrd::~DrawCrd() {
    
}

void DrawCrd::init(const Deck &a) {
    for (int i = 0; i < 15; i++) {
        drawCrd.push(a.draw());
    }
}

void DrawCrd::clear() {
    std::queue<Card> empty;
    std::swap(drawCrd, empty);
}

Card DrawCrd::draw() {
    Card temp = drawCrd.front();
    drawCrd.pop();
    return temp;
}