//
// Created by sr on 1/4/21.
//

#include <SFML/System/Time.hpp>
#include <SFML/Graphics/Texture.hpp>
#include "Game.h"
#include "Player.h"

Game::Game() {
    this->entities.push_back(new Player());
}

void Game::Update(sf::RenderWindow *window, sf::Time elapsed) {
    for (auto &entity : this->entities) {
        entity->Update(window, elapsed);
    }
}

