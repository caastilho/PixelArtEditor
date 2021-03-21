#include <Objects/canvas.hpp>


// Create (or recreate) canvas environment
void Canvas::create(int _width, int _height)
{
    
    width  = _width;
    height = _height;
    
    // Create default canvas layer
    layers.clear();
    Layer layer(width, height, sf::Color(255, 255, 255));
    layers.push_back(layer);
    
}

// Display canvas content
void Canvas::display()
{
    
    for (int i = layers.size() - 1; i >= 0; i--)
    {
        layers[i].display(renderer);
    }
    
}

// Change current layer
void Canvas::currentLayer(int _index, Brush& brush)
{
    
    index = _index;
    brush.setLayer(&layers[index].getPixels());
    
}
