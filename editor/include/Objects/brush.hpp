#pragma once
#include <SFML/Graphics.hpp>
#include <Objects/layer.hpp>


/* Brush types:
    0 -> "Normal"  translate camera
    1 -> "Eraser"  delete layer content
    1 -> "Pen"     simple square brush
    2 -> "Pencil"  simple circle shape brush
*/

class Brush
{
    
    private:
        
        // Brush configuration
        int state = 2;
        int brushSize = 1;
        sf::Color brushColor;
        
        // Current layer content
        sf::Image *pixels;
        
        
    
    public:
        
        // Brush default constructor
        Brush() {};
        
        
        // Set brush color
        void setBrushColor(sf::Color color);
        
        
        // Set layer content
        void setLayer(sf::Image* pixels);
        
        // Edit layer content
        void editLayer(bool isFocused, sf::RenderWindow* renderer);
        
        // Return whether the current brush selected moves the camera
        bool isMovable();
    
};

