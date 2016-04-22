// SpaceObject
#ifndef SPACEOBJECT_H
#define SPACEOBJECT_H

#include <SFML/Graphics.hpp>
#include <iostream>

class SpaceObject: public sf::Drawable {
public:
	~SpaceObject();
	SpaceObject(double mass, double velocity, sf::Vector2f x, sf::Vector2f y);
	void setMass(double mass);
	void setVelocity(double velocity);
	void setLocation(double x, double y);

	double getMass();
	double getVelocity();
	sf::Vector2f getLocation();
	virtual void sf::Drawable::draw	(RenderTarget & target, RenderStates states ) const;
private:
	double mass_;
	double velocity_;
	sf::Vector2f point_;
}

#endif