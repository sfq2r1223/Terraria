#include "Object.h"

void Object::setUpObject(const sf::Vector2i& sizeObj, bool hardnessObj, bool visuallyObj) noexcept
{
	this->sizeObj =			sizeObj;
	this->hardnessObj =		hardnessObj;
	this->visuallyObj =		visuallyObj;
}

void Object::setSize(const sf::Vector2i& newSize) noexcept { this->sizeObj = newSize; }
void Object::setVisually(const bool newVisually) noexcept { this->visuallyObj = newVisually; }
void Object::setHardness(const bool newHardness) noexcept { this->hardnessObj = newHardness; }

sf::Vector2i Object::getSize() const noexcept { return sizeObj; }
bool Object::getHardness() const noexcept { return hardnessObj; }
bool Object::getVisually() const noexcept { return visuallyObj; }