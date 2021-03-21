#pragma once
#include <SFML/Graphics.hpp>
#include <vector>


struct Layer
{
    
    private:
        
        // Canvas layer content (pixels data)
        sf::Image pixels;
        int width = 0;
        int height = 0;


    public:
        
        // Layer constructor
        Layer() {};
        Layer(int width, int height);
        Layer(int width, int height, sf::Color background);
        
        
        // Return layer content
        sf::Image& getPixels();
        
        
        // Display layer content
        void display(sf::RenderWindow* renderer);
        
};

