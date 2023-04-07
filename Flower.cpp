#include "Flower.h"

Flower::Flower(sf::RenderWindow* window)
{
	this->window = window;
}

void Flower::draw()
{
	
    sf::CircleShape center(50.f);
    center.setFillColor(sf::Color::Yellow);
    center.setPosition(230.f, 170.f);

    sf::CircleShape petal1(40.f);
    petal1.setFillColor(sf::Color::White);
    petal1.setPosition(180.f, 180.f);

    sf::CircleShape petal2(40.f);
    petal2.setFillColor(sf::Color::White);
    petal2.setPosition(240.f, 125.f);

    sf::CircleShape petal3(40.f);
    petal3.setFillColor(sf::Color::White);
    petal3.setPosition(300.f, 175.f);


    sf::CircleShape petal8(40.f);
    petal8.setFillColor(sf::Color::White);
    petal8.setPosition(240.f, 230.f);

   
    sf::RectangleShape grass(sf::Vector2f(120.f, 50.f));
    grass.setFillColor(sf::Color::Green);
    grass.setSize(sf::Vector2f(800.f, 200.f));
    grass.setPosition(0.f, 440.f);

    sf::RectangleShape sky(sf::Vector2f(120.f, 50.f));
    sky.setFillColor(sf::Color::Blue);
    sky.setSize(sf::Vector2f(800.f, 800.f));
    sky.setPosition(0.f, 0.f);

    sf::RectangleShape line(sf::Vector2f(120.f, 50.f));
    line.setFillColor(sf::Color(100, 250, 50));
    line.setSize(sf::Vector2f(20.f, 200.f));
    line.setPosition(270.f, 250.f);
    
    
    window->draw(sky);
    window->draw(line);
    window->draw(grass);
    window->draw(petal1);
    window->draw(petal2);
    window->draw(petal3);
    window->draw(petal8);
    window->draw(center);
   
}
   

