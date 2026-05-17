#include <iostream>
#include <format>
#include "template_lib.h"
#include "template_namespace.h"

#include "sfml/Graphics.hpp"

int main() {

    // Create the main window (width, height, title)
    sf::RenderWindow window(sf::VideoMode({ 200, 200 }), "SFML Works!");

    // Create a graphical circle to fill with green color
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        while (const std::optional event = window.pollEvent())
        {
            // Close window: exit
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        // Clear screen, draw the shape, and display it
        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;

	return 0;
}