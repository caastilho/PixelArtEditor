#include <Objects/camera.hpp>
#include <iostream>


// Setup camera viewport
void Camera::setup(int width, int height)
{
    
    view.setSize(width, height);
    viewWidth = width;
    viewHeight = height;
    
}

// Move camera position
void Camera::centerCanvas(int width, int height)
{
    
    // Set view center
    view.setCenter(width / 2, height / 2);

    // Get zoom value
    float zoom_width = (float)(width + 10)/ (float)viewWidth; 
    float zoom_height = (float)(height + 10) / (float)viewHeight;
    
    // Set zoom value
    view.zoom(std::max(zoom_width, zoom_height));
    
}



// Handle camera translations
void Camera::translate(sf::Event& action, sf::RenderWindow* renderer, float factor)
{
    
    // Update mouse last position
    lastMousePosition = sf::Mouse::getPosition(*renderer);

    // Update mouse state
    mouseState = sf::Mouse::isButtonPressed(sf::Mouse::Left);
    
    // Update camera translation
    if (action.type == sf::Event::MouseMoved && mouseState)
    {   
        
        sf::Vector2i world = sf::Vector2i(action.mouseMove.x, action.mouseMove.y);
        sf::Vector2f delta = sf::Vector2f(lastMousePosition - world);
        view.move(delta * zoomValue * factor);
    }

}

// Handle camera zoom
void Camera::zoom(sf::Event& action, float factor)
{
    
    // Update zoom value
    if (action.type == sf::Event::MouseWheelMoved)
    {
        float value = 1  - (factor * action.mouseWheel.delta);
        zoomValue *= value;
        view.zoom(value);
    }
    
}


// Activate camera view
void Camera::activate(sf::RenderWindow* renderer)
{
    
    renderer->setView(view);
    
}

