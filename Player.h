//
// Created by sr on 3/4/21.
//

#ifndef HELLO_PLAYER_H
#define HELLO_PLAYER_H


#include <SFML/Graphics/Sprite.hpp>
#include "Entity.h"

class Player : public Entity {

public:
    Player();
    void Update(sf::RenderWindow *window, sf::Time elapsed);
private:
    sf::Sprite sprite;
    sf::Texture texture;
};


#endif //HELLO_PLAYER_H
