#include <Objects/layer.hpp>


// Layer constructors
Layer::Layer(int _width, int _height)
{
    
    width = _width;
    height = _height;
    
    // Create transparent layer
    pixels.create(width, height, sf::Color(0, 0, 0, 0));
    
}

Layer::Layer(int _width, int _height, sf::Color background)
{
    
    width = _width;
    height = _height;
    
    // Create colored layer
    pixels.create(width, height, background);
    
}


// Return layer content
sf::Image& Layer::getPixels()
{
    return pixels;
}


// Display layer content
void Layer::display(sf::RenderWindow* renderer)
{

    sf::Texture texture;
    sf::Sprite sprite;
    texture.loadFromImage(pixels);
    sprite.setTexture(texture);
    
    renderer->draw(sprite);
    
}
