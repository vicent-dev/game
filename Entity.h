//
// Created by sr on 1/4/21.
//

#ifndef HELLO_ENTITY_H
#define HELLO_ENTITY_H


#include <SFML/System/Time.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

class Entity {
public:
    virtual void Update(sf::RenderWindow *window, sf::Time elapsed) {}
};


#endif //HELLO_ENTITY_H
