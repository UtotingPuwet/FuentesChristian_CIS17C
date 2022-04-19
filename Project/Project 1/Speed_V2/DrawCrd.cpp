#include "DrawCrd.h"

DrawCrd::DrawCrd() {
    
}

DrawCrd::~DrawCrd() {
    
}

void DrawCrd::init(Deck &a) {
    Card temp;
    for (int i = 0; i < 15; i++) {
        temp = a.draw();
        drawCrd.push(temp);
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

bool DrawCrd::isEmpty() {
    return drawCrd.empty();
}