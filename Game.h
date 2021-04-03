//
// Created by sr on 1/4/21.
//

#ifndef HELLO_GAME_H
#define HELLO_GAME_H


#include <vector>
#include "Entity.h"

class Game {
public:
    Game();
    void Update(sf::RenderWindow*, sf::Time);
private:
    std::vector<Entity*> entities;
};


#endif //HELLO_GAME_H
