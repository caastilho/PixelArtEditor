#pragma once
#include <SFML/Graphics.hpp>


class Camera
{
    
    private:
        
        // Camera custom view
        sf::View view;
        int viewWidth = 0;
        int viewHeight = 0;
        
        
        // Store zoom value
        float zoomValue = 1;
        
        // Store mouse state (pressed ou released)
        bool mouseState = false;
        
        // Last mouse position
        sf::Vector2i lastMousePosition;
    
    
    public:
        
        // Camera default constructor
        Camera() {};
        
        
        // Setup camera viewport
        void setup(int width, int height);
        
        // Center canvas object
        void centerCanvas(int width, int height);
        
        
        // Handle camera translations
        void translate(sf::Event& action, sf::RenderWindow* window, float factor);
        
        // Handle camera zoom
        void zoom(sf::Event& action, float factor);
        
        
        // Activate camera view
        void activate(sf::RenderWindow* renderer);
    
};

