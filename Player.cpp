//
// Created by sr on 3/4/21.
//

#include <SFML/Graphics/Texture.hpp>
#include "Player.h"

Player::Player() {
    if(!this->texture.loadFromFile("../assets/player.png")) {
        throw;
    }

    this->sprite.setTexture(this->texture);
    this->sprite.setPosition(100.f, 200.f);
}

void Player::Update(sf::RenderWindow *window, sf::Time elapsed) {
    Entity::Update(window, elapsed);
    window->draw(this->sprite);
}
