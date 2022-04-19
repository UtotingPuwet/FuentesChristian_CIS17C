/* 
 * File:   Menu.h
 * Author: UtotingPuwet
 *
 * Created on April 16, 2022, 1:30 PM
 */

#ifndef MENU_H
#define MENU_H
#include "Speed.h"

class Menu {
    private:
        std::string name;
        void opening();
        void play();
        void howTo();
        Speed *game;
    public:
        Menu();
        ~Menu();
    
};


#endif /* MENU_H */

