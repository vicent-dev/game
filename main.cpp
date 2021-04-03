#include <SFML/Graphics.hpp>
#include "Entity.h"
#include "Game.h"

int main() {
    sf::Clock clock;
    auto *window = new sf::RenderWindow(sf::VideoMode(600, 400), "no title today :(");

    auto game = Game();

    while (window->isOpen()) {
        sf::Time elapsed = clock.restart();

        sf::Event Event{};

        while (window->pollEvent(Event)) {
            if (Event.type == sf::Event::Closed) {
                window->close();
                delete window;
            }
        }

        game.Update(window, elapsed);
        window->display();
    }

    return 1;
}

