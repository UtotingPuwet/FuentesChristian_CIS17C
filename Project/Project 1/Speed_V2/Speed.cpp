#include "Speed.h"
#include <iostream>
#include <ctime>

Speed::Speed(std:: string name) {
    this->p1 = new Players(name);
    this->cpu = new Cpu();
    center1.init(deck.draw());
    center2.init(deck.draw());
    this->name = name;
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
        
        int timBeg = time(0);
        int timEnd = time(0);
        
        
        std::cin >> choice;
        timEnd = time(0);
        if (timEnd - timBeg > 10) {
            std::cout << "A little slow...\n";
            if (!cpu->choose(center1, center2)) {
                this->p1Menu(choice);
            }
        }
        else {
            this->p1Menu(choice);
        }
        
        
        std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"; 
        
        if (p1->isEmpty()) p1Win = true;
        if (cpu->isEmpty()) CpuWin = true;
    }
    
    if (p1Win == true) {
        std::cout << this->name << " is the winner!\n";
        //would be a leaderboard.. will be added in part 2 of project
        ldrBord.insert(std::pair<std::string, int> ("Player", 1));
    }
    else {
        std::cout << this->name << " lost!\n";
    }
}

void Speed::p1Menu(int choice) {
    switch (choice) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4: {
            Card temp = p1->choose(choice);
            int centChos;
            std::cout << "Which pile?\n";
            std::cin>>centChos;
            if (centChos == 1) {
                center1.update(temp);
            }
            else if (centChos == 2) {
                center2.update(temp);
            }
            break;
        }
        case 5: {
            center2.flipAdd(p1->flip());
            center1.flipAdd(cpu->flip());
            break;
        }
    }
}

