#pragma once
#include <SFML/Graphics.hpp>
#include <Graphics/assetsManager.hpp>

#include <Objects/canvas.hpp>
#include <Objects/camera.hpp>
#include <Objects/brush.hpp>



class MainScene
{

    private:
        
        // Renderer object (Buffer content manipulator)
        sf::RenderWindow* renderer;
        
        // Background color
        sf::Color background;
        
        
        // Canvas object (drawable surface)
        Canvas canvas;
        
        // Brush object
        Brush brush;
        
        // Drawing camera
        Camera drawingCamera;
        
    
    public:
        
        // Default scene constructor
        MainScene() {};
        
        
        // Scene default methods
        void setup(sf::RenderWindow* _renderer, AssetsManager manager);
        void run(bool isFocused);
        void events(sf::Event& action);
        
};
