#pragma once
#include <SFML/Graphics.hpp>
#include <vector>

#include <Objects/layer.hpp>
#include <Objects/brush.hpp>


class Canvas
{
    
    private:
        
        // Renderer object
        sf::RenderWindow* renderer;

        
        // Canvas dimensions
        int width = 0;
        int height = 0;
        
        // Canvas layers
        int index;
        std::vector<Layer> layers;
    
    
    public:
        
        // Default canvas constructor
        Canvas() {};
        
        
        // Canvas constructor
        Canvas(sf::RenderWindow* _renderer): renderer(_renderer) {};
        
        // Create (or recreate) canvas environment
        void create(int width, int height);
        
        // Display canvas content
        void display();
        
        
        // Change current layer
        void currentLayer(int index, Brush& brush);
        
};
