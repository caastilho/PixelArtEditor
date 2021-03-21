#include <Math/vector.hpp>


// Get distance between two vectors
float getDistance(sf::Vector2f a, sf::Vector2f b)
{
    return getMagnitude(a - b);
}

// Get magnitude between two vectors
float getMagnitude(sf::Vector2f source)
{
    return sqrt(pow(source.x, 2) + pow(source.y, 2));
}

// Normalize vector values
sf::Vector2f normalize(sf::Vector2f source)
{
    float magnitude = getMagnitude(source);
    return source / magnitude;
}

// Constrain vector values
sf::Vector2f constrain(sf::Vector2f source, float maximum)
{
    return sf::Vector2f(std::min(source.x, maximum), std::min(source.y, maximum));
}
