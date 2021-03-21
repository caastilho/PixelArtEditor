#include <Objects/brush.hpp>
#include <iostream>


// Set brush color
void Brush::setBrushColor(sf::Color color)
{

    brushColor = color;
    
}


// Set layer content
void Brush::setLayer(sf::Image* _pixels)
{

    pixels = _pixels;
    
}

// Edit layer content
void Brush::editLayer(bool isFocused, sf::RenderWindow* renderer)
{
    
    if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && isFocused && state == 2)
    {
        sf::Vector2f position = renderer->mapPixelToCoords(sf::Mouse::getPosition(*renderer));
        pixels->setPixel(position.x, position.y, brushColor);
    }
    
}

// Return whether the current brush selected moves the camera
bool Brush::isMovable()
{
    return state == 0;
}
