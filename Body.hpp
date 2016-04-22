// Body
#ifndef BODY_H
#define BODY_H

#include <iostream>

class Body: public SpaceObject {
public:
	~Body();
	Body(double velocity);
	void step(double seconds);

private:
	double velocity_;
}