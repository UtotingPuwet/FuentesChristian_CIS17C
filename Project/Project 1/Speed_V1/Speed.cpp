#include "Speed.h"
#include <iostream>

Speed::Speed(std:: string name) {
    this->p1 = new Players(name);
    this->cpu = new Cpu();
    center1.init(deck.draw());
    center2.init(deck.draw());
}

Speed::~Speed() {

}

void Speed::game() {
    int choice;
    this->p1->init(deck);
    this->cpu->init(deck);
    
    while(!this->p1Win && !this->CpuWin) {
        std::cout << "Center  pile 1: ";
        center1.print();
        std::cout << '\t' << '\t' << "Center pile 2: ";
        center2.print();
        std::cout << '\n';
        p1->prntHnd();
        std::cout << '\n';
        std::cin>>choice;
        switch (choice) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4: {
                Card temp = p1->choose(choice);
                int centChos;
                std::cin>>centChos;
                if (centChos == 1) {
                    center1.update(temp);
                }
                else if (centChos == 2) {
                    center2.update(temp);
                }
                break;
            }
            case 5: p1->draw(); break;
            case 6: {
                center2.flipAdd(p1->flip());
                center1.flipAdd(cpu->flip());
                break;
            }
        }
        p1->prntHnd();
        std::cout << '\n';
        
        p1Win = true;
    }
    
    
}