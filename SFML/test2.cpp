#include <SFML/Graphics.hpp>

int main() {
    // SFML 3.x: VideoMode takes Vector2u
    sf::RenderWindow window(sf::VideoMode(sf::Vector2u(800, 600)), "Green circle with red dot");

    // Big green circle
    float radius = 120.f;
    sf::CircleShape circle(radius);
    circle.setFillColor(sf::Color::Green);
    circle.setOutlineThickness(0.f);
    // Center the circle in the window
    circle.setPosition(sf::Vector2f(
        (800.f - 2.f * radius) / 2.f,
        (600.f - 2.f * radius) / 2.f
    ));

    // Small red dot at the center
    float dotRadius = 6.f;
    sf::CircleShape dot(dotRadius);
    dot.setFillColor(sf::Color::Red);
    dot.setOutlineThickness(0.f);
    // Position dot at the center of the big circle
    sf::Vector2f circleCenter = circle.getPosition() + sf::Vector2f(radius, radius);
    dot.setPosition(circleCenter - sf::Vector2f(dotRadius, dotRadius));

    while (window.isOpen()) {
    while (const auto event = window.pollEvent()) {
        if (event->is<sf::Event::Closed>())
            window.close();
    }

    window.clear(sf::Color::Black);
    window.draw(circle);
    window.draw(dot);
    window.display();
    }

    return 0;
}