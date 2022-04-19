
#include "Menu.h"
#include <iostream>

Menu::Menu() {
    short choice;
    std::cout << "Hey! Welcome to Christian's Card Game!\n";
    std::cout << "This game goes by the name of Speed but it has other names as well.\n";
    std::cout << "Before we get started, what's your name?\n";
    std::cin >> this->name;
    std::cout << "Nice to meet you " << this->name << '\n';
    do {
        this->opening();
        std::cin >> choice;
        switch (choice) {
            case 1: this->play(); break;
            case 2: this->howTo(); break;
            case 3: return; break;
        }
    } while (choice != 1);
    
}

Menu::~Menu() {
    
}

void Menu::opening() {
    std::cout << "Please enter the corresponding number to navigate the main menu.\n";
    std::cout << "Press 1 to play the game.\nPress 2 to see the rules and learn how to play.\n";
    std::cout << "Press 3 to exit this program.\n";
}

void Menu::play() {
    game = new Speed(this->name);
    game->game();
    delete game;
    std:: cout << '\n' << '\n' << '\n' << "Thank you for playing!.\n";
}

void Menu::howTo() {
    short choice;
    std::cout << "Objective: Player to run out of cards first is the winner.\n";
    std::cout << " - Both players are given 5 cards each and a draw pile of 15.\n";
    std::cout << " - There are two piles in the center, each player will add cards to the pile.\n";
    std::cout << " - The cards at the center must be 1 higher or lower than the previous and King and Ace started the loop over again.\n";
    std::cout << " - If neither player can play a card then they can flip a card from the pile that is next to the center piles to continue.\n";
    std::cout << "Those are the basics of the game and now for some information on how this game runs as its a program...\n";
    std::cout << "The player will automatically draw after placing, and";
    std::cout << "if the player takes longer than 10s to play a card the CPU will see if it can place a card and if not it will wait for player to place or flip from center pile.\n";
    std::cout << "Type 1 if you wish to go back to main menu.\n";
    
    
    //doesn't matter what the user inputs as I'm just keeping this here so user can read the rule without returning to main menu
    std::cin >> choice;
    return;
}
