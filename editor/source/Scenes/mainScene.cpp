#include <Scenes/mainScene.hpp>


// Setup scene environment
void MainScene::setup(sf::RenderWindow* _renderer, AssetsManager manager)
{
    
    // Setup renderer object
    renderer = _renderer;
    sf::Vector2u size = renderer->getSize();

    // Setup background color
    background = sf::Color(90, 90, 90);
    

    // Setup brush object
    brush.setBrushColor(sf::Color::Black);
    
    // Setup canvas environment
    canvas = Canvas(renderer);
    canvas.create(100, 100);
    canvas.currentLayer(0, brush);
    
    // Setup camera viewport
    drawingCamera.setup(size.x, size.y);
    drawingCamera.centerCanvas(100, 100);
    
}

// Run scene environment
void MainScene::run(bool isFocused)
{
    
    // Clear renderer buffer content
    renderer->clear(background);
    
    
    // Activate drawing camera view
    drawingCamera.activate(renderer);
    
    // Edit current layer content
    brush.editLayer(isFocused, renderer);
    
    // Display canvas content
    canvas.display();
    
}

// Run scene event handler
void MainScene::events(sf::Event& action)
{
    
    // Translate camera view
    if (brush.isMovable())
        drawingCamera.translate(action, renderer, -1.5);
    
    // Zoom camera view
    drawingCamera.zoom(action, 0.1);
    
}
