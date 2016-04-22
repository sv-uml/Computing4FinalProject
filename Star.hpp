// Star
#ifndef STAR_H
#define STAR_H

#include <iostream>

class Star: public SpaceObject {
public:
	~Star();
	Star(double radius, sf::Vector2f x, sf::Vector2f y);

private:
	double radius_;
	sf::Vector2f point_;
}