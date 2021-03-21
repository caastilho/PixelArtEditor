#pragma once
#include <SFML/Graphics.hpp>
#include <cmath>


// Get distance between two vectors
float getDistance(sf::Vector2f a, sf::Vector2f b);

// Get magnitude between two vectors
float getMagnitude(sf::Vector2f source);

// Normalize vector values
sf::Vector2f normalize(sf::Vector2f source);

// Constrain vector values
sf::Vector2f constrain(sf::Vector2f source, float maximum);
